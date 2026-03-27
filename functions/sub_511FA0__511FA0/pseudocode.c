char __cdecl sub_511FA0(int a1, int a2, void *a3)
{
  TESObjectREFR *v6; // eax
  TESObjectREFR *v7; // ebp
  TESObjectREFRVtbl *vtbl; // ecx
  int v9; // eax
  _BYTE *v10; // esi
  ActorAnimData *v11; // eax
  ActorAnimData *v12; // edi
  bool v13; // bl
  UInt32 v14; // eax
  UInt32 v15; // eax
  int v16; // eax
  UInt32 v17; // eax
  int v18; // edi
  int v19; // eax
  const char *v20; // eax
  int v22; // [esp-8h] [ebp-18h]
  const char *v23; // [esp-4h] [ebp-14h]

  v6 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v7 = v6;
  if ( v6 )
  {
    vtbl = v6[1].vtbl;
    if ( vtbl )
    {
      v9 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x33))(vtbl);
      v10 = sub_521450((TESObjectREFR *)g_idleAnimationMap, v7, v9);
      if ( v10 )
      {
        v11 = v7->vtbl->GetAnimData(v7);
        v12 = v11;
        if ( v11 )
        {
          v13 = !sub_472EA0(v11);
          v14 = v12->unkC8[2];
          if ( (!v14 || *(_BYTE **)(v14 + 0x24) != v10)
            && (!v13
             || (v15 = v12->unkC8[1]) != 0
             && (*(_DWORD *)(v15 + 4) != 3 || (v16 = *(_DWORD *)(v15 + 0x10)) != 0 && !*(_DWORD *)(v16 + 0x24))) )
          {
            v17 = sub_520200(v10);
            sub_477DB0(v12, (UInt32)v10, v7, v17, 3);
            if ( IsConsoleMode )
            {
              v18 = *((_DWORD *)v10 + 3);
              v19 = (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)v10 + 6) + 0x14))(v10 + 0x18);
              v20 = (const char *)(*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v10 + 0xD4))(v10, v18, v19);
              Interface_ConsolePrint("Picked Idle '%s' (%08X) file: %s", v20, v22, v23);
            }
          }
        }
      }
    }
  }
  return 1;
}
