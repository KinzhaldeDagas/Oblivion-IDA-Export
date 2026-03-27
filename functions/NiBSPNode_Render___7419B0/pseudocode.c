signed int __thiscall NiBSPNode::Render_(float *this, NiCullingProcess *a2)
{
  NiCamera *Camera; // esi
  float *v4; // ebx
  signed int result; // eax
  NiAVObject **v6; // edi
  NiAVObject *v7; // esi
  NiAVObject *v8; // edi
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  Camera = a2->Camera;
  v4 = this + 0x3B;
  result = sub_7415E0(this + 0x3B, &Camera->members.super.m_worldTransform.pos.x);
  if ( !result )
  {
    v9[0] = Camera->members.super.m_worldTransform.rot.data[0][0];
    v9[1] = Camera->members.super.m_worldTransform.rot.data[1][0];
    v9[2] = Camera->members.super.m_worldTransform.rot.data[2][0];
    result = sub_7415E0(v4, v9);
  }
  v6 = *((NiAVObject ***)this + 0x2C);
  v7 = *v6;
  v8 = v6[1];
  if ( result == 2 )
  {
    if ( v8 )
      result = NiAVObject_Render(v8, a2);
    if ( v7 )
      return NiAVObject_Render(v7, a2);
  }
  else
  {
    if ( v7 )
      result = NiAVObject_Render(v7, a2);
    if ( v8 )
      return NiAVObject_Render(v8, a2);
  }
  return result;
}
