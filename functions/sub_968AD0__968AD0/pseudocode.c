_DWORD *__thiscall sub_968AD0(char *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x40u);
  if ( !result )
    return 0;
  *result = &NiBoxBV::`vftable';
  qmemcpy(result + 1, this + 4, 0x3Cu);
  return result;
}
