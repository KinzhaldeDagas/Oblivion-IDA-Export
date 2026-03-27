char __cdecl sub_4F6E50(TESObjectREFR *a1, int a2, TESObjectREFR *a3, double *a4)
{
  TESWorldSpace *v7; // esi
  TESObjectREFR *v8; // eax

  v7 = 0;
  *a4 = 0.0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 4) == 0x35 )
      v7 = (TESWorldSpace *)a2;
  }
  v8 = a3;
  if ( !a3 || (unsigned int)a3->member.super.type - 0x31 > 2 )
    v8 = a1;
  if ( v7 )
  {
    if ( TESObjectREFR_GetWorldSpace(v8) == v7 )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetInWorldspace >> %0.2f", *a4);
  return 1;
}
