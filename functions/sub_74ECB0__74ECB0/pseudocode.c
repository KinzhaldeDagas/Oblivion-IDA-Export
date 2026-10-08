NiAVObject *sub_74ECB0()
{
  NiAVObject *v0; // eax
  NiAVObject *v1; // esi

  v0 = (NiAVObject *)FormHeapAlloc(0xF8u); /*0x74ecb6*/
  v1 = v0; /*0x74ecbb*/
  if ( !v0 ) /*0x74ecc2*/
    return 0; /*0x74ece4*/
  sub_749EE0(v0); /*0x74ecc6*/
  v1[1].members.m_localTransform.rot.data[1][2] = 0.0; /*0x74eccd*/
  v1->vtbl = (NiAVObjectVtbl *)&NiMeshParticleSystem::`vftable'; /*0x74ecd3*/
  LOBYTE(v1[1].members.m_localTransform.rot.data[2][0]) = 1; /*0x74ecd9*/
  return v1; /*0x74ece2*/
}
