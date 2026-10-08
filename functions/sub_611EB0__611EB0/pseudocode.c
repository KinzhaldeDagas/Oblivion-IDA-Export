void __thiscall sub_611EB0(TESObjectREFR *this, float a2)
{
  bool v2; // zf
  void *v4; // edi
  TESObjectCELL *v5; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // eax
  NiNode *m_parent; // ebx
  void (__thiscall **p_RemoveObject)(NiNode *, float *, NiNode *); // edi
  NiNode *v11; // eax

  v2 = LODWORD(a2) == 0; /*0x611eb4*/
  v4 = *((void **)this + 0x35); /*0x611eba*/
  *((float *)this + 0x35) = a2; /*0x611ec0*/
  if ( v2 ) /*0x611ec6*/
  {
    if ( v4 ) /*0x611ece*/
    {
      if ( Shared_GetDwordAtOffset40(this) /*0x611ee6*/
        && (v5 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this), GetObjectPointerAt_054(v5)) )
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x611ef2*/
        TESObjectCELL::AttachReference3DToQuad(DwordAtOffset40, this); /*0x611ef9*/
      }
      else if ( Shared_GetDwordAtOffset40(v4) /*0x611f17*/
             && (v7 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v4), GetObjectPointerAt_054(v7)) )
      {
        v8 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v4); /*0x611f23*/
        TESObjectCELL::AttachReference3DToQuad(v8, this); /*0x611f2a*/
      }
      else if ( this->vtbl->GetNiNode(this) ) /*0x611f3e*/
      {
        if ( this->vtbl->GetNiNode(this)->members.super.m_parent ) /*0x611f50*/
        {
          m_parent = this->vtbl->GetNiNode(this)->members.super.m_parent; /*0x611f63*/
          p_RemoveObject = (void (__thiscall **)(NiNode *, float *, NiNode *))&m_parent->vtbl->RemoveObject; /*0x611f72*/
          v11 = this->vtbl->GetNiNode(this); /*0x611f78*/
          (*p_RemoveObject)(m_parent, &a2, v11); /*0x611f84*/
          NiPointerSlot_Release((NiD3DVertexShader *)&a2); /*0x611f8a*/
        }
      }
    }
  }
}
