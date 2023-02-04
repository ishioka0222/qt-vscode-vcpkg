#include "widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent) {
  new QLabel("hello, world", this);
}

Widget::~Widget() {}
