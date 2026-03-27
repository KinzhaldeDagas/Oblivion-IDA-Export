char __thiscall TESObjectREFR_LessThanGroup(TESChildCELL *this, _DWORD *a2)
{
  char v2; // bl
  TESForm *v4; // eax
  void *v5; // ebp
  int v7; // eax

  v2 = 0;
  if ( a2 && *a2 == dword_B05E20 )
  {
    if ( (unsigned int)(a2[3] - 8) > 2 )
    {
      v7 = (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6);
      return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 0x30))(v7, a2);
    }
    else
    {
      v4 = TESForm_LookupByFormID(a2[2]);
      v5 = OblivionDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectCELL `RTTI Type Descriptor',
             0);
      if ( v5 && (void *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6) == v5 )
      {
        if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)this) )
        {
          if ( (unsigned int)(a2[3] - 9) <= 1 )
            return 1;
        }
        else
        {
          if ( (*(_DWORD *)(this + 2) & 0x8000) == 0 )
            return 0;
          if ( a2[3] == 9 )
            return 1;
        }
      }
    }
  }
  return v2;
}
