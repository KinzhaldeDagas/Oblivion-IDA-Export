void __thiscall sub_4C58D0(unsigned int **this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  ExtraDataList *v3; // esi
  BSExtraDataVtbl *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // ebx
  int i; // esi
  _DWORD *v11; // ecx
  int v12; // ecx
  void (__thiscall ***v13)(_DWORD, int); // ebx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  void (__thiscall ***v17)(_DWORD, int); // esi
  int v18; // ebx
  int v19; // esi
  _DWORD *v20; // ebx
  int v21; // [esp+18h] [ebp-4h] BYREF

  if ( *(this + 9) ) /*0x4c58d4*/
  {
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4c58e3*/
    v2 = InterlockedDecrement; /*0x4c58eb*/
    if ( **(this + 9) ) /*0x4c58f4*/
    {
      v3 = (ExtraDataList *)*(this + 8); /*0x4c58fd*/
      if ( v3 ) /*0x4c5902*/
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)*(this + 8)) ) /*0x4c5906*/
          v4 = sub_424180(v3 + 2); /*0x4c5912*/
        else
          v4 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4c5919*/
        if ( v4 ) /*0x4c5920*/
        {
          v5 = (int)*(this + 9); /*0x4c5922*/
          if ( *(_DWORD *)(v5 + 0x94) ) /*0x4c5925*/
          {
            v6 = *(_DWORD *)(v5 + 0x94); /*0x4c592e*/
            if ( v6 ) /*0x4c5936*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x60))(v6); /*0x4c593f*/
          }
        }
      }
      v7 = (int)*(this + 9); /*0x4c5941*/
      v8 = *(_DWORD *)(v7 + 0x94); /*0x4c5944*/
      v9 = (_DWORD *)(v7 + 0x94); /*0x4c594a*/
      if ( v8 ) /*0x4c5952*/
      {
        if ( !v2((volatile LONG *)(v8 + 4)) ) /*0x4c5958*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x4c596a*/
        *v9 = 0; /*0x4c596c*/
      }
      for ( i = 0; i < 0x10; i += 4 ) /*0x4c5972*/
      {
        v11 = *(this + 9); /*0x4c5974*/
        if ( *(_DWORD *)(i + *v11) ) /*0x4c5979*/
        {
          *(_DWORD *)(i + v11[1]) = 0; /*0x4c5984*/
          *(_DWORD *)(i + (*(this + 9))[2]) = 0; /*0x4c5991*/
          *(_DWORD *)(i + (*(this + 9))[3]) = 0; /*0x4c599e*/
          v12 = *(_DWORD *)(i + **(this + 9)); /*0x4c59aa*/
          (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v12 + 0x8C))(v12, &v21, 0); /*0x4c59bc*/
          if ( v21 ) /*0x4c59c4*/
          {
            v13 = (void (__thiscall ***)(_DWORD, int))v21; /*0x4c59c6*/
            if ( !v2((volatile LONG *)(v21 + 4)) ) /*0x4c59cc*/
              (**v13)(v13, 1); /*0x4c59de*/
          }
        }
        *(_DWORD *)(i + **(this + 9)) = 0; /*0x4c59e5*/
      }
      FormHeapFree(**(this + 9)); /*0x4c59fa*/
      **(this + 9) = 0; /*0x4c5a05*/
    }
    v14 = (int)*(this + 9); /*0x4c5a0b*/
    v15 = *(_DWORD *)(v14 + 0x14); /*0x4c5a0e*/
    if ( v15 ) /*0x4c5a13*/
    {
      v16 = *(_DWORD *)(v15 + 0x1C); /*0x4c5a15*/
      if ( v16 ) /*0x4c5a1a*/
      {
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v16 + 0x88))(v16, &v21, *(_DWORD *)(v14 + 0x14)); /*0x4c5a2d*/
        if ( v21 ) /*0x4c5a35*/
        {
          v17 = (void (__thiscall ***)(_DWORD, int))v21; /*0x4c5a37*/
          if ( !v2((volatile LONG *)(v21 + 4)) ) /*0x4c5a3d*/
            (**v17)(v17, 1); /*0x4c5a4f*/
        }
      }
      v18 = (int)*(this + 9); /*0x4c5a51*/
      v19 = *(_DWORD *)(v18 + 0x14); /*0x4c5a54*/
      v20 = (_DWORD *)(v18 + 0x14); /*0x4c5a57*/
      if ( v19 ) /*0x4c5a5c*/
      {
        if ( !v2((volatile LONG *)(v19 + 4)) ) /*0x4c5a62*/
          (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x4c5a74*/
        *v20 = 0; /*0x4c5a76*/
      }
    }
    sub_4BFE80(this); /*0x4c5a7e*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4c5a85*/
  }
}
