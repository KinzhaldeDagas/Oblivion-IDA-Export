bool __thiscall sub_4FB5F0(_DWORD *this, int a2, int a3)
{
  int i; // eax
  _DWORD *v4; // edx

  for ( i = *(this + 2); i; i = *(_DWORD *)(i + 4) ) /*0x4fb5fa*/
  {
    v4 = *(_DWORD **)i; /*0x4fb600*/
    if ( !*(_DWORD *)i ) /*0x4fb600*/
      break; /*0x4fb600*/
    if ( *v4 == a2 ) /*0x4fb608*/
      return (a3 & v4[1]) != 0; /*0x4fb624*/
  }
  sub_4FB510(this, a2); /*0x4fb611*/
  return 0; /*0x4fb619*/
}
