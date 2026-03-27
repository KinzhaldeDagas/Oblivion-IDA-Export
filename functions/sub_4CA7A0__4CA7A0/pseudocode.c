NiNode *sub_4CA7A0()
{
  NiNode *v0; // eax
  NiNode *v1; // esi
  NiNode *v2; // edi
  NiNode *v3; // eax
  NiNode *v4; // eax
  NiNode *v5; // eax
  NiNode *v6; // eax
  NiNode *v7; // eax
  NiNode *v8; // eax
  NiNode *v9; // eax

  v0 = (NiNode *)FormHeapAlloc(0xDCu);
  v1 = 0;
  if ( v0 )
    v2 = NiNode::NiNode(v0, 0);
  else
    v2 = 0;
  v3 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v3 )
    v4 = NiNode::NiNode(v3, 0);
  else
    v4 = 0;
  if ( (dword_B35C00 & 4) != 0 )
    v4->members.super.m_flags |= 1u;
  else
    v4->members.super.m_flags &= ~1u;
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v4, 0);
  v5 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v5 )
    v1 = NiNode::NiNode(v5, 0);
  if ( (dword_B35C00 & 8) != 0 )
    v1->members.super.m_flags |= 1u;
  else
    v1->members.super.m_flags &= ~1u;
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v1, 0);
  v1->members.super.m_flags |= 0x40u;
  v6 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v6 )
    v7 = NiNode::NiNode(v6, 0);
  else
    v7 = 0;
  if ( (dword_B35C00 & 0x10) != 0 )
    v7->members.super.m_flags |= 1u;
  else
    v7->members.super.m_flags &= ~1u;
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v7, 0);
  v8 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v8 )
    v9 = NiNode::NiNode(v8, 0);
  else
    v9 = 0;
  if ( (dword_B35C00 & 0x20) != 0 )
    v9->members.super.m_flags |= 1u;
  else
    v9->members.super.m_flags &= ~1u;
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v9, 0);
  return v2;
}
