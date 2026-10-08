_DWORD *__thiscall TESObjectListHead_RemoveObject(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  _DWORD *result; // eax
  _DWORD *v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = (_DWORD *)*(this + 1); /*0x4b23c0*/
  result = a2; /*0x4b23c3*/
  if ( a2 == v2 ) /*0x4b23c9*/
    *(this + 1) = v2[8]; /*0x4b23ce*/
  v4 = (_DWORD *)*(this + 2); /*0x4b23d1*/
  if ( a2 == v4 ) /*0x4b23d6*/
    *(this + 2) = v4[7]; /*0x4b23db*/
  v5 = a2[7]; /*0x4b23de*/
  if ( v5 ) /*0x4b23e4*/
    *(_DWORD *)(v5 + 0x20) = a2[8]; /*0x4b23e9*/
  v6 = a2[8]; /*0x4b23ec*/
  if ( v6 ) /*0x4b23f1*/
    *(_DWORD *)(v6 + 0x1C) = a2[7]; /*0x4b23f6*/
  a2[6] = 0; /*0x4b23f9*/
  --*this; /*0x4b2400*/
  return result; /*0x4b2404*/
}
