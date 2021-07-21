# QHBoxLayout

수평 레이아웃.

column 로 구성된 레이아웃.

## 자주 사용하는 메서드

* setSpacing(int) : 배치된 위젯간의 거리를 설정
* setStretch(int index, int stretch) : index 번째(column)의 stretch를 변경
* setMargin(int) : 전체 margin 을 동일하게 변경
* setContentsMargins(int left, int top, int right, int bottom) : 각 margin 을 변경
* addWidget : 내부에 위젯을 추가 (stretch 설정 가능)
* addLayout : 내부에 레이아웃을 추가

## 결과 화면

![hboxlayout-sample](/03_hboxlayout_sample/img/hboxlayout.png)