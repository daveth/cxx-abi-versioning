# cxx-abi-versioning
Testing out versioning ABI with modules and inline namespaces
The `client` project contains a dummy library `libabc` with v1, v2, and v3 of `foo`.
The `upstream` project contains the same library, but with v4 defined too.

## To try it out
Build `client` with libabc v3.
```bash
mkdir client/out
cd client
make
./out/client
# should print "(from client libabc) abc::v3::foo::foo()"
```
Build `upstream`, which provides libabc v4.
Replace the version of `libabc.a` that `client` links against, and rebuild client.
```bash
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
