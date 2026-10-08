void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null(); /*0x981e11*/
  sub_98D791((int)v0); /*0x981e14*/
  sub_98DDF6((int)v0); /*0x981e1a*/
  sub_984C34((int)v0); /*0x981e20*/
  sub_98DDEC((int)v0); /*0x981e26*/
  _LN44_0((int)v0); /*0x981e2c*/
  _initp_misc_winsig((int)v0); /*0x981e32*/
  nullsub_6(); /*0x981e38*/
  _initp_eh_hooks(); /*0x981e3e*/
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit); /*0x981e48*/
  off_B30AC0 = result; /*0x981e50*/
  return result; /*0x981e55*/
}
