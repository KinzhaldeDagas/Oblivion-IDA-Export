void (__cdecl __noreturn *_init_pointers())(int Code)
{
  int v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_98D791(v0);
  sub_98DDF6(v0);
  sub_984C34(v0);
  sub_98DDEC(v0);
  _LN44_0(v0);
  _initp_misc_winsig(v0);
  nullsub_6(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_B30AC0 = result;
  return result;
}
