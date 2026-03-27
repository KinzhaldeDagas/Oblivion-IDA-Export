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
    fstp    st(5); jumptable 0049E3A3 default case
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
  v2 = sub_49D2A0(v5, v6, 0x100, 1, 1, COERCE_FLOAT(1));
  __asm { fld     [esp+arg_18] }
  v3 = sub_498F70((NiScreenElementsData *)v2);
  __asm
  {
    fstp    [esp+arg_20]
    fld     [esp+arg_1C]
  }
  v3->members.m_localTransform.pos.x = v11;
  __asm { fstp    [esp+arg_24] }
  v3->members.m_localTransform.pos.y = v12;
  v3->members.m_localTransform.pos.z = a1;
  ((void (__thiscall *)(NiNode *, NiAVObject *, int))LodWaterRoot->vtbl->AddObject)(LodWaterRoot, v3, 1);
  sub_7B8940(v3, 0x11, 0, 1);
  BYTE1(NiNode_GetNiPropertyByID((NiNode *)v3, 4)[4].members.m_extraDataList) = 1;
  if ( a2 + 1 < 4 )
    JUMPOUT(0x49E370);
  if ( byte_B07050 )
  {
    if ( ImageSpaceEffectEnabled )
    {
      if ( ShaderPackage >= 2 )
        sub_7B8940((NiAVObject *)LodWaterRoot, 0x11, 0, 1);
    }
  }
  sub_499E40();
  result = LodWaterRoot;
  if ( LodWaterRoot )
    result->members.super.m_flags &= ~1u;
  return result;
}
