pkgname=kat
pkgver=0.1
pkgrel=1
pkgdesk="kat is a cat"
arch=('any')
license=('GPL')
source=("main.cpp")
md5sums=('SKIP')
build(){
	cd "${srcdir}"
	g++ main.cpp -o kat
}
package(){
	cd "${srcdir}"
	install -Dm755 kat "${pkgdir}/usr/bin/kat"
}
