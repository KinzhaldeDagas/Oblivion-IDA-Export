char __thiscall sub_6072E0(TESObjectREFR *this)
{
  int v2; // ebx
  int v3; // ebp
  TESObjectCELL *ParentCell; // edi
  int v5; // eax
  PlayerCharacter *v6; // ecx

  v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16));
  v3 = 3;
  ParentCell = TESObjectREFR_GetParentCell(this);
  if ( *((_DWORD *)this + 0x18) == 2 )
  {
    v5 = *((_DWORD *)this + 0x17);
    if ( v5 )
    {
      v6 = *(PlayerCharacter **)(v5 + 0x28);
      if ( v6 )
      {
        if ( v6 == TESDataHandler_g_PlayerRef )
        {
          if ( v2 )
            this->vtbl->IsParalyzed(this);
          return 1;
        }
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v6);
      }
    }
  }
  if ( this->vtbl->GetNiNode(this) || sub_4354F0(ModelLoaderPtr, (int)this) )
  {
    if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 1) )
    {
      v3 = 0;
    }
    else if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
    {
      v3 = 1;
    }
  }
  if ( v2 == v3 )
    return 1;
  if ( v3 )
  {
    if ( v3 == 1 && *((_DWORD *)this + 0x18) )
    {
      ((void (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.super.CopyFromBase)(this);
      return 1;
    }
    else
    {
      this->vtbl->super.Destroy((TESForm *)this, 1);
      return 0;
    }
  }
  else
  {
    this->vtbl->IsParalyzed(this);
    return 1;
  }
}
