bool __thiscall sub_89E150(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // esi
  int v5; // esi
  int v6; // ecx

  result = sub_89D6F0(this, a2); /*0x89e159*/
  if ( result ) /*0x89e160*/
  {
    if ( this && (v4 = *(_DWORD *)&this->members.super.m_usVertices) != 0 ) /*0x89e16b*/
      v5 = *(_DWORD *)(v4 + 0x18); /*0x89e16d*/
    else
      v5 = 0; /*0x89e172*/
    if ( a2 && (v6 = *(_DWORD *)(a2 + 8)) != 0 ) /*0x89e17d*/
      return v5 == *(_DWORD *)(v6 + 0x18) && result; /*0x89e188*/
    else
      return v5 == 0 && result; /*0x89e195*/
  }
  return result; /*0x89e187*/
}
