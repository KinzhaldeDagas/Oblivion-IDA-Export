NiNode *__thiscall sub_4D58B0(TESObjectCELL *this)
{
  NiNode *result; // eax
  NiAVObject *v3; // ebp
  NiNode *v4; // eax
  NiNode *v5; // eax
  NiNode *v6; // eax
  NiNode *v7; // eax
  NiNode *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  NiNode *v11; // eax
  NiNode *niNode; // esi

  result = this->members.niNode; /*0x4d58d9*/
  v3 = 0; /*0x4d58dc*/
  if ( !result )
  {
    this->members.cellProcessLevel = 2; /*0x4d58eb*/
    v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4d58ef*/
    if ( v4 ) /*0x4d5901*/
      v3 = (NiAVObject *)NiNode::NiNode(v4, 0); /*0x4d590b*/
    v3->members.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x4d5912*/
    v3->members.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x4d591b*/
    v3->members.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x4d5924*/
    qmemcpy(&v3->members.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x4d5941*/
    v5 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4d5943*/
    if ( v5 ) /*0x4d5959*/
      v6 = NiNode::NiNode(v5, 0); /*0x4d595f*/
    else
      v6 = 0; /*0x4d5966*/
    if ( (unk_B35C00 & 1) != 0 ) /*0x4d597d*/
      v6->members.super.m_flags |= 1u; /*0x4d597f*/
    else
      v6->members.super.m_flags &= ~1u; /*0x4d5986*/
    ((void (__thiscall *)(NiAVObject *, NiNode *, _DWORD))v3->vtbl[1].super.super.Destructor)(v3, v6, 0); /*0x4d5998*/
    v7 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4d599f*/
    if ( v7 ) /*0x4d59b5*/
      v8 = NiNode::NiNode(v7, 0); /*0x4d59bb*/
    else
      v8 = 0; /*0x4d59c2*/
    if ( (unk_B35C00 & 2) != 0 ) /*0x4d59d3*/
      v8->members.super.m_flags |= 1u; /*0x4d59d5*/
    else
      v8->members.super.m_flags &= ~1u; /*0x4d59dc*/
    ((void (__thiscall *)(NiAVObject *, NiNode *, _DWORD))v3->vtbl[1].super.super.Destructor)(v3, v8, 0); /*0x4d59ee*/
    v9 = (this->members.flags0 & 1) != 0 ? 0xFFFFFFFD : 0;
    v10 = v9 + 4; /*0x4d5a00*/
    if ( v9 != 0xFFFFFFFC ) /*0x4d5a02*/
    {
      do /*0x4d5a1e*/
      {
        v11 = sub_4CA7A0(); /*0x4d5a06*/
        ((void (__thiscall *)(NiAVObject *, NiNode *, _DWORD))v3->vtbl[1].super.super.Destructor)(v3, v11, 0); /*0x4d5a19*/
        --v10; /*0x4d5a1b*/
      }
      while ( v10 ); /*0x4d5a1e*/
    }
    NiAVObject_UpdateNiAVObject(v3, 0.0, 0); /*0x4d5a2a*/
    niNode = this->members.niNode; /*0x4d5a2f*/
    if ( niNode != (NiNode *)v3 ) /*0x4d5a34*/
    {
      if ( niNode ) /*0x4d5a38*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&niNode->members) ) /*0x4d5a3e*/
          niNode->vtbl->super.super.super.Destructor((NiRefObject *)niNode, 1); /*0x4d5a54*/
      }
      this->members.niNode = (NiNode *)v3; /*0x4d5a5a*/
      InterlockedIncrement((volatile LONG *)&v3->members); /*0x4d5a5d*/
    }
    sub_4D4A20(this); /*0x4d5a65*/
    this->members.cellProcessLevel = 3; /*0x4d5a6a*/
    return (NiNode *)v3; /*0x4d5a6e*/
  }
  return result; /*0x4d5a70*/
}
