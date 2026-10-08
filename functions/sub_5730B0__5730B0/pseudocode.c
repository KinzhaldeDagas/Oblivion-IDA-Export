int __thiscall sub_5730B0(NiNode **this, int a2, float a3, char a4)
{
  NiNode *v5; // eax
  NiNode *v6; // edi
  NiLight *v7; // eax
  NiLight *v8; // esi
  NiObjectNET *v9; // eax
  BSShaderProperty *v10; // esi
  double v11; // st7
  float v13; // [esp+Ch] [ebp-1Ch]
  float v14; // [esp+34h] [ebp+Ch]
  float v15; // [esp+34h] [ebp+Ch]

  v5 = (NiNode *)FormHeapAlloc(0xDCu); /*0x5730dc*/
  v6 = 0; /*0x5730e8*/
  if ( v5 ) /*0x5730f0*/
    v6 = NiNode::NiNode(v5, 0); /*0x5730fa*/
  if ( a4 ) /*0x57310b*/
  {
    *this = v6; /*0x573112*/
    NiObjectNET_SetName((NiObjectNET *)v6, "FaderNode Below Menus"); /*0x573114*/
  }
  else
  {
    *(this + 1) = v6; /*0x573120*/
    NiObjectNET_SetName((NiObjectNET *)v6, "FaderNode Above Menus"); /*0x573123*/
    a3 = a3 - dbl_A46E48; /*0x573132*/
  }
  v7 = (NiLight *)FormHeapAlloc(0x114u); /*0x57313b*/
  if ( v7 ) /*0x573151*/
    v8 = sub_719760(v7); /*0x57315a*/
  else
    v8 = 0; /*0x57315e*/
  NiObjectNET_SetName((NiObjectNET *)v8, "FaderNodeLight"); /*0x57316f*/
  ++v8->unk0B8; /*0x573176*/
  v8->m_kAmb.r = 1.0; /*0x573195*/
  v8->m_kAmb.g = 1.0; /*0x57319b*/
  v8->m_kAmb.b = 1.0; /*0x5731a4*/
  sub_708E40(v8, v6); /*0x5731aa*/
  ((void (__thiscall *)(NiNode *, NiLight *, int))v6->vtbl->AddObject)(v6, v8, 1); /*0x5731bc*/
  v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5731c0*/
  v10 = (BSShaderProperty *)v9; /*0x5731c5*/
  if ( v9 ) /*0x5731d8*/
  {
    NiObjectNET::NiObjectNET(v9); /*0x5731dc*/
    v10->vtbl = &NiVertexColorProperty::`vftable'; /*0x5731e1*/
    v10->member.super.flags = 8; /*0x5731e7*/
  }
  else
  {
    v10 = 0; /*0x5731ef*/
  }
  v10->member.super.flags = v10->member.super.flags & 0xFFC7 | 0x28; /*0x573208*/
  sub_405680(v6, v10); /*0x57320c*/
  v13 = (float)nWidth; /*0x573217*/
  v14 = 1.0; /*0x57321d*/
  v11 = v13; /*0x57322f*/
  if ( (double)nHeight / v13 != dbl_A31C70 ) /*0x57323c*/
    v14 = flt_A688AC; /*0x573244*/
  if ( flt_A688A8 != v11 ) /*0x573255*/
    v14 = dbl_A688A0 / v11 * v14; /*0x573261*/
  v15 = fabs(v14); /*0x573272*/
  v6->members.super.m_localTransform.scale = v15; /*0x57327a*/
  v6->members.super.m_localTransform.pos.x = 0.0; /*0x57328f*/
  v6->members.super.m_localTransform.pos.y = a3; /*0x5732a2*/
  v6->members.super.m_localTransform.pos.z = 0.0; /*0x5732a5*/
  return (*(int (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a2 + 0x84))(a2, v6, 1); /*0x5732b2*/
}
