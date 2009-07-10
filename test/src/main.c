#include "TSApplication.h"
#include "TSListener.h"

#include "stdio.h"

bool ok;
TSApplication* app;

class Teste: public TSListener{
	
	void performed (TSEvent* e){
		if(!ok){
			app->addTSMarker(358, 74, 414, 97, 1);
			app->addTSMarker(339, 346, 410, 391, 2);
			ok = true;
		}
		MarkerList list;
		list = e->markerList;
		while(list){
			cvEllipseBox(e->img, list->track_box, CV_RGB(255,0,0), 3, CV_AA, 0 );
			list = list->next;
		}
		cvShowImage("Teste", e->img);
	}
	
};

int main(){
	//CvCapture *cam = cvCaptureFromCAM(0);
	// Azul: (358, 74) (414, 97)
	// Vermelho: (339, 346) (410, 391)
	
	ok = false;
	
	cvNamedWindow("Teste");
	
	CvCapture *cam = cvCreateFileCapture("video01.mpg");
	if(!cam)
		return 0;
	
	app = new TSApplication(cam, 30, 10, 256, 30);
	
	TSListener* l;
	l = new Teste();
	
	app->addTSListener(l);
	
	int i;
	i = app->start();
	
	printf("%d", i);
	scanf("%d",&i);
}
