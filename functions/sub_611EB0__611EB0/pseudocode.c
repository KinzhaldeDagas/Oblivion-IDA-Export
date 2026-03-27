void __thiscall sub_611EB0(TESObjectREFR *this, float a2)
{
  bool v2; // zf
  TESObjectREFR *v4; // edi
  TESObjectCELL *v5; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // eax
  NiNode *m_parent; // ebx
  void (__thiscall **p_RemoveObject)(NiNode *, float *, NiNode *); // edi
  NiNode *v11; // eax

  v2 = LODWORD(a2) == 0;
  v4 = *((TESObjectREFR **)this + 0x35);
  *((float *)this + 0x35) = a2;
  if ( v2 )
  {
    if ( v4 )
    {
      if ( TESObjectREFR_GetParentCell(this) && (v5 = TESObjectREFR_GetParentCell(this), TESObjectCELL_GetNiNode_(v5)) )
      {
        ParentCell = TESObjectREFR_GetParentCell(this);
        TESObjectCELL::AttachReference3DToQuad(ParentCell, this);
      }
      else if ( TESObjectREFR_GetParentCell(v4) && (v7 = TESObjectREFR_GetParentCell(v4), TESObjectCELL_GetNiNode_(v7)) )
      {
        v8 = TESObjectREFR_GetParentCell(v4);
        TESObjectCELL::AttachReference3DToQuad(v8, this);
      }
      else if ( this->vtbl->GetNiNode(this) )
      {
        if ( this->vtbl->GetNiNode(this)->members.super.m_parent )
        {
          m_parent = this->vtbl->GetNiNode(this)->members.super.m_parent;
          p_RemoveObject = (void (__thiscall **)(NiNode *, float *, NiNode *))&m_parent->vtbl->RemoveObject;
          v11 = this->vtbl->GetNiNode(this);
          (*p_RemoveObject)(m_parent, &a2, v11);
          sub_7016A0((NiD3DVertexShader *)&a2);
        }
      }
    }
  }
}
