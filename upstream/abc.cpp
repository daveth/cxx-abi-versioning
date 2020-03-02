export module abc;

export namespace abc
{
  namespace v1 { struct foo { foo(); }; }
  namespace v2 { struct foo { foo(); }; }
  namespace v3 { struct foo { foo(); }; }
  inline namespace v4 { struct foo { foo(); }; }
}
