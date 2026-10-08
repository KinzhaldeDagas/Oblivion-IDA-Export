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

  v0 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4ca7cc*/
  v1 = 0; /*0x4ca7d8*/
  if ( v0 ) /*0x4ca7e0*/
    v2 = NiNode::NiNode(v0, 0); /*0x4ca7ea*/
  else
    v2 = 0; /*0x4ca7ee*/
  v3 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4ca7fc*/
  if ( v3 ) /*0x4ca813*/
    v4 = NiNode::NiNode(v3, 0); /*0x4ca818*/
  else
    v4 = 0; /*0x4ca81f*/
  if ( (unk_B35C00 & 4) != 0 ) /*0x4ca830*/
    v4->members.super.m_flags |= 1u; /*0x4ca832*/
  else
    v4->members.super.m_flags &= ~1u; /*0x4ca838*/
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v4, 0); /*0x4ca84a*/
  v5 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4ca851*/
  if ( v5 ) /*0x4ca867*/
    v1 = NiNode::NiNode(v5, 0); /*0x4ca871*/
  if ( (unk_B35C00 & 8) != 0 ) /*0x4ca882*/
    v1->members.super.m_flags |= 1u; /*0x4ca884*/
  else
    v1->members.super.m_flags &= ~1u; /*0x4ca88a*/
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v1, 0); /*0x4ca89d*/
  v1->members.super.m_flags |= 0x40u; /*0x4ca89f*/
  v6 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4ca8a9*/
  if ( v6 ) /*0x4ca8bf*/
    v7 = NiNode::NiNode(v6, 0); /*0x4ca8c5*/
  else
    v7 = 0; /*0x4ca8cc*/
  if ( (unk_B35C00 & 0x10) != 0 ) /*0x4ca8dd*/
    v7->members.super.m_flags |= 1u; /*0x4ca8df*/
  else
    v7->members.super.m_flags &= ~1u; /*0x4ca8e5*/
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v7, 0); /*0x4ca8f8*/
  v8 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4ca8ff*/
  if ( v8 ) /*0x4ca915*/
    v9 = NiNode::NiNode(v8, 0); /*0x4ca91b*/
  else
    v9 = 0; /*0x4ca922*/
  if ( (unk_B35C00 & 0x20) != 0 ) /*0x4ca933*/
    v9->members.super.m_flags |= 1u; /*0x4ca935*/
  else
    v9->members.super.m_flags &= ~1u; /*0x4ca93b*/
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v2->vtbl->AddObject)(v2, v9, 0); /*0x4ca94e*/
  return v2; /*0x4ca952*/
}
