void __thiscall sub_42B5F0(TESObjectREFR **this, TESObjectREFR *a2, char a3)
{
  TESObjectREFR *v3; // ecx
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v5; // esi
  int v6; // eax
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // esi
  int v9; // eax

  if ( a2 )
  {
    v3 = *this;
    if ( v3 )
    {
      ParentCell = TESObjectREFR_GetParentCell(v3);
      v5 = ParentCell;
      if ( ParentCell )
      {
        TESObjectCELL_GetOwner(ParentCell);
        if ( v6 )
          sub_4C9860(v5, a3);
      }
    }
    v7 = TESObjectREFR_GetParentCell(a2);
    v8 = v7;
    if ( v7 )
    {
      TESObjectCELL_GetOwner(v7);
      if ( v9 )
        sub_4C9860(v8, a3);
    }
  }
}
