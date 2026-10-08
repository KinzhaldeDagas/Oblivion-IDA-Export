bool __thiscall sub_89FE10(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // esi
  int v10; // eax

  result = sub_89D6F0(this, a2); /*0x89fe19*/
  if ( result ) /*0x89fe20*/
  {
    if ( this && (v4 = *(_DWORD *)&this->members.super.m_usVertices) != 0 ) /*0x89fe2b*/
      v5 = *(_DWORD *)(v4 + 0x18); /*0x89fe2d*/
    else
      v5 = 0; /*0x89fe32*/
    if ( a2 && (v6 = *(_DWORD *)(a2 + 8)) != 0 ) /*0x89fe3d*/
      v7 = *(_DWORD *)(v6 + 0x18); /*0x89fe3f*/
    else
      v7 = 0; /*0x89fe44*/
    result = v5 == v7; /*0x89fe48*/
    if ( result ) /*0x89fe4d*/
    {
      if ( this && (v8 = *(_DWORD *)&this->members.super.m_usVertices) != 0 ) /*0x89fe58*/
        v9 = *(_DWORD *)(v8 + 0x1C); /*0x89fe5a*/
      else
        v9 = 0; /*0x89fe5f*/
      if ( a2 && (v10 = *(_DWORD *)(a2 + 8)) != 0 ) /*0x89fe6a*/
        return v9 == *(_DWORD *)(v10 + 0x1C); /*0x89fe72*/
      else
        return v9 == 0; /*0x89fe7d*/
    }
  }
  return result; /*0x89fe71*/
}
