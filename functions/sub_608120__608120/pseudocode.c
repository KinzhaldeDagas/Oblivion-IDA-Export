// Finds the oldest lifecycle-state-2 projectile across the active process lists. destroyImmediately invokes destruction; otherwise it marks lifecycle state 3 for deferred retirement. maximumReferenceCount is passed by the constructor but not read in this build.
int __cdecl ArrowProjectile_PruneOldestSettled(int maximumReferenceCount, char destroyImmediately)
{
  _DWORD *v2; // ebx
  Actor *ListHead; // eax
  Actor *i; // esi
  ActorVtbl *vtbl; // edi
  void *v6; // eax
  Actor *v7; // eax
  Actor *v8; // eax
  Actor *v9; // edi
  ActorVtbl *v10; // esi
  void *v11; // eax
  float v13; // [esp+8h] [ebp-4h]

  v13 = 0.0; /*0x608125*/
  v2 = 0; /*0x608132*/
  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x608134*/
  for ( i = ActorList_ReturnHead((ActorList *)ListHead); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x608149*/
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x608156*/
      break; /*0x608159*/
    vtbl = i->vtbl; /*0x60815b*/
    if ( i->vtbl ) /*0x60815b*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x3A))(i->vtbl) ) /*0x60816b*/
      {
        v6 = OblivionDynamicCast( /*0x608180*/
               vtbl,
               0,
               (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
               &ArrowProjectile `RTTI Type Descriptor',
               0);
        if ( v6 ) /*0x60818c*/
        {                                       // Pruning candidate must be lifecycle state 2; choose the candidate with the greatest elapsedTime (+0x68), i.e. oldest eligible settled projectile.
          if ( v13 < (double)*((float *)v6 + 0x1A) && *((_DWORD *)v6 + 0x18) == 2 ) /*0x6081a1*/
          {
            v2 = v6; /*0x6081a6*/
            v13 = *((float *)v6 + 0x1A); /*0x6081a8*/
          }
        }
      }
    }
  }
  v7 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x6081ba*/
  v8 = ActorList_ReturnHead((ActorList *)v7); /*0x6081c1*/
  v9 = v8; /*0x6081c8*/
  if ( v2 ) /*0x6081ca*/
    goto LABEL_23; /*0x6081ca*/
  if ( v8 ) /*0x6081ce*/
  {
    do /*0x608235*/
    {
      if ( !*(_DWORD *)&v9->members.super.super.super.type && !v9->vtbl ) /*0x6081da*/
        break; /*0x6081dd*/
      v10 = v9->vtbl; /*0x6081df*/
      if ( v9->vtbl ) /*0x6081df*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->super.super.super.super.InitializeComponent + 0x3A))(v9->vtbl) ) /*0x6081ef*/
        {
          v11 = OblivionDynamicCast( /*0x608204*/
                  v10,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &ArrowProjectile `RTTI Type Descriptor',
                  0);
          if ( v11 ) /*0x608210*/
          {
            if ( v13 < (double)*((float *)v11 + 0x1A) && *((_DWORD *)v11 + 0x18) == 2 ) /*0x608225*/
            {
              v2 = v11; /*0x60822a*/
              v13 = *((float *)v11 + 0x1A); /*0x60822c*/
            }
          }
        }
      }
      v9 = *(Actor **)&v9->members.super.super.super.type; /*0x608230*/
    }
    while ( v9 ); /*0x608235*/
    if ( v2 ) /*0x608239*/
    {
LABEL_23:
      if ( destroyImmediately ) /*0x608240*/
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x8C))(v2, 1); /*0x60824e*/
        return g_liveArrowProjectileCount - 1; /*0x60825d*/
      }
      v2[0x18] = 3;                             // Constructor's over-limit call uses deferred mode: mark the selected oldest eligible projectile lifecycle state 3 rather than destroying it synchronously. /*0x60825e*/
    }
  }
  return g_liveArrowProjectileCount - 1; /*0x608257*/
}
