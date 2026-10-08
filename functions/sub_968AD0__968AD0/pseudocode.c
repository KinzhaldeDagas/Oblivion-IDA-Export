_DWORD *__thiscall sub_968AD0(char *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x40u); /*0x968ad5*/
  if ( !result ) /*0x968adf*/
    return 0; /*0x968af8*/
  *result = &NiBoxBV::`vftable'; /*0x968aed*/
  qmemcpy(result + 1, this + 4, 0x3Cu); /*0x968af3*/
  return result; /*0x968af6*/
}
