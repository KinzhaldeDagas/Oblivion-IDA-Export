void __stdcall sub_682450(int a1)
{
  TravelPath *v2; // eax
  TravelPath *v3; // eax
  char v4; // al

  if ( a1 ) /*0x682477*/
  {
    if ( *(_DWORD *)(a1 + 0x20) != 2 ) /*0x68247d*/
    {
      if ( !*(_DWORD *)(a1 + 8) ) /*0x68247f*/
      {
        v2 = (TravelPath *)FormHeapAlloc(0x14u); /*0x682487*/
        if ( v2 ) /*0x68249d*/
          v3 = PathLow_ctor(v2); /*0x6824a1*/
        else
          v3 = 0; /*0x6824a8*/
        *(_DWORD *)(a1 + 8) = v3; /*0x6824b2*/
      }
      TravelPath_BuildToDestination( /*0x6824c8*/
        *(TravelPath **)(a1 + 8),
        *(TESObjectREFR **)(a1 + 4),
        (const NiPoint3 *)(a1 + 0x14),
        *(TESObjectCELL **)(a1 + 0xC),
        *(TESWorldSpace **)(a1 + 0x10));
      if ( !v4 ) /*0x6824cf*/
        *(_BYTE *)(a1 + 0x24) = 0; /*0x6824d1*/
      *(_DWORD *)(a1 + 0x20) = 2; /*0x6824d4*/
    }
  }
}
