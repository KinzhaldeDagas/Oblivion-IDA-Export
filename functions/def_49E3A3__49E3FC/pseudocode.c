// Pass205/206: Internal shared child-creation tail inside 0x0049E280; not standalone function. Later writes +0x71 for LODWaterRoot children.
// positive sp value has been detected, the output may be wrong!
NiNode *__usercall def_49E3A3@<eax>(float a1@<ebx>, int a2@<edi>)
{
  NiTriShapeData *v2; // eax
  NiAVObject *v3; // esi
  NiNode *result; // eax
  float v5; // [esp-34h] [ebp-4Ch]
  float v6; // [esp-30h] [ebp-48h]
  float v11; // [esp+8h] [ebp-10h]
  float v12; // [esp+Ch] [ebp-Ch]

  __asm
  {
    fstp    st(5); Pass205/206: Internal shared child-creation tail inside 0x0049E280; not standalone function. Later writes +0x71 for LODWaterRoot children.
    fstp    st(3)
    fstp    st(1)
    fstp    st
    fstp    st
    fstp    st
    fld     [esp+arg_10]
  }
  __asm { fstp    [esp+18h+var_14]; float }
  __asm
  {
    fld     [esp+18h+arg_14]
    fstp    [esp+18h+var_18]; float
  }
  v2 = sub_49D2A0(v5, v6, 0x100, 1, 1, COERCE_FLOAT(1)); /*0x49e427*/
  __asm { fld     [esp+arg_18] } /*0x49e434*/
  v3 = sub_498F70((NiScreenElementsData *)v2); /*0x49e438*/
  __asm /*0x49e43a*/
  {
    fstp    [esp+arg_20]
    fld     [esp+arg_1C]
  }
  v3->members.m_localTransform.pos.x = v11; /*0x49e446*/
  __asm { fstp    [esp+arg_24] } /*0x49e449*/
  v3->members.m_localTransform.pos.y = v12; /*0x49e451*/
  v3->members.m_localTransform.pos.z = a1; /*0x49e454*/
  (*(void (__thiscall **)(_DWORD, NiAVObject *, int))(**(_DWORD **)&MEMORY[0xB33E90][0x13A4] + 0x84))( /*0x49e468*/
    *(_DWORD *)&MEMORY[0xB33E90][0x13A4],
    v3,
    1);
  BSShaderManager_AssignShadersRecursive(v3, 0x11u, 0, 1); /*0x49e471*/
  BYTE1(NiNode_GetNiPropertyByID((NiNode *)v3, 4)[4].members.m_extraDataList) = 1;// Pass205/206: Writes WaterShaderProperty +0x71=1 for generated LODWaterRoot child. /*0x49e488*/
  if ( a2 + 1 < 4 ) /*0x49e48c*/
    JUMPOUT(0x49E370); /*0x49e370*/
  if ( byte_B07050 ) /*0x49e492*/
  {
    if ( OB_RendererGlobalState_010201A0[0xA5] ) /*0x49e49b*/
    {
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x49e4ab*/
        BSShaderManager_AssignShadersRecursive(*(NiAVObject **)&MEMORY[0xB33E90][0x13A4], 0x11u, 0, 1); /*0x49e4ba*/
    }
  }
  sub_499E40(); /*0x49e4c2*/
  result = *(NiNode **)&MEMORY[0xB33E90][0x13A4]; /*0x49e4c7*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A4] ) /*0x49e4c7*/
    result->members.super.m_flags &= ~1u; /*0x49e4d0*/
  return result; /*0x49e4e9*/
}
