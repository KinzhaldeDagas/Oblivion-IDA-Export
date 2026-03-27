NiAVObject *sub_74ECB0()
{
  NiAVObject *v0; // eax
  NiAVObject *v1; // esi

  v0 = (NiAVObject *)FormHeapAlloc(0xF8u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_749EE0(v0);
  v1[1].members.m_localTransform.rot.data[1][2] = 0.0;
  v1->vtbl = (NiAVObjectVtbl *)&NiMeshParticleSystem::`vftable';
  LOBYTE(v1[1].members.m_localTransform.rot.data[2][0]) = 1;
  return v1;
}
