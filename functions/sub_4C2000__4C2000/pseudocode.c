void __thiscall sub_4C2000(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  bool v7; // zf
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  NiGeometryData *v11; // esi
  _DWORD *v12; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  _DWORD v14[2]; // [esp+0h] [ebp-Ch] BYREF
  char v15; // [esp+8h] [ebp-4h]

  v4 = (_DWORD *)*(this + 9); /*0x4c2000*/
  if ( !v4 || !v4[1] ) /*0x4c200a*/
    goto LABEL_18; /*0x4c200a*/
  v5 = v4[3]; /*0x4c203d*/
  if ( v5 && *(_DWORD *)(v5 + 4 * a2) ) /*0x4c2048*/
  {
    v6 = (_DWORD *)(*(_DWORD *)(v5 + 4 * a2) + 0x10 * a3); /*0x4c2055*/
    *(_DWORD *)a4 = *v6; /*0x4c205e*/
    *(_DWORD *)(a4 + 4) = v6[1]; /*0x4c2063*/
    *(_DWORD *)(a4 + 8) = v6[2]; /*0x4c2069*/
    *(_DWORD *)(a4 + 0xC) = v6[3]; /*0x4c206f*/
    return; /*0x4c2075*/
  }
  if ( !*v4 ) /*0x4c2078*/
    goto LABEL_18; /*0x4c2078*/
  v7 = *(_DWORD *)(*v4 + 4 * a2) == 0; /*0x4c2084*/
  v8 = (int *)(*v4 + 4 * a2); /*0x4c2088*/
  if ( v7 ) /*0x4c208b*/
    goto LABEL_18; /*0x4c208b*/
  v9 = *v8; /*0x4c2091*/
  if ( *(_WORD *)(v9 + 0xB6) ) /*0x4c2093*/
    v10 = **(_DWORD **)(v9 + 0xB0); /*0x4c20a7*/
  else
    v10 = 0; /*0x4c209d*/
  v11 = *(NiGeometryData **)(v10 + 0xB4); /*0x4c20a9*/
  if ( v11->member.m_pkNormal ) /*0x4c20af*/
  {
    v12 = (_DWORD *)((char *)v11->member.m_pkColor + 0x10 * a3); /*0x4c20c6*/
    *(_DWORD *)a4 = *v12; /*0x4c20c8*/
    *(_DWORD *)(a4 + 4) = v12[1]; /*0x4c20cd*/
    *(_DWORD *)(a4 + 8) = v12[2]; /*0x4c20d3*/
    *(_DWORD *)(a4 + 0xC) = v12[3]; /*0x4c20d9*/
    return; /*0x4c20e0*/
  }
  v14[0] = 0; /*0x4c20e3*/
  v14[1] = 0; /*0x4c20eb*/
  v15 = 0; /*0x4c20f3*/
  m_spAdditionalGeomData = v11->member.m_spAdditionalGeomData; /*0x4c20f8*/
  if ( m_spAdditionalGeomData /*0x4c210e*/
    && (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x4C))(m_spAdditionalGeomData)
    && NiGeometryData_LockVertexStream(v11, 1) )
  {
    sub_728DB0((int)v11, (int)v14); /*0x4c211e*/
    sub_4C1440(v14, a3, (float *)a4); /*0x4c2131*/
    NiGeometryData_UnlockVertexStream(v11); /*0x4c2138*/
  }
  else
  {
LABEL_18:
    *(_DWORD *)a4 = dword_B25AE0; /*0x4c214e*/
    *(_DWORD *)(a4 + 4) = dword_B25AE4; /*0x4c2156*/
    *(_DWORD *)(a4 + 8) = dword_B25AE8; /*0x4c215f*/
    *(_DWORD *)(a4 + 0xC) = dword_B25AEC; /*0x4c2168*/
  }
}
