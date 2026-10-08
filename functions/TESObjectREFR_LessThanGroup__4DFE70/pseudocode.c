char __thiscall TESObjectREFR_LessThanGroup(TESChildCELL *this, _DWORD *a2)
{
  char v2; // bl
  TESForm *v4; // eax
  void *v5; // ebp
  int v7; // eax

  v2 = 0; /*0x4dfe77*/
  if ( a2 && *a2 == dword_B05E20 ) /*0x4dfe8c*/
  {
    if ( (unsigned int)(a2[3] - 8) > 2 ) /*0x4dfe9b*/
    {
      v7 = (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6); /*0x4dff22*/
      return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 0x30))(v7, a2); /*0x4dff2e*/
    }
    else
    {
      v4 = TESForm_LookupByFormID(a2[2]); /*0x4dfeaf*/
      v5 = OblivionDynamicCast( /*0x4dfebd*/
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectCELL `RTTI Type Descriptor',
             0);
      if ( v5 && (void *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6) == v5 ) /*0x4dfed2*/
      {
        if ( TESObjectREFR_IsPersistent((TESObjectREFR *)this) ) /*0x4dfed6*/
        {
          if ( (unsigned int)(a2[3] - 9) <= 1 ) /*0x4dfee8*/
            return 1; /*0x4dfef2*/
        }
        else
        {
          if ( (*(_DWORD *)(this + 2) & 0x8000) == 0 ) /*0x4dfefc*/
            return 0; /*0x4dff17*/
          if ( a2[3] == 9 ) /*0x4dff02*/
            return 1; /*0x4dff0c*/
        }
      }
    }
  }
  return v2; /*0x4dfeea*/
}
