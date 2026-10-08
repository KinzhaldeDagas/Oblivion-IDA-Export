// Reconnects a loaded AnimIdle KF/sequence to ActorAnimData, restores nested sequence state, and preserves the idle phase needed by queued-idle processing.
void __thiscall AnimIdle_RestoreLoadedKFState(Ni2DBuffer **Dst, float a2, AnimSequenceSingle *a3)
{
  Ni2DBuffer *v7; // eax
  ActorAnimData *v8; // edi
  int v9; // eax
  _DWORD *animsMap; // ebp
  int AnimationGroup; // eax
  BSAnimGroupSequence *v12; // eax
  BSAnimGroupSequence *v13; // eax
  _DWORD *v14; // edi
  int v15; // eax
  float *v16; // esi
  unsigned __int16 SaveStateSize; // ax
  unsigned int v18; // [esp-4h] [ebp-1Ch]
  Ni2DBuffer *v19; // [esp+0h] [ebp-18h]
  char Dsta; // [esp+13h] [ebp-5h] BYREF
  int destination; // [esp+14h] [ebp-4h] BYREF

  SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 4u); /*0x474ea0*/
  SaveLoad_LoadData(g_TESSaveLoadGame, Dst + 1, 4u); /*0x474eb1*/
  SaveLoad_LoadData(g_TESSaveLoadGame, Dst + 3, 4u); /*0x474ec2*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &Dsta, 1u); /*0x474ed4*/
  if ( Dsta ) /*0x474ede*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 1u); /*0x474ef1*/
    v7 = Dst[2]; /*0x474ef6*/
    if ( !v7 ) /*0x474efb*/
      goto LABEL_13; /*0x474efb*/
    v8 = (ActorAnimData *)a3; /*0x474f02*/
    if ( !ActorAnimData_InstallKFModel(a3, (int)v7, 0) ) /*0x474f0b*/
      goto LABEL_13; /*0x474f12*/
    v9 = (int)*Dst; /*0x474f18*/
    if ( *Dst == (Ni2DBuffer *)2 ) /*0x474f1d*/
    {
      animsMap = v8->animsMap; /*0x474f26*/
      AnimationGroup = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)Dst[2]->members.width); /*0x474f31*/
      if ( !ActorAnimData_FindAnimMapEntry(animsMap, AnimationGroup, &a3) ) /*0x474f41*/
        goto LABEL_13; /*0x474f41*/
      v8->unkC4 = 1; /*0x474f43*/
      v19 = Dst[3]; /*0x474f52*/
      v18 = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)Dst[2]->members.width); /*0x474f60*/
      v12 = (BSAnimGroupSequence *)(*((int (__thiscall **)(AnimSequenceSingle *, int))a3->vtbl + 4))(a3, destination); /*0x474f67*/
      v13 = ActorAnimData_PlaySequence(v8, v12, v18, (int)v19); /*0x474f6c*/
    }
    else
    {
      if ( !v9 ) /*0x474f75*/
      {
        *Dst = (Ni2DBuffer *)1; /*0x474f77*/
        goto LABEL_13; /*0x474f7d*/
      }
      if ( v9 != 3 ) /*0x474f82*/
        goto LABEL_13; /*0x474f82*/
      v14 = v8->animsMap; /*0x474f8a*/
      v15 = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)Dst[2]->members.width); /*0x474f95*/
      if ( !ActorAnimData_FindAnimMapEntry(v14, v15, &a3) ) /*0x474f9d*/
        goto LABEL_13; /*0x474fa4*/
      v13 = (BSAnimGroupSequence *)(*((int (__thiscall **)(AnimSequenceSingle *, int))a3->vtbl + 4))(a3, destination); /*0x474fb4*/
    }
    NiSmartPointer_Set__(Dst + 4, (Ni2DBuffer *)v13); /*0x474fba*/
LABEL_13:
    v16 = (float *)Dst[4]; /*0x474fc0*/
    if ( v16 ) /*0x474fc5*/
    {
      BSAnimGroupSequence_LoadState(v16, a2); /*0x474fd1*/
    }
    else
    {
      SaveStateSize = BSAnimGroupSequence_GetSaveStateSize(); /*0x474fde*/
      SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, SaveStateSize); /*0x474fed*/
    }
    return; /*0x474fdb*/
  }
  if ( !*Dst && g_TESSaveLoadGame->currentVersion >= 0x4Cu ) /*0x475009*/
    *Dst = (Ni2DBuffer *)1; /*0x47500b*/
}
