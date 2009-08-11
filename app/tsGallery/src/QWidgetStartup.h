// This file is part of TouchSheep.
// 
//     TouchSheep is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
// 
//     TouchSheep is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
// 
//     You should have received a copy of the GNU General Public License
//     along with TouchSheep.  If not, see <http://www.gnu.org/licenses/>.

#ifndef QWIDGETSTARTUP_H
#define QWIDGETSTARTUP_H

#include <QWidget>

class TouchSheep;
class TSListenerGallery;
class TSVideoDisplay;

class QPushButton;

class QWidgetStartup: public QWidget{
Q_OBJECT
public:
	QWidgetStartup(TouchSheep* ts);
private:
	
	void initComponents();
	
	TouchSheep* touchSheep;
	TSListenerGallery *tsListenerGallery;
	TSVideoDisplay *tsVideoDisplay;
	QPushButton *qPushButtonMark;
public slots:
	void qPushButtonMarkClick();
};

#endif
