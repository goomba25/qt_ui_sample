# QGridLayout

격자 레이아웃.

row, column 으로 구성된 레이아웃.

vbox, hbox 레이아웃과는 다르게 row와 column을 입력해야한다.

## 자주 사용하는 메서드

* setSpacing(int) : 배치된 위젯간의 거리를 설정
* setRowStretch(int index, int stretch) : index 번째(row)의 stretch를 변경
* setColumnStretch(int index, int stretch) : index 번째(column)의 stretch를 변경
* setMargin(int) : 전체 margin 을 동일하게 변경
* setContentsMargins(int left, int top, int right, int bottom) : 각 margin 을 변경
* addWidget : 내부에 위젯을 추가 (span 설정 가능)
* addLayout : 내부에 레이아웃을 추가

## 결과 화면

![gridlayout-sample](/04_gridlayout_sample/img/gridlayout.png)