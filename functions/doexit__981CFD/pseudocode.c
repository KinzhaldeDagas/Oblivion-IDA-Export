void __cdecl doexit(int a1, int a2, int a3)
{
  int v3; // ebp
  void (**v4)(void); // edi
  void (**v5)(void); // [esp+10h] [ebp-1Ch]

  _lock(8); /*0x981d0b*/
  if ( *(_DWORD *)&byte_BA9DCC[8] != 1 ) /*0x981d1e*/
  {
    *(_DWORD *)&byte_BA9DCC[4] = 1; /*0x981d20*/
    byte_BA9DCC[0] = a3; /*0x981d29*/
    if ( !a2 ) /*0x981d32*/
    {
      v4 = (void (**)(void))_decode_pointer(dword_BABC10); /*0x981d3f*/
      v5 = (void (**)(void))_decode_pointer(dword_BABC0C); /*0x981d4e*/
      if ( v4 ) /*0x981d53*/
      {
        while ( 1 ) /*0x981d55*/
        {
          v5 += 0xFFFFFFFF; /*0x981d55*/
          if ( v5 < v4 ) /*0x981d5c*/
            break; /*0x981d5c*/
          if ( *v5 ) /*0x981d61*/
            (*v5)(); /*0x981d67*/
        }
      }
      _initterm(_xt_a_0, (unsigned int)&_xt_z_0); /*0x981d75*/
    }
    _initterm(_xt_a_1, (unsigned int)&_xt_z_1); /*0x981d85*/
  }
  if ( a3 ) /*0x981dba*/
    _unlock(8); /*0x981dbe*/
  doexit_::_LN16_0(v3, 1); /*0x981dc4*/
}
