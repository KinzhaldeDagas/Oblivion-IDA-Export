char __usercall sub_506C80@<al>(double a1@<st0>)
{
  bool v1; // al
  TESObjectREFR *v2; // ecx
  TESObjectCELL *ParentCell; // eax
  TESWorldSpace *WorldSpace; // eax

  v1 = sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  v2 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  if ( v1 )
  {
    ParentCell = TESObjectREFR_GetParentCell(v2);
    sub_4CBBF0((int)ParentCell, a1);
  }
  else
  {
    WorldSpace = TESObjectREFR_GetWorldSpace(v2);
    sub_4EF2A0((int)WorldSpace, a1);
  }
  return 1;
}
