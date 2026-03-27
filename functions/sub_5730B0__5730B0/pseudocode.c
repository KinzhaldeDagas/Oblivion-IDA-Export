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

  v5 = (NiNode *)FormHeapAlloc(0xDCu);
  v6 = 0;
  if ( v5 )
    v6 = NiNode::NiNode(v5, 0);
  if ( a4 )
  {
    *this = v6;
    NiObjectNET_SetName((NiObjectNET *)v6, "FaderNode Below Menus");
  }
  else
  {
    *(this + 1) = v6;
    NiObjectNET_SetName((NiObjectNET *)v6, "FaderNode Above Menus");
    a3 = a3 - dbl_A46E48;
  }
  v7 = (NiLight *)FormHeapAlloc(0x114u);
  if ( v7 )
    v8 = sub_719760(v7);
  else
    v8 = 0;
  NiObjectNET_SetName((NiObjectNET *)v8, "FaderNodeLight");
  ++v8->unk0B8;
  v8->m_kAmb.r = 1.0;
  v8->m_kAmb.g = 1.0;
  v8->m_kAmb.b = 1.0;
  sub_708E40(v8, (int)v6);
  ((void (__thiscall *)(NiNode *, NiLight *, int))v6->vtbl->AddObject)(v6, v8, 1);
  v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v10 = (BSShaderProperty *)v9;
  if ( v9 )
  {
    NiObjectNET::NiObjectNET(v9);
    v10->vtbl = &NiVertexColorProperty::`vftable';
    v10->member.super.flags = 8;
  }
  else
  {
    v10 = 0;
  }
  v10->member.super.flags = v10->member.super.flags & 0xFFC7 | 0x28;
  sub_405680(v6, v10);
  v13 = (float)nWidth;
  v14 = 1.0;
  v11 = v13;
  if ( (double)nHeight / v13 != dbl_A31C70 )
    v14 = flt_A688AC;
  if ( flt_A688A8 != v11 )
    v14 = dbl_A688A0 / v11 * v14;
  v15 = fabs(v14);
  v6->members.super.m_localTransform.scale = v15;
  v6->members.super.m_localTransform.pos.x = 0.0;
  v6->members.super.m_localTransform.pos.y = a3;
  v6->members.super.m_localTransform.pos.z = 0.0;
  return (*(int (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a2 + 0x84))(a2, v6, 1);
}
