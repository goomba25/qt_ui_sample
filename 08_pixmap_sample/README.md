# QPixmap

이미지를 다루기 위한 클래스로, QLabel에 이미지를 표시할 수 있다.

## 자주 사용하는 메서드

* setPixmap(const QPixmap &) : 이미지를 라벨에 표시하는 기능
* clear : 내용을 지우는 기능
* scaled(int w, int h,   
Qt::AspectRatioMode aspectMode = Qt::IgnoreAspectRatio,   
Qt::TransformationMode mode = Qt::FastTransformation) const   
: `AspectRatioMode` 및 `TransformationMode`로 지정된 종횡비 및 변형 모드로 Pixmap을 조정한다.

## 결과 화면

![result](/08_pixmap_sample/img/pixmap.png)