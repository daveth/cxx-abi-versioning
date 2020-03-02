# cxx-abi-versioning
Testing out versioning ABI with modules and inline namespaces

## To try it out
```bash
mkdir client/out
cd client
make
./out/client
# should print "(from client libabc) abc::v3::foo::foo()"

cd ..
mkdir upstream/out
cd upstream
make
cp out/libabc.a ../client/out/
cd ../client
make out/client
./out/client
# should print "(from upstream libabc) abc::v3::foo::foo()"
```
## TODO
- Dynamic linking (!!)
- Actually have ABI breaking differences (add members to `abc::foo`)
- Use `abc::foo` in the interface of another target
