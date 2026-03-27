char __cdecl sub_4F53D0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectCELL *ParentCell; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->IsActor(a1) )
    {
      if ( TESObjectREFR_GetParentCell(a1) )
      {
        ParentCell = TESObjectREFR_GetParentCell(a1);
        if ( sub_4CAAC0((ExtraDataList *)ParentCell, (Actor *)a1) )
          *a4 = 1.0;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is in owned cell value %0.2f", *a4);
  return 1;
}
