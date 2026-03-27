char __cdecl sub_4F6CF0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectREFR *v7; // esi
  TESObjectCELL *ParentCell; // edi
  TESObjectCELL *v9; // eax

  *a4 = 0.0;
  v7 = 0;
  if ( a2 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(a2 + 4) - 0x31 <= 2 )
      v7 = (TESObjectREFR *)a2;
  }
  if ( a1 )
    ParentCell = TESObjectREFR_GetParentCell(a1);
  else
    ParentCell = 0;
  if ( v7 )
    v9 = TESObjectREFR_GetParentCell(v7);
  else
    v9 = 0;
  if ( ParentCell )
  {
    if ( v9 )
    {
      if ( ParentCell == v9 )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetInSameCell >> %0.2f", *a4);
  return 1;
}
