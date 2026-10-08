// Verified (Oblivion): samples a target geometry with non-null skinData and stores a transformed particle position/direction; this is emitterType_70 value 1, kParticleShaderEmitter_SkinnedGeometry. Fallout calls the analogous mode GenerateFromCollisionBones; correspondence to that exact label is Probable.
int __thiscall ParticleShaderProperty_GenerateFromSkinnedGeometry(ParticleShaderProperty *this, unsigned int slotIndex)
{
  NiAVObject *v3; // esi
  float *m_parent; // ebx
  double v5; // st7
  int v6; // eax
  int v7; // eax
  float y; // edx
  float z; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // ecx
  float v14; // edx
  int result; // eax
  float v16; // [esp+Ch] [ebp-3Ch]
  float v17; // [esp+Ch] [ebp-3Ch]
  float v18; // [esp+Ch] [ebp-3Ch]
  float v19; // [esp+Ch] [ebp-3Ch]
  float v20; // [esp+Ch] [ebp-3Ch]
  float v21; // [esp+10h] [ebp-38h]
  float v22; // [esp+10h] [ebp-38h]
  float v23; // [esp+10h] [ebp-38h]
  float v24; // [esp+10h] [ebp-38h]
  float v25; // [esp+14h] [ebp-34h]
  NiPoint3 v26; // [esp+18h] [ebp-30h] BYREF
  float x; // [esp+24h] [ebp-24h]
  float v28; // [esp+28h] [ebp-20h]
  float v29; // [esp+2Ch] [ebp-1Ch]
  float v30; // [esp+30h] [ebp-18h]
  float v31; // [esp+34h] [ebp-14h]
  float v32; // [esp+38h] [ebp-10h]
  float v33; // [esp+3Ch] [ebp-Ch] BYREF
  float v34; // [esp+40h] [ebp-8h]
  float v35; // [esp+44h] [ebp-4h]

  if ( HIWORD(this->TargetArray_110.length) ) /*0x7e4d28*/
  {
    do /*0x7e4d51*/
      v3 = this->TargetArray_110.items[rand() % (unsigned int)HIWORD(this->TargetArray_110.length)]; /*0x7e4d4c*/
    while ( !v3 ); /*0x7e4d51*/
    if ( LOWORD(v3[1].members.super.m_controller) && (m_parent = (float *)v3->members.m_parent) != 0 ) /*0x7e4d66*/
    {
      v16 = (double)rand() / dbl_A3D5A8; /*0x7e4d7f*/
      v5 = v16; /*0x7e4d83*/
      v17 = 1.0 - v16; /*0x7e4d8d*/
      x = m_parent[0x22] * v17; /*0x7e4da1*/
      v28 = m_parent[0x23] * v17; /*0x7e4dad*/
      v29 = v17 * m_parent[0x24]; /*0x7e4db7*/
      v30 = v3->members.m_worldTransform.pos.x * v5; /*0x7e4dc3*/
      v31 = v3->members.m_worldTransform.pos.y * v5; /*0x7e4dcf*/
      v32 = v5 * v3->members.m_worldTransform.pos.z; /*0x7e4dd9*/
      v33 = v30 + x; /*0x7e4de5*/
      x = v33; /*0x7e4df1*/
      v34 = v31 + v28; /*0x7e4df9*/
      v28 = v34; /*0x7e4e05*/
      v35 = v29 + v32; /*0x7e4e0d*/
      v29 = v35; /*0x7e4e15*/
      v6 = rand(); /*0x7e4e19*/
      v18 = ((double)v6 + (double)v6) / dbl_A3D5A8 - dbl_A2F928; /*0x7e4e34*/
      v21 = v18; /*0x7e4e3c*/
      v7 = rand(); /*0x7e4e40*/
      v19 = ((double)v7 + (double)v7) / dbl_A3D5A8 - dbl_A2F928; /*0x7e4e5b*/
      v33 = v19; /*0x7e4e63*/
      v26.x = v19; /*0x7e4e6d*/
      v34 = 0.0; /*0x7e4e71*/
      v35 = v21; /*0x7e4e81*/
      v26.y = 0.0; /*0x7e4e85*/
      v26.z = v21; /*0x7e4e8d*/
      Vector3_NormalizeInPlace(&v26.x); /*0x7e4e91*/
      v26 = *(NiPoint3 *)&sub_7101F0(&v3->members.m_worldTransform, (NiTransform *)&v33, &v26)->rot.data[0][0]; /*0x7e4eac*/
    }
    else
    {
      y = v3->members.m_worldTransform.pos.y; /*0x7e4ec9*/
      z = v3->members.m_worldTransform.pos.z; /*0x7e4ecf*/
      x = v3->members.m_worldTransform.pos.x; /*0x7e4ed5*/
      v28 = y; /*0x7e4ed9*/
      v29 = z; /*0x7e4edd*/
      v10 = rand(); /*0x7e4ee1*/
      v22 = ((double)v10 + (double)v10) / dbl_A3D5A8 - dbl_A2F928; /*0x7e4efc*/
      v25 = v22; /*0x7e4f04*/
      v11 = rand(); /*0x7e4f08*/
      v23 = ((double)v11 + (double)v11) / dbl_A3D5A8 - dbl_A2F928; /*0x7e4f23*/
      v20 = v23; /*0x7e4f2b*/
      v12 = rand(); /*0x7e4f2f*/
      v24 = ((double)v12 + (double)v12) / dbl_A3D5A8 - dbl_A2F928; /*0x7e4f4a*/
      v33 = v24; /*0x7e4f52*/
      v26.x = v24; /*0x7e4f5e*/
      v34 = v20; /*0x7e4f62*/
      v35 = v25; /*0x7e4f72*/
      v26.y = v20; /*0x7e4f7a*/
      v26.z = v25; /*0x7e4f7e*/
      Vector3_NormalizeInPlace(&v26.x); /*0x7e4f82*/
    }
  }
  else
  {
    v13 = g_zeroNiPoint3.y; /*0x7e4f90*/
    v14 = g_zeroNiPoint3.z; /*0x7e4f96*/
    x = g_zeroNiPoint3.x; /*0x7e4f9c*/
    v28 = v13; /*0x7e4fa0*/
    v29 = v14; /*0x7e4fa4*/
    v26.x = x; /*0x7e4fa8*/
    v26.y = v13; /*0x7e4fac*/
    v26.z = v14; /*0x7e4fb0*/
  }
  result = slotIndex; /*0x7e4fbf*/
  this->particleInstanceBuffer_6C[result].position_00.x = x; /*0x7e4fc2*/
  this->particleInstanceBuffer_6C[result].position_00.y = v28; /*0x7e4fcc*/
  this->particleInstanceBuffer_6C[result].position_00.z = v29; /*0x7e4fd7*/
  this->particleInstanceBuffer_6C[result].birthTime_0C = this->simulationTime_F8; /*0x7e4fe4*/
  this->particleInstanceBuffer_6C[result].directionOrNormal_10 = v26; /*0x7e4fef*/
  return result * 0x20; /*0x7e500b*/
}
