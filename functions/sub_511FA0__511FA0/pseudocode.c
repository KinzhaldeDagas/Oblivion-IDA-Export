// PickIdle command handler: resolves a TESIdleForm from g_idleAnimationMap for the actor and queues it through ActorAnimData.
char __cdecl sub_511FA0(int a1, int a2, void *a3)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // ebp
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFR *v6; // eax
  unsigned __int8 **v7; // esi
  ActorAnimData *v8; // eax
  ActorAnimData *v9; // edi
  bool v10; // bl
  UInt32 v11; // eax
  UInt32 v12; // eax
  int v13; // eax
  UInt32 v14; // eax
  unsigned __int8 *v15; // edi
  int v16; // eax
  const char *v17; // eax
  int v19; // [esp-8h] [ebp-18h]
  const char *v20; // [esp-4h] [ebp-14h]

  v3 = (TESObjectREFR *)OblivionDynamicCast( /*0x511fb7*/
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v4 = v3; /*0x511fbc*/
  if ( v3 )
  {
    vtbl = v3[1].vtbl; /*0x511fc9*/
    if ( vtbl )
    {
      v6 = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x33))(vtbl); /*0x511fdc*/
      v7 = TESIdleForm_FindIdleForActor((TESObjectREFR *)MEMORY[0xB362C0], v4, v6); /*0x511feb*/
      if ( v7 )
      {
        v8 = v4->vtbl->GetAnimData(v4); /*0x512000*/
        v9 = v8; /*0x512002*/
        if ( v8 )
        {
          v10 = !ActorAnimData_IsIdleInactive(v8); /*0x512019*/
          v11 = v9->unkC8[2]; /*0x51201b*/
          if ( (!v11 || *(unsigned __int8 ***)(v11 + 0x24) != v7)
            && (!v10
             || (v12 = v9->unkC8[1]) != 0
             && (*(_DWORD *)(v12 + 4) != 3 || (v13 = *(_DWORD *)(v12 + 0x10)) != 0 && !*(_DWORD *)(v13 + 0x24))) )
          {
            v14 = TESIdleForm_GetQueuedAnimType(v7); /*0x51204f*/
            ActorAnimData_QueueIdle(v9, (UInt32)v7, v4, v14, 3); /*0x512059*/
            if ( MEMORY[0xB361AC] )
            {
              v15 = v7[3]; /*0x51206d*/
              v16 = (*((int (__thiscall **)(unsigned __int8 **))v7[6] + 5))(v7 + 6); /*0x512073*/
              v17 = (const char *)(*((int (__thiscall **)(unsigned __int8 **, unsigned __int8 *, int))*v7 + 0x35))( /*0x512081*/
                                    v7,
                                    v15,
                                    v16);
              Interface_ConsolePrint("Picked Idle '%s' (%08X) file: %s", v17, v19, v20);
            }
          }
        }
      }
    }
  }
  return 1; /*0x512091*/
}
