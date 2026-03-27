NiObjectNET *__thiscall sub_8B9540(float *this, NiNode *a2)
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

  v2 = 0;
  if ( a2 )
  {
    if ( a2->members.super.super.m_pcName )
    {
      v4 = (NiNode *)FormHeapAlloc(0xDCu);
      v17 = 0;
      if ( v4 )
        v2 = NiNode::NiNode(v4, 0);
      AddObject = a2->vtbl->AddObject;
      v17 = 0xFFFFFFFF;
      ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))AddObject)(a2, v2, 0);
      NiAVObject_UpdateNiAVObject((NiAVObject *)v2, 0.0, 1);
    }
    else
    {
      v2 = a2;
    }
  }
  else
  {
    v6 = (NiNode *)FormHeapAlloc(0xDCu);
    v17 = 1;
    if ( v6 )
      v7 = NiNode::NiNode(v6, 0);
    else
      v7 = 0;
    v17 = 0xFFFFFFFF;
    v2 = v7;
  }
  NiObjectNET_SetName((NiObjectNET *)v2, "bhkRigidBodyT");
  sub_8B1DD0(v15[0].m128_f32, this + 8);
  v16 = *(__m128 *)(this + 0xC);
  sub_607740((int)v13, v15);
  sub_43F3E0(v14, &v16);
  v8 = v14[0];
  v9 = v14[1];
  qmemcpy(&v2->members.super.m_localTransform, v13, 0x24u);
  v10 = v14[2];
  v2->members.super.m_localTransform.pos.x = v8;
  v2->members.super.m_localTransform.pos.y = v9;
  v2->members.super.m_localTransform.pos.z = v10;
  return sub_8A30E0(this, v2);
}
