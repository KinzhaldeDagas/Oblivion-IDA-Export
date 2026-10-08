char __thiscall sub_6072E0(TESObjectREFR *this)
{
  int v2; // ebx
  int v3; // ebp
  TESObjectCELL *DwordAtOffset40; // edi
  int v5; // eax
  PlayerCharacter *v6; // ecx

  v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)); /*0x6072fd*/
  v3 = 3; /*0x6072ff*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x60730d*/
  if ( *((_DWORD *)this + 0x18) == 2 ) /*0x60730f*/
  {
    v5 = *((_DWORD *)this + 0x17); /*0x607311*/
    if ( v5 ) /*0x607316*/
    {
      v6 = *(PlayerCharacter **)(v5 + 0x28); /*0x607318*/
      if ( v6 ) /*0x60731d*/
      {
        if ( v6 == reference ) /*0x607325*/
        {
          if ( v2 ) /*0x607329*/
            this->vtbl->MoveToHigh(this); /*0x607335*/
          return 1; /*0x60733e*/
        }
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x607344*/
      }
    }
  }
  if ( this->vtbl->GetNiNode(this) || sub_4354F0(MEMORY[0xB33A1C], (int)this) ) /*0x60735d*/
  {
    if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1) ) /*0x60736f*/
    {
      v3 = 0; /*0x607378*/
    }
    else if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x607385*/
    {
      v3 = 1; /*0x60738e*/
    }
  }
  if ( v2 == v3 ) /*0x6073a1*/
    return 1; /*0x6073a1*/
  if ( v3 ) /*0x6073a8*/
  {
    if ( v3 == 1 && *((_DWORD *)this + 0x18) ) /*0x607393*/
    {
      ((void (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.super.CopyFromBase)(this); /*0x6073bd*/
      return 1; /*0x6073bf*/
    }
    else
    {
      this->vtbl->super.Destroy((TESForm *)this, 1); /*0x6073d2*/
      return 0; /*0x6073db*/
    }
  }
  else
  {
    this->vtbl->MoveToHigh(this); /*0x6073ed*/
    return 1; /*0x6073ef*/
  }
}
