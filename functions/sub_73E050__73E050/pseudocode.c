// Pass225: NiScreenTexture compare checks records and compares +0x14 referenced object.
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

  v2 = a2; /*0x73e055*/
  v3 = this; /*0x73e059*/
  result = sub_700670(this, a2); /*0x73e060*/
  if ( result ) /*0x73e067*/
  {
    y = v3->members.super.m_kBound.Center.y; /*0x73e072*/
    if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) ) /*0x73e078*/
      return 0; /*0x73e082*/
    v6 = 0; /*0x73e086*/
    if ( y == 0.0 ) /*0x73e08a*/
      return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(v3->members.super.m_kBound.Center.z) /*0x73e11d*/
                                                               + 0x2C))(
               LODWORD(v3->members.super.m_kBound.Center.z),
               *(_DWORD *)(v2 + 0x14)) != 0;
    v7 = *(_DWORD *)&v3->members.super.m_usVertices; /*0x73e08c*/
    v8 = *(_DWORD *)(a2 + 8); /*0x73e08f*/
    v9 = v7 + 4; /*0x73e092*/
    v10 = v7 - v8; /*0x73e095*/
    v11 = v10; /*0x73e097*/
    while ( 1 ) /*0x73e0a0*/
    {
      if ( *(_WORD *)(v10 + v8) != *(_WORD *)v8 /*0x73e0d8*/
        && *(_WORD *)(v9 - 2) != *(_WORD *)(v8 + 2)
        && *(_WORD *)v9 != *(_WORD *)(v8 + 4)
        && *(_WORD *)(v9 + 2) != *(_WORD *)(v8 + 6)
        && *(_WORD *)(v9 + 4) != *(_WORD *)(v8 + 8)
        && *(_WORD *)(v9 + 6) != *(_WORD *)(v8 + 0xA) )
      {
        if ( sub_632310((float *)(v9 + 8), (float *)(v8 + 0xC)) ) /*0x73e0e1*/
          return 0; /*0x73e123*/
        v10 = v11; /*0x73e0ea*/
      }
      ++v6; /*0x73e0ee*/
      v9 += 0x1C; /*0x73e0f1*/
      v8 += 0x1C; /*0x73e0f4*/
      if ( v6 >= LODWORD(y) ) /*0x73e0f9*/
      {
        v3 = this; /*0x73e0fb*/
        v2 = a2; /*0x73e0ff*/
        return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(v3->members.super.m_kBound.Center.z) /*0x73e0ff*/
                                                                 + 0x2C))(
                 LODWORD(v3->members.super.m_kBound.Center.z),
                 *(_DWORD *)(v2 + 0x14)) != 0;
      }
    }
  }
  return result; /*0x73e069*/
}
