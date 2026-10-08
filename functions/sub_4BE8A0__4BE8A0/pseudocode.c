void sub_4BE8A0()
{
  _DWORD *v0; // eax
  int v1; // esi

  if ( !unk_B35B90 ) /*0x4be8c2*/
  {
    v0 = (_DWORD *)FormHeapAlloc(0x1Cu); /*0x4be8cd*/
    v1 = (int)v0; /*0x4be8d2*/
    if ( v0 ) /*0x4be8e5*/
      sub_4BE200(v0, 2u, 0x25, 0xC); /*0x4be8ef*/
    else
      v1 = 0; /*0x4be8f6*/
    unk_B35B90 = v1; /*0x4be8f8*/
  }
}
