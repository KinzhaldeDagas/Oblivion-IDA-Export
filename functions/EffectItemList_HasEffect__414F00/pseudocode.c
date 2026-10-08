char __thiscall EffectItemList_HasEffect(_DWORD *this, int a2, int a3)
{
  char result; // al
  _DWORD *v4; // edx
  bool v5; // bl
  int v6; // ecx

  if ( !*(this + 2) && !*(this + 1) ) /*0x414f06*/
    return 0; /*0x414f0c*/
  for ( result = 0; this; this = (_DWORD *)(v6 - 4) ) /*0x414f15*/
  {
    if ( result ) /*0x414f25*/
      break; /*0x414f25*/
    v4 = (_DWORD *)*(this + 1); /*0x414f27*/
    v5 = 1; /*0x414f2c*/
    if ( v4 ) /*0x414f2e*/
    {
      if ( a3 != 0x48 && (*(_DWORD *)(v4[7] + 0x58) & 0x180000) != 0 ) /*0x414f3f*/
        v5 = v4[5] == a3; /*0x414f44*/
      if ( *v4 == a2 && (*(_DWORD *)(v4[7] + 0x58) & 0x400000) == 0 && v5 ) /*0x414f5b*/
        result = 1; /*0x414f5d*/
    }
    v6 = *(this + 2); /*0x414f5f*/
    if ( !v6 ) /*0x414f64*/
      break; /*0x414f64*/
  }
  return result; /*0x414f0e*/
}
