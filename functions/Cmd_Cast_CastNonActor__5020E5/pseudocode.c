int __usercall Cmd_Cast_::CastNonActor@<eax>(
        _DWORD *a1@<ebx>,
        int a2@<ebp>,
        TESObjectREFR *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        TESObjectREFR *a8)
{
  TESObjectCELL *ParentCell; // esi
  TESObjectCELL *v9; // eax
  TESObjectCELL *v10; // edi

  ParentCell = TESObjectREFR_GetParentCell(a3);
  v9 = TESObjectREFR_GetParentCell(a8);
  v10 = v9;
  if ( ParentCell )
  {
    if ( v9 )
    {
      if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 1) && TESObjectCELL_IsProcessLevel_LowHigh(v10, 0) )
        MagicCaster_CastMagicItem(a1, a7, a2, 0);
    }
  }
  return Cmd_Cast_::Done_();
}
