// Pass205: Produces single generated displacement quad under global/root 0x00B35230 for water displacement setup.
NiAVObject *__stdcall sub_49E750(int a1, float a2)
{
  NiTriShapeData *v2; // eax
  NiAVObject *v3; // esi
  PlayerCharacter *v4; // eax
  float v5; // ecx
  float *pos; // eax
  float v7; // eax

  v2 = sub_49D2A0(a2, a2, 0x400, 1, 1, COERCE_FLOAT(1)); /*0x49e76f*/
  v3 = sub_498F70((NiScreenElementsData *)v2); /*0x49e77e*/
  v4 = reference; /*0x49e784*/
  if ( reference ) /*0x49e784*/
  {
    v5 = v4->super.super.super.super.pos[0]; /*0x49e795*/
    pos = v4->super.super.super.super.pos; /*0x49e798*/
    v3->members.m_localTransform.pos.x = v5; /*0x49e79b*/
    v3->members.m_localTransform.pos.y = pos[1]; /*0x49e7a1*/
    v7 = pos[2]; /*0x49e7a4*/
  }
  else
  {
    v7 = 0.0; /*0x49e7b1*/
    v3->members.m_localTransform.pos.x = 0.0; /*0x49e7b5*/
    v3->members.m_localTransform.pos.y = 0.0; /*0x49e7b8*/
  }
  v3->members.m_localTransform.pos.z = v7; /*0x49e7bb*/
  (*(void (__thiscall **)(_DWORD, NiAVObject *, int))(**(_DWORD **)&MEMORY[0xB33E90][0x13A0] + 0x84))( /*0x49e7cf*/
    *(_DWORD *)&MEMORY[0xB33E90][0x13A0],
    v3,
    1);
  NiNode_UpdateDynamicEffectState((NiNode *)v3); /*0x49e7d3*/
  BSShaderManager_AssignShadersRecursive(v3, 0x11u, 0, 1); /*0x49e7df*/
  return v3; /*0x49e7ea*/
}
