char __cdecl sub_5E1260(TESChildCELL *a1)
{
  TESObjectCELL *ParentCell; // eax

  if ( (TESForm *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5C))(a1) != TESDataHandler_g_HorseMarker
    || TESObjectREFR_GetParentCell((TESObjectREFR *)a1)
    && (ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1), TESObjectCELL_IsInterior(ParentCell)) )
  {
    dword_B3B778 = 0;
    return 0;
  }
  else
  {
    dword_B3B778 = a1;
    return 1;
  }
}
