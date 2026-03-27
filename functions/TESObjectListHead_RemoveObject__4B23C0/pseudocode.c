_DWORD *__thiscall TESObjectListHead_RemoveObject(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  _DWORD *result; // eax
  _DWORD *v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = (_DWORD *)*(this + 1);
  result = a2;
  if ( a2 == v2 )
    *(this + 1) = v2[8];
  v4 = (_DWORD *)*(this + 2);
  if ( a2 == v4 )
    *(this + 2) = v4[7];
  v5 = a2[7];
  if ( v5 )
    *(_DWORD *)(v5 + 0x20) = a2[8];
  v6 = a2[8];
  if ( v6 )
    *(_DWORD *)(v6 + 0x1C) = a2[7];
  a2[6] = 0;
  --*this;
  return result;
}
