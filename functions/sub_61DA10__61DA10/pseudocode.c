void __usercall sub_61DA10(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  TESObjectREFR ***v9; // edi
  PlayerCharacter *v10; // ebx
  TESObjectREFR **i; // eax
  char *Name; // eax

  v6 = *(_DWORD **)(a1 + 0x40); /*0x61da13*/
  v7 = 0; /*0x61da16*/
  if ( v6 ) /*0x61da1b*/
  {
    do /*0x61da2d*/
    {
      if ( *v6 ) /*0x61da20*/
        ++v7; /*0x61da25*/
      v6 = (_DWORD *)v6[1]; /*0x61da28*/
    }
    while ( v6 ); /*0x61da2d*/
    if ( v7 > 1 ) /*0x61da32*/
    {
      v8 = CombatController_GetCurrentTarget(a1); /*0x61da37*/
      v9 = *(TESObjectREFR ****)(a1 + 0x40); /*0x61da3c*/
      v10 = (PlayerCharacter *)v8; /*0x61da41*/
      if ( v9 ) /*0x61da43*/
      {
        for ( i = *v9; *v9; i = *v9 ) /*0x61da45*/
          CombatController_RemoveTarget((float *)a1, *i); /*0x61da55*/
      }
      a5 = 0.0; /*0x61da60*/
      CombatController_TryAddTarget(a1, a2, a3, 0.0, v10, 0, 0.0, 0.0, 0.0); /*0x61da73*/
    }
  }
  if ( *(_DWORD *)(a1 + 0x6C) == 7 /*0x61da91*/
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x174))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) != a1 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))( /*0x61daa3*/
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      0);
  }
  if ( *(_DWORD *)(a1 + 0x70) != 5 ) /*0x61daad*/
  {
    if ( unk_B3B908 ) /*0x61daaf*/
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x61dac0*/
      Interface_ConsolePrint("%.20s is going to %s!", Name, "attempt to Yield"); /*0x61dacb*/
    }
    *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x61dad9*/
  }
  *(_DWORD *)(a1 + 0x70) = 5; /*0x61dae3*/
  sub_619920(a1, 0); /*0x61dae6*/
  sub_619640(a1, a3, a4, a5); /*0x61daef*/
}
