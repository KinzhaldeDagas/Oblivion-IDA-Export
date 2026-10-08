char __userpurge sub_61DB00@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  char v5; // bl
  _DWORD *v7; // eax
  TESObjectREFR ***v8; // edi
  TESObjectREFR **i; // eax
  int v10; // eax
  int v11; // edi
  int j; // eax
  _DWORD *v13; // eax
  unsigned int v15; // eax
  _DWORD *v16; // edi
  int v17; // eax
  TESObjectREFR *v18; // edi
  TESObjectREFR *v19; // eax
  char *v20; // eax
  char *Name; // [esp-4h] [ebp-14h]

  v5 = 0; /*0x61db08*/
  if ( !a5 ) /*0x61db0e*/
  {
    v8 = *(TESObjectREFR ****)(a1 + 0x40); /*0x61db35*/
    if ( v8 ) /*0x61db3a*/
    {
      for ( i = *v8; *v8; i = *v8 ) /*0x61db3c*/
        CombatController_RemoveTarget((float *)a1, *i); /*0x61db47*/
    }
    goto LABEL_9; /*0x61db50*/
  }
  sub_5EFF30(*(Actor **)(a1 + 0x3C), 0, a1, (int)a5); /*0x61db14*/
  CombatController_RemoveTarget((float *)a1, a5); /*0x61db1c*/
  v7 = *(_DWORD **)(a1 + 0x40); /*0x61db21*/
  if ( !v7 || !v7[1] && !*v7 ) /*0x61db2e*/
LABEL_9:
    v5 = 1; /*0x61db52*/
  v10 = *(_DWORD *)(a1 + 0x6C); /*0x61db54*/
  switch ( v10 ) /*0x61db64*/
  {
    case 2: /*0x61db64*/
    case 3: /*0x61db64*/
      sub_6160B0((Actor **)a1); /*0x61dbbe*/
LABEL_19:
      if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x61dbc6*/
        *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x61dbce*/
      *(_DWORD *)(a1 + 0x70) = 0xD; /*0x61dbd4*/
      break; /*0x61dbd4*/
    case 7: /*0x61db64*/
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58); /*0x61db6e*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11) ) /*0x61db7b*/
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11) + 0x20) != 0xC ) /*0x61db91*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 0x178))(v11, 0); /*0x61db9f*/
      }
      goto LABEL_19; /*0x61dba1*/
    case 4: /*0x61db64*/
      sub_619920(a1, 0); /*0x61dbac*/
      sub_612DA0((_DWORD *)a1, 9); /*0x61dbb5*/
      break;
  }
  if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) ) /*0x61dbda*/
    Actor_UpdateBlockingState(*(Actor **)(a1 + 0x3C), a2, a3, a4, 0); /*0x61dbe8*/
  if ( v5 ) /*0x61dbef*/
  {
    for ( j = 0; j < 2; ++j ) /*0x61dbf5*/
    {
      if ( *(_DWORD *)(4 * j + 0xB15198) == 0x2C ) /*0x61dc07*/
        break; /*0x61dc07*/
    }
    if ( j < 2 ) /*0x61dc1a*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x17C))( /*0x61dc25*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        j);
    v13 = *(_DWORD **)(a1 + 0x9C); /*0x61dc27*/
    if ( v13 /*0x61dc4b*/
      && *v13
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x198))(
            *(_DWORD *)(a1 + 0x3C),
            0) )
    {
      MagicTarget_RemoveEffects(); /*0x61dc68*/
      return v5; /*0x61dc73*/
    }
  }
  else if ( CombatController_GetCurrentTarget(a1) ) /*0x61dc78*/
  {
    if ( *(_BYTE *)(a1 + 0x114) ) /*0x61dc81*/
    {
      v15 = *(_DWORD *)(a1 + 0x70); /*0x61dc8a*/
      if ( v15 < 2 || v15 == 3 ) /*0x61dc99*/
        *(_BYTE *)(a1 + 0x114) = 0; /*0x61dc9b*/
    }
    v16 = *(_DWORD **)(a1 + 0x28); /*0x61dca2*/
    v17 = CombatController_GetCurrentTarget(a1); /*0x61dca7*/
    TeSPackage_TargetData_SetTargetREFR(v16, v17); /*0x61dcaf*/
    if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x61dcb7*/
      *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x61dcbf*/
    *(_DWORD *)(a1 + 0x70) = 0xD; /*0x61dcc5*/
    if ( unk_B3B908 ) /*0x61dcc8*/
    {
      v18 = *(TESObjectREFR **)(a1 + 0x3C); /*0x61dcd1*/
      v19 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x61dcd6*/
      Name = TESObjectREFR_GetName(v19); /*0x61dce2*/
      v20 = TESObjectREFR_GetName(v18); /*0x61dce5*/
      Interface_ConsolePrint("%.20s is now fighting %s!", v20, Name); /*0x61dcf0*/
    }
  }
  return v5; /*0x61dc6d*/
}
