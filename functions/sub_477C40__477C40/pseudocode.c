// Completes an asynchronous AnimIdle KF load. Stores KFModel at +0x08, binds the two actor-specific resources, holds the model reference, and marks phase 1. Completion mode +0x04 values 2/3 process playable queued state (3 also starts action 0x0B); mode 0 performs install-only; unsupported/no-ActorAnimData paths retain or destroy the holder as observed.
void __thiscall AnimIdle_OnKFLoadComplete(int *this, int a2)
{
  int *v3; // edi
  const char *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  ActorAnimData *v11; // eax
  ActorAnimData *v12; // esi
  AnimSequenceSingle *v13; // eax
  TESObjectREFR *v14; // [esp-14h] [ebp-1Ch]
  int v15; // [esp+4h] [ebp-4h]

  *(this + 2) = a2; /*0x477c4a*/
  if ( !a2 ) /*0x477c4d*/
  {
    *this = 0; /*0x477da3*/
    return; /*0x477da3*/
  }
  v3 = this + 7; /*0x477c56*/
  v15 = 2; /*0x477c59*/
  do /*0x477ceb*/
  {
    if ( v3[0xFFFFFFFE] ) /*0x477c61*/
    {
      if ( *(this + 0xA) ) /*0x477c67*/
      {
        v14 = (TESObjectREFR *)*(this + 0xA); /*0x477c78*/
        v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(v3[0xFFFFFFFE] + 0x18) + 0x14))(v3[0xFFFFFFFE] + 0x18); /*0x477c7e*/
        v5 = Actor_LoadCloneAndAttachModel3D(v4, 0xFFFFFFFF, v14, 0); /*0x477c81*/
        v6 = *v3; /*0x477c86*/
        v7 = v5; /*0x477c88*/
        if ( *v3 != v5 ) /*0x477c8f*/
        {
          if ( v6 ) /*0x477c93*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x477c99*/
              (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x477caf*/
          }
          *v3 = v7; /*0x477cb3*/
          if ( v7 ) /*0x477cb5*/
            InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x477cbb*/
        }
        v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xA) + 0x164))(*(this + 0xA)); /*0x477ccc*/
        sub_7165B0((_DWORD *)*v3, *(_DWORD *)(*(_DWORD *)(v8 + 0x98) + 0x7C)); /*0x477cdb*/
      }
    }
    ++v3; /*0x477ce3*/
    --v15; /*0x477ce6*/
  }
  while ( v15 ); /*0x477ceb*/
  InterlockedIncrement((volatile LONG *)(a2 + 0xC)); /*0x477cf9*/
  v9 = *(this + 0xA); /*0x477cff*/
  *this = 1; /*0x477d04*/
  if ( v9 ) /*0x477d0b*/
  {
    v10 = *(this + 1); /*0x477d0d*/
    if ( v10 == 2 || v10 == 3 ) /*0x477d18*/
    {
      v11 = (ActorAnimData *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x164))(v9); /*0x477d22*/
      v12 = v11; /*0x477d24*/
      if ( v11 ) /*0x477d28*/
      {
        if ( ActorAnimData_ProcessQueuedIdleKF(v11) ) /*0x477d2c*/
        {
          if ( *(this + 1) == 3 ) /*0x477d39*/
            Actor_SetCurrentActionWithBowVisualCleanup((PlayerCharacter *)*(this + 0xA), 0xB, *(this + 4)); /*0x477d44*/
        }
        else
        {
          ActorAnimData_CleanupOrPromoteQueuedIdles(v12, 1, 0); /*0x477d57*/
        }
        return; /*0x477d44*/
      }
    }
    else
    {
      if ( *(this + 1) ) /*0x477d68*/
        return; /*0x477d6c*/
      v13 = (AnimSequenceSingle *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x164))(v9); /*0x477d76*/
      if ( v13 ) /*0x477d7a*/
      {
        ActorAnimData_InstallQueuedIdleOnly(v13); /*0x477d96*/
        return; /*0x477da0*/
      }
    }
    AnimIdle_CleanupLoadedResources((char *)this); /*0x477d7e*/
    FormHeapFree((unsigned int)this); /*0x477d84*/
  }
}
