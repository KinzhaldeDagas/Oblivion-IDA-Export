void __usercall sub_5F0260(TESObjectREFR *this@<ecx>, double a2@<st1>)
{
  float v4; // eax
  float v5; // ecx
  float v6; // edx
  TESObjectREFRVtbl *vtbl; // eax
  TESObjectCELL *ParentCell; // eax

  if ( this != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    v4 = this->member.pos[0];
    v5 = this->member.pos[1];
    v6 = this->member.pos[2];
    *((float *)this + 0x3A) = v4;
    vtbl = this->vtbl;
    *((float *)this + 0x3B) = v5;
    *((float *)this + 0x3C) = v6;
    vtbl[1].super.Unk_0E((TESForm *)this);
    *((float *)this + 0x3D) = a2;
    if ( TESObjectREFR_GetParentCell(this)
      && (ParentCell = TESObjectREFR_GetParentCell(this), TESObjectCELL_IsInterior(ParentCell)) )
    {
      *((_DWORD *)this + 0x3E) = TESObjectREFR_GetParentCell(this);
    }
    else
    {
      *((_DWORD *)this + 0x3E) = TESObjectREFR_GetWorldSpace(this);
    }
  }
}
