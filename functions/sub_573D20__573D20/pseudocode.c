unsigned int __thiscall sub_573D20(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = this + 8; /*0x573d24*/
  v3 = 0; /*0x573d27*/
  if ( a2 <= 0 ) /*0x573d2b*/
  {
LABEL_4:
    if ( v2 ) /*0x573d40*/
      return *v2; /*0x573d44*/
  }
  else
  {
    while ( v2 ) /*0x573d32*/
    {
      v2 = (_DWORD *)v2[1]; /*0x573d34*/
      if ( ++v3 >= a2 ) /*0x573d3c*/
        goto LABEL_4; /*0x573d3c*/
    }
  }
  return 0xFFFFFFFF; /*0x573d44*/
}
