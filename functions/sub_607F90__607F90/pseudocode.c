// Scans two ActorProcessManager lists for ArrowProjectile objects matching baseForm and recorded target. Stops at maximumMatches; optionally requires transfer marker +0x95 and either destroys immediately or marks lifecycle state 3.
void __cdecl ArrowProjectile_CleanupMatchingByBaseAndTarget(
        TESForm *baseForm,
        int maximumMatches,
        TESObjectREFR *target,
        char destroyImmediately,
        char requireInventoryTransfer)
{
  Actor *ListHead; // eax
  Actor *v6; // ebp
  int v7; // ebx
  Actor *v8; // edi
  char v9; // bl
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  TESObjectREFR *v13; // eax
  Actor *v14; // eax
  Actor *v15; // ebp
  Actor *v16; // edi
  _BYTE *v17; // eax
  _BYTE *v18; // esi
  int v19; // eax
  TESObjectREFR *v20; // eax
  int i; // [esp+10h] [ebp-4h]

  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x607f9c*/
  v6 = ActorList_ReturnHead((ActorList *)ListHead); /*0x607fa8*/
  v7 = 0; /*0x607faa*/
  v8 = v6; /*0x607fae*/
  for ( i = 0; v8; v7 = i )
  {
    if ( !*(_DWORD *)&v8->members.super.super.super.type && !v8->vtbl ) /*0x607fc6*/
      break; /*0x607fc9*/
    if ( v7 >= maximumMatches ) /*0x607fd3*/
      break; /*0x607fd3*/
    v9 = 0; /*0x607fea*/
    v10 = OblivionDynamicCast( /*0x607fec*/
            v8->vtbl,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
            &ArrowProjectile `RTTI Type Descriptor',
            0);
    v11 = v10; /*0x607ff1*/
    if ( !v10 ) /*0x607ff8*/
      goto LABEL_19; /*0x607ff8*/
    v12 = v10[0x17]; /*0x607ffa*/
    v13 = v12 ? *(TESObjectREFR **)(v12 + 0x28) : 0;
    if ( v13 == target
      && (TESForm *)(*(int (__thiscall **)(_DWORD *))(*v11 + 0x170))(v11) == baseForm
      && (!requireInventoryTransfer || *((_BYTE *)v11 + 0x95))
      && (!destroyImmediately
        ? (v11[0x18] = 3)
        : ((*(void (__thiscall **)(_DWORD *, int))(*v11 + 0x10))(v11, 1), v9 = 1),
          ++i,
          v9) )                                 // If requireInventoryTransfer is true, accept only matching ArrowProjectile byte +0x95 != 0; this proves +0x95 gates cleanup of actor-inventory-transferred projectiles.
    {
      if ( v8 != v6 ) /*0x608058*/
        v8 = *(Actor **)&v6->members.super.super.super.type; /*0x60805a*/
    }
    else
    {
LABEL_19:
      v6 = v8; /*0x60805f*/
      v8 = *(Actor **)&v8->members.super.super.super.type; /*0x608061*/
    }
  }
  v14 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x608077*/
  v15 = ActorList_ReturnHead((ActorList *)v14); /*0x608083*/
  v16 = v15; /*0x608087*/
  while ( v16 )
  {
    if ( !*(_DWORD *)&v16->members.super.super.super.type && !v16->vtbl ) /*0x608096*/
      break; /*0x608099*/
    if ( v7 >= maximumMatches ) /*0x60809f*/
      break; /*0x60809f*/
    v17 = OblivionDynamicCast( /*0x6080b2*/
            v16->vtbl,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
            &ArrowProjectile `RTTI Type Descriptor',
            0);
    v18 = v17; /*0x6080b7*/
    if ( v17
      && ((v19 = *((_DWORD *)v17 + 0x17)) == 0 ? (v20 = 0) : (v20 = *(TESObjectREFR **)(v19 + 0x28)),
          v20 == target
       && (TESForm *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 0x170))(v18) == baseForm
       && (!requireInventoryTransfer || v18[0x95])) )// Second ActorProcessManager list applies the same optional ArrowProjectile +0x95 transfer-marker filter before immediate destruction.
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v18 + 0x10))(v18, 1); /*0x6080ff*/
      if ( v16 != v15 ) /*0x608103*/
        v16 = *(Actor **)&v15->members.super.super.super.type; /*0x608105*/
      ++v7; /*0x608108*/
    }
    else
    {
      v15 = v16; /*0x60810d*/
      v16 = *(Actor **)&v16->members.super.super.super.type; /*0x60810f*/
    }
  }
}
