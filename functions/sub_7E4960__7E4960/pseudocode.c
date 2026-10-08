// Verified (Oblivion): samples NiGeometryData vertices/normals from a target geometry and writes a new particle instance record at slotIndex. This is emitterType_70 value 0, kParticleShaderEmitter_Geometry.
int __thiscall ParticleShaderProperty_GenerateFromGeometry(ParticleShaderProperty *this, unsigned int slotIndex)
{
  float x; // eax
  float z; // edx
  bool v5; // zf
  float y; // ecx
  NiAVObject *v7; // edi
  NiInterpController *m_controller; // esi
  unsigned int v9; // ebx
  int v10; // esi
  float *v11; // ebx
  double v12; // st7
  int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // si
  unsigned int v16; // et2
  NiGeometryData *m_pcName; // esi
  unsigned int v18; // ebx
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  NiPoint3 *m_pkVertex; // eax
  NiPoint3 *v21; // eax
  NiPoint3 *m_pkNormal; // esi
  NiPoint3 *v23; // eax
  int result; // eax
  float v25; // [esp+10h] [ebp-50h]
  float v26; // [esp+10h] [ebp-50h]
  float v27; // [esp+10h] [ebp-50h]
  float v28; // [esp+10h] [ebp-50h]
  float v29; // [esp+14h] [ebp-4Ch]
  NiPoint3 v30; // [esp+18h] [ebp-48h] BYREF
  NiPoint3 v31; // [esp+24h] [ebp-3Ch] BYREF
  float v32; // [esp+30h] [ebp-30h]
  float v33; // [esp+34h] [ebp-2Ch]
  float v34; // [esp+38h] [ebp-28h]
  float v35; // [esp+3Ch] [ebp-24h] BYREF
  float v36; // [esp+40h] [ebp-20h]
  float v37; // [esp+44h] [ebp-1Ch]
  NiStridedVertexStream outVertices; // [esp+48h] [ebp-18h] BYREF
  NiPoint3 v39; // [esp+54h] [ebp-Ch] BYREF

  x = g_zeroNiPoint3.x; /*0x7e4963*/
  z = g_zeroNiPoint3.z; /*0x7e4968*/
  v5 = HIWORD(this->TargetArray_110.length) == 0; /*0x7e4972*/
  y = g_zeroNiPoint3.y; /*0x7e497a*/
  v30.x = x; /*0x7e4982*/
  v30.y = y; /*0x7e4986*/
  v30.z = z; /*0x7e498a*/
  v31.x = x; /*0x7e498e*/
  v31.y = y; /*0x7e4992*/
  v31.z = z; /*0x7e4996*/
  if ( v5 ) /*0x7e499a*/
  {
    v30.x = x; /*0x7e4c9a*/
    v30.y = y; /*0x7e4c9e*/
    v30.z = z; /*0x7e4ca2*/
    v31.x = x; /*0x7e4ca6*/
    v31.y = y; /*0x7e4caa*/
    v31.z = z; /*0x7e4cae*/
  }
  else
  {
    do /*0x7e49c4*/
    {
      do /*0x7e49bb*/
        v7 = this->TargetArray_110.items[rand() % (unsigned int)HIWORD(this->TargetArray_110.length)]; /*0x7e49b6*/
      while ( !v7 ); /*0x7e49bb*/
    }
    while ( !v7[1].members.super.m_pcName ); /*0x7e49c4*/
    m_controller = v7[1].members.super.m_controller; /*0x7e49c6*/
    if ( m_controller ) /*0x7e49ce*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)&m_controller->member.flags + 0x40); /*0x7e49d7*/
      v10 = *(_DWORD *)(LODWORD(m_controller->member.m_fLoKeyTime) + 4 * (rand() % v9)); /*0x7e49e6*/
      v11 = *(float **)(v10 + 0x1C); /*0x7e49e9*/
      v25 = (double)rand() / dbl_A3D5A8; /*0x7e49ff*/
      v12 = v25; /*0x7e4a03*/
      v26 = 1.0 - v25; /*0x7e4a0d*/
      v35 = v11[0x22] * v26; /*0x7e4a21*/
      v36 = v11[0x23] * v26; /*0x7e4a2d*/
      v37 = v26 * v11[0x24]; /*0x7e4a37*/
      v32 = *(float *)(v10 + 0x88) * v12; /*0x7e4a43*/
      v33 = *(float *)(v10 + 0x8C) * v12; /*0x7e4a4f*/
      v34 = v12 * *(float *)(v10 + 0x90); /*0x7e4a59*/
      *(float *)&outVertices.data = v32 + v35; /*0x7e4a65*/
      *(float *)&outVertices.stride = v33 + v36; /*0x7e4a79*/
      *(float *)&outVertices.unknown08 = v34 + v37; /*0x7e4a8d*/
      v30 = (NiPoint3)outVertices; /*0x7e4a95*/
      v13 = rand(); /*0x7e4a99*/
      v27 = ((double)v13 + (double)v13) / dbl_A3D5A8 - dbl_A2F928; /*0x7e4ab4*/
      v29 = v27; /*0x7e4abc*/
      v14 = rand(); /*0x7e4ac0*/
      v28 = ((double)v14 + (double)v14) / dbl_A3D5A8 - dbl_A2F928; /*0x7e4adf*/
      v39.x = v28; /*0x7e4ae7*/
      v39.y = 0.0; /*0x7e4aed*/
      v39.z = v29; /*0x7e4af5*/
      Vector3_NormalizeInPlace(&v39.x); /*0x7e4af9*/
      v31 = *(NiPoint3 *)&sub_7101F0(&v7->members.m_worldTransform, (NiTransform *)&outVertices, &v39)->rot.data[0][0]; /*0x7e4b14*/
    }
    else
    {
      v15 = *((_WORD *)v7[1].members.super.m_pcName + 4); /*0x7e4b31*/
      v16 = rand() % (unsigned int)v15; /*0x7e4b3f*/
      m_pcName = (NiGeometryData *)v7[1].members.super.m_pcName; /*0x7e4b41*/
      v18 = v16; /*0x7e4b49*/
      if ( m_pcName ) /*0x7e4b4b*/
      {
        m_spAdditionalGeomData = m_pcName->member.m_spAdditionalGeomData; /*0x7e4b51*/
        if ( m_spAdditionalGeomData /*0x7e4b61*/
          && (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x4C))(m_spAdditionalGeomData) )
        {
          memset(&outVertices, 0, 9); /*0x7e4b71*/
          v35 = 0.0; /*0x7e4b7d*/
          v36 = 0.0; /*0x7e4b81*/
          LOBYTE(v37) = 0; /*0x7e4b85*/
          if ( NiGeometryData_LockVertexStream(m_pcName, 1) ) /*0x7e4b89*/
          {
            NiGeometryData_GetLockedVertexStream(m_pcName, &outVertices); /*0x7e4b9d*/
            sub_728D00((int)m_pcName, (int)&v35); /*0x7e4ba9*/
            v30 = *(NiPoint3 *)((char *)outVertices.data + v18 * outVertices.stride); /*0x7e4bbb*/
            v31 = *(NiPoint3 *)(LODWORD(v35) + v18 * LODWORD(v36)); /*0x7e4bda*/
            NiGeometryData_UnlockVertexStream(m_pcName); /*0x7e4bee*/
          }
        }
        else
        {
          m_pkVertex = m_pcName->member.m_pkVertex; /*0x7e4bf5*/
          if ( m_pkVertex ) /*0x7e4bfa*/
            v21 = &m_pkVertex[v18]; /*0x7e4bff*/
          else
            v21 = &g_zeroNiPoint3; /*0x7e4c04*/
          v30 = *v21; /*0x7e4c0b*/
          m_pkNormal = m_pcName->member.m_pkNormal; /*0x7e4c1d*/
          if ( m_pkNormal ) /*0x7e4c22*/
            v23 = &m_pkNormal[v18]; /*0x7e4c27*/
          else
            v23 = &g_zeroNiPoint3; /*0x7e4c2c*/
          v31 = *v23; /*0x7e4c33*/
        }
        if ( this->bWorldspace_78 )             // Verified (Oblivion): when bWorldspace_78 is true, geometry/skinned-geometry samples are transformed by the source geometry's transform. /*0x7e4c45*/
        {
          v30 = *(NiPoint3 *)NiTransform_TransformPoint(&v7->members.m_worldTransform, &v39.x, &v30); /*0x7e4c61*/
          v31 = *(NiPoint3 *)&sub_7101F0(&v7->members.m_worldTransform, (NiTransform *)&v39, &v31)->rot.data[0][0]; /*0x7e4c86*/
        }
      }
    }
  }
  result = slotIndex; /*0x7e4cbd*/
  this->particleInstanceBuffer_6C[result].position_00 = v30; /*0x7e4cc0*/
  this->particleInstanceBuffer_6C[result].birthTime_0C = this->simulationTime_F8; /*0x7e4ce4*/
  this->particleInstanceBuffer_6C[result].directionOrNormal_10 = v31; /*0x7e4cef*/
  return result * 0x20; /*0x7e4d0a*/
}
