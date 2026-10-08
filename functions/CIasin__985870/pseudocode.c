void __usercall _CIasin(unsigned __int64 a1@<st0>)
{
  int v1; // eax
  char v2; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x985870*/
  {
    v1 = _mm_getcsr() & 0x1F80; /*0x985885*/
    if ( v1 == 0x1F80 ) /*0x98588f*/
      _CIasin_::jnedef_0((v2 & 0x7F) == 0x7F); /*0x98589d*/
    else
      _CIasin_::jnedef_0(v1 == 0x1F80); /*0x98588f*/
  }
  else
  {
    _CIasin_::__CIasin_default(a1); /*0x985877*/
  }
}
