_DWORD *__thiscall sub_96D600(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x14u);
  if ( !result )
    return 0;
  *result = &NiSphereBV::`vftable';
  result[1] = *(this + 1);
  result[2] = *(this + 2);
  result[3] = *(this + 3);
  result[4] = *(this + 4);
  return result;
}
