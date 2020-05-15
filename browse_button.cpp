/*
* Copyright (C) 2019 Tianjin KYLIN Information Technology Co., Ltd.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, see <http://www.gnu.org/licenses/&gt;.
*
*/
#include"browse_button.h"

browse_button::browse_button(QWidget* parent) :QPushButton(parent)
{

}
browse_button::~browse_button()
{

}
void browse_button::enterEvent(QEvent *e)
{
    Q_UNUSED(e);
    setStyleSheet("font: 14px;background-color:rgb(107,142,235);color: rgb(255, 255, 255);border-radius:4px");
}
void browse_button::leaveEvent(QEvent *e)
{
    Q_UNUSED(e);
    setStyleSheet("font: 14px;background-color:rgb(233,233,233);color: rgb(68, 68, 68);border-radius:4px");
}
