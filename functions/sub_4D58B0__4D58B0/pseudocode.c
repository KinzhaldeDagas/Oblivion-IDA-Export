NiAVObject *__thiscall sub_4D58B0(TESObjectCELL *this)
{
  NiAVObject *result; // eax
  NiAVObject *v3; // ebp
  NiNode *v4; // eax
  NiNode *v5; // eax
  NiNode *v6; // eax
  NiNode *v7; // eax
  NiNode *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  NiNode *v11; // eax
  NiAVObject *niNode; // esi

  result = (NiAVObject *)this->members.niNode;
  v3 = 0;
  if ( !result )
  {
    this->members.cellProcessLevel = 2;
    v4 = (NiNode *)FormHeapAlloc(0xDCu);
    if ( v4 )
      v3 = (NiAVObject *)NiNode::NiNode(v4, 0);
    v3->members.m_localTransform.pos.x = Vector3_InitValue_;
    v3->members.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
    v3->members.m_localTransform.pos.z = dword_B3F9B0;
    qmemcpy(&v3->members.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u);
    v5 = (NiNode *)FormHeapAlloc(0xDCu);
    if ( v5 )
      v6 = NiNode::NiNode(v5, 0);
    else
      v6 = 0;
    if ( (dword_B35C00 & 1) != 0 )
      v6->members.super.m_flags |= 1u;
    else
      v6->members.super.m_flags &= ~1u;
    ((void (__thiscall *)(NiAVObject *, NiNode *, _DWORD))v3->vtbl[1].super.super.Destructor)(v3, v6, 0);
    v7 = (NiNode *)FormHeapAlloc(0xDCu);
    if ( v7 )
      v8 = NiNode::NiNode(v7, 0);
    else
      v8 = 0;
    if ( (dword_B35C00 & 2) != 0 )
      v8->members.super.m_flags |= 1u;
    else
      v8->members.super.m_flags &= ~1u;
    ((void (__thiscall *)(NiAVObject *, NiNode *, _DWORD))v3->vtbl[1].super.super.Destructor)(v3, v8, 0);
    v9 = (this->members.flags0 & 1) != 0 ? 0xFFFFFFFD : 0;
    v10 = v9 + 4;
    if ( v9 != 0xFFFFFFFC )
    {
      do
      {
        v11 = sub_4CA7A0();
        ((void (__thiscall *)(NiAVObject *, NiNode *, _DWORD))v3->vtbl[1].super.super.Destructor)(v3, v11, 0);
        --v10;
      }
      while ( v10 );
    }
    NiAVObject_UpdateNiAVObject(v3, 0.0, 0);
    niNode = (NiAVObject *)this->members.niNode;
    if ( niNode != v3 )
    {
      if ( niNode )
      {
        if ( !InterlockedDecrement((volatile LONG *)&niNode->members) )
          niNode->vtbl->super.super.Destructor((NiRefObject *)niNode, 1);
      }
      this->members.niNode = (NiNode *)v3;
      InterlockedIncrement((volatile LONG *)&v3->members);
    }
    sub_4D4A20(this);
    this->members.cellProcessLevel = 3;
    return v3;
  }
  return result;
}
