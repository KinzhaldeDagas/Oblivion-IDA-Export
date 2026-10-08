// Verified (Oblivion): generates a particle along the target node's local ray using rayLength_74, optionally transforms it to world coordinates when bWorldspace_78 is set, and writes the 0x20-byte slot record. This is emitterType_70 value 2, kParticleShaderEmitter_Ray.
int __thiscall ParticleShaderProperty_GenerateFromRay(ParticleShaderProperty *this, unsigned int slotIndex)
{
  NiAVObject *v3; // edi
  double v4; // st6
  int v5; // eax
  int v6; // eax
  NiTransform *p_m_worldTransform; // edi
  float y; // ecx
  float z; // edx
  int result; // eax
  float v11; // [esp+8h] [ebp-2Ch]
  float v12; // [esp+8h] [ebp-2Ch]
  float v13; // [esp+8h] [ebp-2Ch]
  float v14; // [esp+Ch] [ebp-28h]
  NiPoint3 v15; // [esp+10h] [ebp-24h] BYREF
  NiPoint3 v16; // [esp+1Ch] [ebp-18h] BYREF
  float v17; // [esp+28h] [ebp-Ch] BYREF
  float v18; // [esp+2Ch] [ebp-8h]
  float v19; // [esp+30h] [ebp-4h]

  if ( HIWORD(this->TargetArray_110.length) ) /*0x7e5026*/
  {
    v3 = *this->TargetArray_110.items; /*0x7e503b*/
    if ( v3 ) /*0x7e503f*/
    {
      v11 = (double)rand() / dbl_A3D5A8; /*0x7e5058*/
      v17 = 0.0; /*0x7e505e*/
      v4 = this->rayLength_74 * v11; /*0x7e5065*/
      v16.x = 0.0; /*0x7e506d*/
      v18 = v4; /*0x7e5071*/
      v16.y = v18; /*0x7e5079*/
      v19 = 0.0; /*0x7e507d*/
      v16.z = 0.0; /*0x7e5085*/
      v5 = rand(); /*0x7e5089*/
      v12 = ((double)v5 + (double)v5) / dbl_A3D5A8 - dbl_A2F928; /*0x7e50a4*/
      v14 = v12; /*0x7e50ac*/
      v6 = rand(); /*0x7e50b0*/
      v13 = ((double)v6 + (double)v6) / dbl_A3D5A8 - dbl_A2F928; /*0x7e50cb*/
      v17 = v13; /*0x7e50d3*/
      v15.x = v13; /*0x7e50dd*/
      v18 = 0.0; /*0x7e50e1*/
      v19 = v14; /*0x7e50f1*/
      v15.y = 0.0; /*0x7e50f5*/
      v15.z = v14; /*0x7e50fd*/
      Vector3_NormalizeInPlace(&v15.x); /*0x7e5101*/
      if ( this->bWorldspace_78 )               // Verified (Oblivion): when bWorldspace_78 is true, ray-generated position and direction are transformed by the target node's world transform. /*0x7e5108*/
      {
        p_m_worldTransform = &v3->members.m_worldTransform; /*0x7e5117*/
        v16 = *(NiPoint3 *)NiTransform_TransformPoint(p_m_worldTransform, &v17, &v16); /*0x7e5124*/
        v15 = *(NiPoint3 *)&sub_7101F0(p_m_worldTransform, (NiTransform *)&v17, &v15)->rot.data[0][0]; /*0x7e5149*/
      }
    }
  }
  else
  {
    y = g_zeroNiPoint3.y; /*0x7e5162*/
    z = g_zeroNiPoint3.z; /*0x7e5168*/
    v16.x = g_zeroNiPoint3.x; /*0x7e516e*/
    v16.y = y; /*0x7e5172*/
    v16.z = z; /*0x7e5176*/
    v15.x = v16.x; /*0x7e517a*/
    v15.y = y; /*0x7e517e*/
    v15.z = z; /*0x7e5182*/
  }
  result = slotIndex; /*0x7e5191*/
  this->particleInstanceBuffer_6C[result].position_00 = v16; /*0x7e5194*/
  this->particleInstanceBuffer_6C[result].birthTime_0C = this->simulationTime_F8; /*0x7e51b7*/
  this->particleInstanceBuffer_6C[result].directionOrNormal_10 = v15; /*0x7e51c2*/
  return result * 0x20; /*0x7e51dd*/
}
