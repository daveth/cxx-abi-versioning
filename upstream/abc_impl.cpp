module;
#include <cstdio>
module abc;

abc::v1::foo::foo() { puts("(from upstream libabc) abc::v1::foo::foo()"); }
abc::v2::foo::foo() { puts("(from upstream libabc) abc::v2::foo::foo()"); }
abc::v3::foo::foo() { puts("(from upstream libabc) abc::v3::foo::foo()"); }
abc::v4::foo::foo() { puts("(from upstream libabc) abc::v4::foo::foo()"); }
