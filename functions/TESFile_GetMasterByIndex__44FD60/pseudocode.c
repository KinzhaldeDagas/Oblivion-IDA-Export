_DWORD *__thiscall TESFile_GetMasterByIndex(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  int v3; // eax

  result = this;
  if ( a2 > *(this + 0xFC) )
    return 0;
  if ( !a2 )
    return result;
  v3 = *(this + 0xFD);
  if ( v3 )
    return *(_DWORD **)(v3 + 4 * a2 - 4);
  else
    return 0;
}
