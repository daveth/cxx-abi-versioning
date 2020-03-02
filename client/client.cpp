// client.cpp, module consumer, has a newer version of abc::foo available
// abc::foo in this context refers to abc::v4::foo
import abc;

int main()
{
  auto g = abc::foo{}; // g is a abc::v4::foo
}
