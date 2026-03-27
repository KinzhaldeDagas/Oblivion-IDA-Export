_DWORD *__thiscall TESObjectListHead_AddObject(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  _DWORD *result; // eax
  int v4; // esi

  v2 = *(this + 2);
  result = a2;
  a2[7] = v2;
  if ( v2 )
  {
    a2[8] = *(_DWORD *)(v2 + 0x20);
    v4 = *(_DWORD *)(v2 + 0x20);
    if ( v4 )
      *(_DWORD *)(v4 + 0x1C) = a2;
    *(_DWORD *)(v2 + 0x20) = a2;
  }
  else
  {
    a2[8] = 0;
  }
  if ( !a2[8] )
    *(this + 2) = a2;
  if ( !a2[7] )
    *(this + 1) = a2;
  ++*this;
  a2[6] = this;
  return result;
}
