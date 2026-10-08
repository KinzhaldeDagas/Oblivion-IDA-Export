_DWORD *__thiscall TESObjectListHead_AddObject(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  _DWORD *result; // eax
  int v4; // esi

  v2 = *(this + 2); /*0x4b2b80*/
  result = a2; /*0x4b2b85*/
  a2[7] = v2; /*0x4b2b89*/
  if ( v2 ) /*0x4b2b8c*/
  {
    a2[8] = *(_DWORD *)(v2 + 0x20); /*0x4b2b92*/
    v4 = *(_DWORD *)(v2 + 0x20); /*0x4b2b95*/
    if ( v4 ) /*0x4b2b9a*/
      *(_DWORD *)(v4 + 0x1C) = a2; /*0x4b2b9c*/
    *(_DWORD *)(v2 + 0x20) = a2; /*0x4b2b9f*/
  }
  else
  {
    a2[8] = 0; /*0x4b2ba5*/
  }
  if ( !a2[8] ) /*0x4b2bac*/
    *(this + 2) = a2; /*0x4b2bb2*/
  if ( !a2[7] ) /*0x4b2bb5*/
    *(this + 1) = a2; /*0x4b2bbb*/
  ++*this; /*0x4b2bbe*/
  a2[6] = this; /*0x4b2bc1*/
  return result; /*0x4b2bc4*/
}
