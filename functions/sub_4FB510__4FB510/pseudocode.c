void __thiscall sub_4FB510(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *i; // eax
  _DWORD *v5; // eax

  if ( !*(this + 2) ) /*0x4fb513*/
  {
    v3 = (_DWORD *)FormHeapAlloc(8u); /*0x4fb51c*/
    if ( v3 ) /*0x4fb526*/
    {
      *v3 = 0; /*0x4fb528*/
      v3[1] = 0; /*0x4fb52e*/
    }
    else
    {
      v3 = 0; /*0x4fb537*/
    }
    *(this + 2) = v3; /*0x4fb539*/
  }
  for ( i = (_DWORD *)*(this + 2); i; i = (_DWORD *)i[1] ) /*0x4fb545*/
  {
    if ( !*i ) /*0x4fb547*/
      break; /*0x4fb54b*/
    if ( *(_DWORD *)*i == a2 ) /*0x4fb54f*/
      return; /*0x4fb54f*/
  }
  v5 = (_DWORD *)FormHeapAlloc(8u); /*0x4fb55a*/
  *v5 = a2; /*0x4fb562*/
  v5[1] = 0; /*0x4fb564*/
  BSSimpleList_PushFront((_DWORD *)*(this + 2), (int)v5); /*0x4fb56f*/
}
