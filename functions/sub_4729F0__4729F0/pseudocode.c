// AnimIdle owned-resource cleanup. Detaches/releases the two actor-bound resources at +0x1C/+0x20, releases the loaded model/path and sequence references, cleans removed controllers, and cancels matching actor high-process action 0x0B before releasing the held sequence.
void __thiscall AnimIdle_CleanupLoadedResources(char *this)
{
  int *v2; // esi
  int v3; // ebp
  _DWORD *ShadowSceneNode; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  int *v12; // eax
  _DWORD **v13; // ecx
  int v14; // esi
  int v15; // ebx
  int v16; // [esp-4h] [ebp-2Ch]
  _DWORD v17[2]; // [esp+14h] [ebp-14h] BYREF
  int v18; // [esp+24h] [ebp-4h]

  v17[1] = this; /*0x472a19*/
  v18 = 1; /*0x472a1d*/
  v2 = (int *)(this + 0x1C); /*0x472a25*/
  v3 = 2; /*0x472a28*/
  do /*0x472b22*/
  {
    if ( *v2 ) /*0x472a30*/
    {
      v16 = *v2; /*0x472a3a*/
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x472a3d*/
      ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, v16); /*0x472a47*/
      v5 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xA) + 0x164))(*((_DWORD *)this + 0xA)); /*0x472a57*/
      sub_716620((_DWORD *)*v2, *(_DWORD *)(*(_DWORD *)(v5 + 0x98) + 0x7C)); /*0x472a66*/
      v6 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xA) + 0x164))(*((_DWORD *)this + 0xA)); /*0x472a79*/
      if ( v6 ) /*0x472a7d*/
      {
        v7 = *(_DWORD **)(v6 + 4); /*0x472a7f*/
        if ( v7 ) /*0x472a86*/
          sub_47CC80(v7, *v2); /*0x472a8b*/
      }
      (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(*v2 + 0x1C) + 0x88))( /*0x472aa3*/
        *(_DWORD *)(*v2 + 0x1C),
        v17,
        *v2);
      if ( v17[0] ) /*0x472aab*/
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v17[0]; /*0x472aad*/
        if ( !InterlockedDecrement((volatile LONG *)(v17[0] + 4)) ) /*0x472ab3*/
          (**v8)(v8, 1); /*0x472ac9*/
      }
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)(v2[0xFFFFFFFE] + 0x18) + 0x14))(v2[0xFFFFFFFE] + 0x18); /*0x472ad6*/
      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v9, 1, 1); /*0x472ae3*/
      v10 = *v2; /*0x472ae8*/
      if ( *v2 ) /*0x472ae8*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x472af2*/
        {
          if ( v10 ) /*0x472afe*/
            (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x472b08*/
        }
        *v2 = 0; /*0x472b0a*/
      }
      v11 = *((_DWORD **)this + 4); /*0x472b10*/
      if ( v11 ) /*0x472b15*/
        BSAnimGroupSequence_CleanupRemovedControllers(v11, (int)v2); /*0x472b17*/
    }
    ++v2; /*0x472b1c*/
    --v3; /*0x472b1f*/
  }
  while ( v3 ); /*0x472b22*/
  v12 = *((int **)this + 2); /*0x472b28*/
  if ( v12 && *((_DWORD *)this + 1) ) /*0x472b2f*/
  {
    ModelLoader_ReleaseModelPath(MEMORY[0xB33A1C], *v12, 1); /*0x472b40*/
  }
  else if ( !*(_DWORD *)this ) /*0x472b47*/
  {
    sub_439D20((_DWORD **)MEMORY[0xB33A1C], (int)this); /*0x472b53*/
  }
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x472b5e*/
  {
    v13 = *((_DWORD ***)this + 0xA); /*0x472b67*/
    if ( v13 ) /*0x472b6c*/
    {
      if ( Actor_GetCurrentAction(v13) == 0xB ) /*0x472b76*/
      {
        v14 = *((_DWORD *)this + 4); /*0x472b86*/
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 0xA) + 0x58) + 0x2D4))(*(_DWORD *)(*((_DWORD *)this + 0xA) + 0x58)) == v14 ) /*0x472b8d*/
          Actor_SetCurrentActionWithBowVisualCleanup(*((PlayerCharacter **)this + 0xA), 0xFFFFFFFF, 0); /*0x472b96*/
      }
    }
  }
  LOBYTE(v18) = 0; /*0x472ba8*/
  _LN21(this + 0x1C, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x472bad*/
  v15 = *((_DWORD *)this + 4); /*0x472bb2*/
  v18 = 0xFFFFFFFF; /*0x472bb7*/
  if ( v15 ) /*0x472bbf*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x472bc5*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x472bdb*/
  }
}
