int __cdecl doexit(int a1, int a2, int a3)
{
  unsigned int v3; // edi
  void (**v5)(void); // [esp+10h] [ebp-1Ch]

  _lock(8);
  if ( dword_BA9DD4 != 1 )
  {
    dword_BA9DD0 = 1;
    byte_BA9DCC = a3;
    if ( !a2 )
    {
      v3 = _decode_pointer(dword_BABC10);
      v5 = (void (**)(void))_decode_pointer(dword_BABC0C);
      if ( v3 )
      {
        while ( 1 )
        {
          v5 += 0xFFFFFFFF;
          if ( (unsigned int)v5 < v3 )
            break;
          if ( *v5 )
            (*v5)();
        }
      }
      _initterm((int (*)(void))&_xt_a_0, (unsigned int)&_xt_z_0);
    }
    _initterm((int (*)(void))&_xt_a_1, (unsigned int)&_xt_z_1);
  }
  if ( a3 )
    _unlock(8);
  return doexit_::_LN16_0();
}
