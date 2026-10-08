void __thiscall sub_4C1E80(_DWORD *this, int a2, int a3, float *a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  float *v6; // eax
  bool v7; // zf
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  NiGeometryData *v11; // esi
  NiPoint3 *m_pkNormal; // ecx
  float *p_x; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  float *v15; // eax
  float v16; // [esp+0h] [ebp-Ch] BYREF
  float v17; // [esp+4h] [ebp-8h]
  float v18; // [esp+8h] [ebp-4h]

  v4 = (_DWORD *)*(this + 9); /*0x4c1e80*/
  if ( !v4 || !v4[1] ) /*0x4c1e8a*/
    goto LABEL_18; /*0x4c1e8a*/
  v5 = v4[2]; /*0x4c1ebc*/
  if ( v5 && *(_DWORD *)(v5 + 4 * a2) ) /*0x4c1ec7*/
  {
    v6 = (float *)(*(_DWORD *)(v5 + 4 * a2) + 0xC * a3); /*0x4c1eda*/
    *a4 = *v6; /*0x4c1ee1*/
    a4[1] = v6[1]; /*0x4c1ee6*/
    a4[2] = v6[2]; /*0x4c1eec*/
    return; /*0x4c1ef2*/
  }
  if ( !*v4 ) /*0x4c1ef5*/
    goto LABEL_18; /*0x4c1ef5*/
  v7 = *(_DWORD *)(*v4 + 4 * a2) == 0; /*0x4c1f01*/
  v8 = (int *)(*v4 + 4 * a2); /*0x4c1f05*/
  if ( v7 ) /*0x4c1f08*/
    goto LABEL_18; /*0x4c1f08*/
  v9 = *v8; /*0x4c1f0e*/
  if ( *(_WORD *)(v9 + 0xB6) ) /*0x4c1f10*/
    v10 = **(_DWORD **)(v9 + 0xB0); /*0x4c1f24*/
  else
    v10 = 0; /*0x4c1f1a*/
  v11 = *(NiGeometryData **)(v10 + 0xB4); /*0x4c1f26*/
  m_pkNormal = v11->member.m_pkNormal; /*0x4c1f2c*/
  if ( m_pkNormal ) /*0x4c1f31*/
  {
    p_x = &m_pkNormal[a3].x; /*0x4c1f3d*/
    *a4 = *p_x; /*0x4c1f44*/
    a4[1] = p_x[1]; /*0x4c1f49*/
    a4[2] = p_x[2]; /*0x4c1f4f*/
    return; /*0x4c1f56*/
  }
  v16 = 0.0; /*0x4c1f59*/
  v17 = 0.0; /*0x4c1f61*/
  LOBYTE(v18) = 0; /*0x4c1f69*/
  m_spAdditionalGeomData = v11->member.m_spAdditionalGeomData; /*0x4c1f6e*/
  if ( m_spAdditionalGeomData /*0x4c1f84*/
    && (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x4C))(m_spAdditionalGeomData)
    && NiGeometryData_LockVertexStream(v11, 1) )
  {
    sub_728D00((int)v11, (int)&v16); /*0x4c1f94*/
    v15 = (float *)(LODWORD(v16) + a3 * LODWORD(v17)); /*0x4c1fa2*/
    *a4 = *v15; /*0x4c1fac*/
    a4[1] = v15[1]; /*0x4c1fb1*/
    a4[2] = v15[2]; /*0x4c1fb7*/
    NiGeometryData_UnlockVertexStream(v11); /*0x4c1fbc*/
  }
  else
  {
LABEL_18:
    *a4 = 0.0; /*0x4c1fe0*/
    v18 = 1.0; /*0x4c1fe2*/
    a4[1] = 0.0; /*0x4c1fe6*/
    a4[2] = v18; /*0x4c1fed*/
  }
}
