// Destroys one ActorAnimData-owned AnimIdle slot. Resolves the idle KF encoded key from KFModel +0x08, removes the matching sequence from the controller manager/map entry where appropriate, runs AnimIdle_CleanupLoadedResources, frees the 0x2C-byte holder, nulls the caller slot, and balances native references.
void __thiscall AnimIdle_DestroyAndRelease(void *this, char **a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // esi
  _WORD *v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned __int16 *v9; // edi
  int v10; // eax
  volatile LONG *v11; // edi
  char *v12; // edi
  int Magicka; // [esp+14h] [ebp-18h]
  volatile LONG *v14; // [esp+18h] [ebp-14h] BYREF
  int v15; // [esp+1Ch] [ebp-10h]
  unsigned int v16; // [esp+28h] [ebp-4h]

  v3 = *((_DWORD *)*a2 + 2); /*0x472eff*/
  v4 = 0; /*0x472f02*/
  v5 = 0; /*0x472f04*/
  v14 = 0; /*0x472f06*/
  Magicka = 0xFF; /*0x472f0a*/
  v15 = 0; /*0x472f12*/
  v16 = 0; /*0x472f18*/
  if ( v3 ) /*0x472f1c*/
  {
    v6 = *(_WORD **)(v3 + 8); /*0x472f1e*/
    if ( v6 ) /*0x472f23*/
    {
      Magicka = (unsigned __int16)Shared_GetWordAtOffset08(v6); /*0x472f3b*/
      ActorAnimData_FindAnimMapEntry(*((_DWORD **)this + 0x27), Magicka, &v14); /*0x472f3f*/
      v5 = (int)v14; /*0x472f44*/
      if ( v14 ) /*0x472f4a*/
      {
        v7 = *((_DWORD *)*a2 + 4); /*0x472f50*/
        if ( (*(int (__thiscall **)(volatile LONG *, unsigned int))(*v14 + 0x10))(v14, 0xFFFFFFFF) == v7 ) /*0x472f5e*/
          goto LABEL_9; /*0x472f5e*/
        v5 = 0; /*0x472f60*/
      }
    }
  }
  v8 = *((_DWORD *)*a2 + 4); /*0x472f68*/
  if ( v8 ) /*0x472f6d*/
  {
    v4 = *((_DWORD *)*a2 + 4); /*0x472f6f*/
    v15 = v4; /*0x472f75*/
    InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x472f79*/
  }
  if ( !v5 ) /*0x472f81*/
  {
    if ( v4 ) /*0x472fcb*/
    {
      KeyframeManager_RemoveSequence(*((unsigned __int16 **)this + 0x26), (int *)&v14, v4); /*0x472fd9*/
      if ( v14 ) /*0x472fe4*/
      {
        v11 = v14; /*0x472fe6*/
        if ( !InterlockedDecrement(v14 + 1) ) /*0x472fec*/
          goto LABEL_15; /*0x472ff4*/
      }
    }
    goto LABEL_16; /*0x472ff4*/
  }
LABEL_9:
  v9 = *((unsigned __int16 **)this + 0x26); /*0x472f83*/
  v10 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v5 + 0x10))(v5, 0xFFFFFFFF); /*0x472f92*/
  KeyframeManager_RemoveSequence(v9, (int *)&v14, v10); /*0x472f9c*/
  if ( v14 ) /*0x472fa7*/
  {
    v11 = v14; /*0x472fa9*/
    if ( !InterlockedDecrement(v14 + 1) ) /*0x472faf*/
LABEL_15:
      (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1); /*0x472ffa*/
  }
LABEL_16:
  v12 = *a2; /*0x473004*/
  if ( *a2 ) /*0x473008*/
  {
    AnimIdle_CleanupLoadedResources(*a2); /*0x473010*/
    FormHeapFree((unsigned int)v12); /*0x473016*/
  }
  *a2 = 0; /*0x473024*/
  if ( v5 ) /*0x47302a*/
  {
    ActorAnimData_RemoveAnimMapEntry(*((_DWORD **)this + 0x27), Magicka); /*0x473037*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 4))(v5, 0); /*0x473045*/
    (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x47304f*/
  }
  if ( !v4 ) /*0x473055*/
    ActorAnimData_RemoveAnimMapEntry(*((_DWORD **)this + 0x27), Magicka); /*0x473066*/
  v16 = 0xFFFFFFFF; /*0x47306d*/
  if ( v4 ) /*0x473075*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x47307b*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x47308e*/
  }
}
