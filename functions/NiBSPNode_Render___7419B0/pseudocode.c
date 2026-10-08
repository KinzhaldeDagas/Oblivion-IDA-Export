signed int __thiscall NiBSPNode::Render_(float *this, NiCullingProcess *a2)
{
  NiCamera *Camera; // esi
  float *v4; // ebx
  signed int result; // eax
  NiAVObject **v6; // edi
  NiAVObject *v7; // esi
  NiAVObject *v8; // edi
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  Camera = a2->Camera; /*0x7419ba*/
  v4 = this + 0x3B; /*0x7419c6*/
  result = sub_7415E0(this + 0x3B, &Camera->members.super.m_worldTransform.pos.x); /*0x7419cf*/
  if ( !result ) /*0x7419d6*/
  {
    v9[0] = Camera->members.super.m_worldTransform.rot.data[0][0]; /*0x7419df*/
    v9[1] = Camera->members.super.m_worldTransform.rot.data[1][0]; /*0x7419e9*/
    v9[2] = Camera->members.super.m_worldTransform.rot.data[2][0]; /*0x7419f0*/
    result = sub_7415E0(v4, v9); /*0x7419f4*/
  }
  v6 = *((NiAVObject ***)this + 0x2C); /*0x7419fc*/
  v7 = *v6; /*0x741a02*/
  v8 = v6[1]; /*0x741a04*/
  if ( result == 2 ) /*0x741a07*/
  {
    if ( v8 ) /*0x741a0b*/
      result = NiAVObject_Render(v8, a2); /*0x741a10*/
    if ( v7 ) /*0x741a17*/
      return NiAVObject_Render(v7, a2); /*0x741a1c*/
  }
  else
  {
    if ( v7 ) /*0x741a2d*/
      result = NiAVObject_Render(v7, a2); /*0x741a32*/
    if ( v8 ) /*0x741a39*/
      return NiAVObject_Render(v8, a2); /*0x741a3e*/
  }
  return result; /*0x741a21*/
}
