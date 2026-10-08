NiNode *__thiscall sub_8B9540(float *this, NiNode *a2)
{
  NiNode *v2; // ebx
  NiNode *v4; // eax
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // edx
  NiNode *v6; // eax
  NiNode *v7; // eax
  float v8; // edx
  float v9; // eax
  float v10; // ecx
  _BYTE v13[36]; // [esp+30h] [ebp-94h] BYREF
  float v14[4]; // [esp+54h] [ebp-70h] BYREF
  __m128 v15[3]; // [esp+64h] [ebp-60h] BYREF
  __m128 v16; // [esp+94h] [ebp-30h] BYREF
  int v17; // [esp+C0h] [ebp-4h]

  v2 = 0; /*0x8b9583*/
  if ( a2 ) /*0x8b958d*/
  {
    if ( a2->members.super.super.m_pcName ) /*0x8b958f*/
    {
      v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x8b95a0*/
      v17 = 0; /*0x8b95ae*/
      if ( v4 ) /*0x8b95b5*/
        v2 = NiNode::NiNode(v4, 0); /*0x8b95bf*/
      AddObject = a2->vtbl->AddObject; /*0x8b95c3*/
      v17 = 0xFFFFFFFF; /*0x8b95ce*/
      ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))AddObject)(a2, v2, 0); /*0x8b95d9*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)v2, 0.0, 1); /*0x8b95e5*/
    }
    else
    {
      v2 = a2; /*0x8b9594*/
    }
  }
  else
  {
    v6 = (NiNode *)FormHeapAlloc(0xDCu); /*0x8b95f1*/
    v17 = 1; /*0x8b95ff*/
    if ( v6 ) /*0x8b960a*/
      v7 = NiNode::NiNode(v6, 0); /*0x8b960f*/
    else
      v7 = 0; /*0x8b9616*/
    v17 = 0xFFFFFFFF; /*0x8b9618*/
    v2 = v7; /*0x8b9623*/
  }
  NiObjectNET_SetName((NiObjectNET *)v2, "bhkRigidBodyT"); /*0x8b962c*/
  hkMatrix3_SetFromQuaternion(v15[0].m128_f32, this + 8); /*0x8b9639*/
  v16 = *(__m128 *)(this + 0xC); /*0x8b964c*/
  sub_607740((int)v13, v15); /*0x8b9654*/
  HavokVector_ToWorldVector(v14, &v16); /*0x8b9666*/
  v8 = v14[0]; /*0x8b966b*/
  v9 = v14[1]; /*0x8b966f*/
  qmemcpy(&v2->members.super.m_localTransform, v13, 0x24u); /*0x8b967f*/
  v10 = v14[2]; /*0x8b9681*/
  v2->members.super.m_localTransform.pos.x = v8; /*0x8b9685*/
  v2->members.super.m_localTransform.pos.y = v9; /*0x8b968b*/
  v2->members.super.m_localTransform.pos.z = v10; /*0x8b968e*/
  return sub_8A30E0(this, (NiObjectNET *)v2); /*0x8b969b*/
}
