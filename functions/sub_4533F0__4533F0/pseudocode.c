int __thiscall sub_4533F0(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int result; // eax
  _DWORD *v6; // ecx
  int v7; // [esp-8h] [ebp-10h]
  int v8; // [esp-8h] [ebp-10h]

  if ( (_BYTE)a3 ) /*0x4533fd*/
  {
    v4 = (_DWORD *)*(this + 1); /*0x4533ff*/
    if ( v4 ) /*0x453404*/
    {
      v7 = *(_DWORD *)(a2 + 0xC); /*0x45340e*/
      a3 = 0; /*0x45340f*/
      NiTMap_GetAt(v4, v7, &a3); /*0x453417*/
      result = a3; /*0x45341c*/
      if ( a3 ) /*0x453422*/
        return *(_DWORD *)result; /*0x453422*/
    }
  }
  v8 = *(_DWORD *)(a2 + 0xC); /*0x453433*/
  v6 = (_DWORD *)*this; /*0x453434*/
  a3 = 0; /*0x453436*/
  NiTMap_GetAt(v6, v8, &a3); /*0x45343e*/
  result = a3; /*0x453443*/
  if ( a3 ) /*0x453449*/
    return *(_DWORD *)result; /*0x453424*/
  return result; /*0x453426*/
}
