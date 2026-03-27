// positive sp value has been detected, the output may be wrong!
char __usercall Cmd_Cast_::CastOnSelf@<al>(_DWORD *a1@<ebx>, int a2@<ebp>, TESObjectREFR *a3@<esi>)
{
  TESObjectCELL *ParentCell; // esi
  TESObjectCELL *v4; // eax
  TESObjectCELL *v5; // edi
  int v7; // [esp-8h] [ebp-8h]
  TESObjectREFR *v8; // [esp-4h] [ebp-4h]

  ParentCell = TESObjectREFR_GetParentCell(a3);
  v4 = TESObjectREFR_GetParentCell(v8);
  v5 = v4;
  if ( !ParentCell
    || !v4
    || !TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 1)
    || !TESObjectCELL_IsProcessLevel_LowHigh(v5, 0) )
  {
    return Cmd_Cast_::Done_();
  }
  MagicCaster_CastMagicItem(a1, v7, a2, 0);
  return 1;
}
