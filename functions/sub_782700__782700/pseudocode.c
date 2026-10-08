unsigned int __thiscall sub_782700(_DWORD *this, unsigned int a2)
{
  int v2; // edx
  unsigned int v3; // ebx
  _DWORD *v4; // esi
  unsigned int result; // eax
  unsigned int v6; // edi
  bool v7; // zf
  int v8; // edi
  unsigned int v9; // ebp
  unsigned int v10; // eax
  int v11; // edx

  v2 = *(this + 0xC); /*0x782700*/
  v3 = a2; /*0x782704*/
  v4 = *(_DWORD **)(v2 + 4 * a2); /*0x78270a*/
  result = 0; /*0x78270f*/
  if ( v4 ) /*0x782713*/
  {
    v6 = v4[5]; /*0x782719*/
    v7 = *(this + 8) - v6 == v4[3]; /*0x78271e*/
    a2 = v6; /*0x782721*/
    if ( v7 ) /*0x782725*/
    {
      *(this + 8) = 0; /*0x782729*/
      if ( v3 ) /*0x78272c*/
      {
        v8 = v2; /*0x78272e*/
        v9 = v3; /*0x782730*/
        do /*0x78274c*/
        {
          if ( *(_DWORD *)v8 ) /*0x782732*/
          {
            v10 = *(_DWORD *)(*(_DWORD *)v8 + 0xC) + *(_DWORD *)(*(_DWORD *)v8 + 0x14); /*0x78273b*/
            if ( v10 > *(this + 8) ) /*0x782741*/
              *(this + 8) = v10; /*0x782743*/
          }
          v8 += 4; /*0x782746*/
          --v9; /*0x782749*/
        }
        while ( v9 ); /*0x78274c*/
        v6 = a2; /*0x78274e*/
      }
    }
    v11 = *(this + 3) - *(this + 8); /*0x782757*/
    *(this + 0xA) += v6; /*0x78275a*/
    *(this + 9) = v11; /*0x782762*/
    a2 = 0; /*0x782769*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xB), v3, &a2); /*0x78276d*/
    v4[7] = 0; /*0x782772*/
    v4[6] = unk_B428D4; /*0x78277b*/
    if ( unk_B428D4 ) /*0x78277e*/
      *(_DWORD *)(unk_B428D4 + 0x1C) = v4; /*0x782787*/
    unk_B428D4 = (int)v4; /*0x78278c*/
    return v6; /*0x78278a*/
  }
  return result; /*0x782793*/
}
