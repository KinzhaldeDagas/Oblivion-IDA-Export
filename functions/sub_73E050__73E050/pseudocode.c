bool __thiscall sub_73E050(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
  NiTriBasedGeomData *v3; // esi
  bool result; // al
  float y; // ebp
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // [esp+8h] [ebp-8h]

  v2 = a2;
  v3 = this;
  result = sub_700670(this, a2);
  if ( result )
  {
    y = v3->members.super.m_kBound.Center.y;
    if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) )
      return 0;
    v6 = 0;
    if ( y == 0.0 )
      return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(v3->members.super.m_kBound.Center.z)
                                                               + 0x2C))(
               LODWORD(v3->members.super.m_kBound.Center.z),
               *(_DWORD *)(v2 + 0x14)) != 0;
    v7 = *(_DWORD *)&v3->members.super.m_usVertices;
    v8 = *(_DWORD *)(a2 + 8);
    v9 = v7 + 4;
    v10 = v7 - v8;
    v11 = v10;
    while ( 1 )
    {
      if ( *(_WORD *)(v10 + v8) != *(_WORD *)v8
        && *(_WORD *)(v9 - 2) != *(_WORD *)(v8 + 2)
        && *(_WORD *)v9 != *(_WORD *)(v8 + 4)
        && *(_WORD *)(v9 + 2) != *(_WORD *)(v8 + 6)
        && *(_WORD *)(v9 + 4) != *(_WORD *)(v8 + 8)
        && *(_WORD *)(v9 + 6) != *(_WORD *)(v8 + 0xA) )
      {
        if ( sub_632310((float *)(v9 + 8), (float *)(v8 + 0xC)) )
          return 0;
        v10 = v11;
      }
      ++v6;
      v9 += 0x1C;
      v8 += 0x1C;
      if ( v6 >= LODWORD(y) )
      {
        v3 = this;
        v2 = a2;
        return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(v3->members.super.m_kBound.Center.z)
                                                                 + 0x2C))(
                 LODWORD(v3->members.super.m_kBound.Center.z),
                 *(_DWORD *)(v2 + 0x14)) != 0;
      }
    }
  }
  return result;
}
