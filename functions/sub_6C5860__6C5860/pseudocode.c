// Obtains an inactive __TempBlendSequence__ with enough controlled blocks or allocates one, rebuilds it from the destination/optional source pose, resets it, and registers it with the controller manager. This temporary sequence is manager-owned transition scaffolding.
volatile LONG *__thiscall NiControllerManager_GetOrCreateTempBlendSequence(int **this, int a2, int a3)
{
  int v4; // esi
  int **v5; // ebp
  int v6; // eax
  volatile LONG *v7; // edi
  volatile LONG *v8; // eax
  volatile LONG *v9; // esi
  volatile LONG *v10; // edi
  unsigned int v12; // [esp+14h] [ebp-14h]
  volatile LONG *v13; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-4h]

  if ( a3 ) /*0x6c588f*/
    v12 = *(_DWORD *)(a3 + 0xC); /*0x6c5894*/
  else
    v12 = *(_DWORD *)(a2 + 0xC); /*0x6c58a1*/
  v4 = 0; /*0x6c58a8*/
  if ( !*(this + 0x1E) ) /*0x6c58ac*/
  {
LABEL_13:
    v8 = (volatile LONG *)FormHeapAlloc(0x68u); /*0x6c5906*/
    v13 = v8; /*0x6c5910*/
    v14 = 0; /*0x6c5916*/
    if ( v8 ) /*0x6c591e*/
      v9 = (volatile LONG *)sub_6C7FB0((void *)v8, "__TempBlendSequence__", v12, 0xC, 0); /*0x6c5939*/
    else
      v9 = 0; /*0x6c59ab*/
    v13 = v9; /*0x6c59af*/
    if ( v9 ) /*0x6c59b3*/
      InterlockedIncrement(v9 + 1); /*0x6c59b9*/
    v14 = 1; /*0x6c59c7*/
    sub_6C4790(this + 0x1C, (LONG *)&v13); /*0x6c59cf*/
    v14 = 0xFFFFFFFF; /*0x6c59d6*/
    if ( v9 ) /*0x6c59de*/
    {
      if ( !InterlockedDecrement(v9 + 1) ) /*0x6c59e4*/
        (**(void (__thiscall ***)(void *, int))v9)((void *)v9, 1); /*0x6c59fa*/
    }
    goto LABEL_18; /*0x6c59fc*/
  }
  v5 = this + 0x1C; /*0x6c58ae*/
  while ( 1 ) /*0x6c58b4*/
  {
    v6 = (*v5)[v4]; /*0x6c58b4*/
    if ( !*(_DWORD *)(v6 + 0x44) ) /*0x6c58b7*/
      break; /*0x6c58b7*/
LABEL_12:
    if ( ++v4 >= (unsigned int)*(this + 0x1E) ) /*0x6c5904*/
      goto LABEL_13; /*0x6c5904*/
  }
  if ( *(_DWORD *)(v6 + 0xC) < v12 ) /*0x6c58c4*/
  {
    KeyframeManager_RemoveSequence((unsigned __int16 *)this, (int *)&v13, (*v5)[v4]); /*0x6c58ce*/
    v7 = v13; /*0x6c58d3*/
    if ( v13 ) /*0x6c58d9*/
    {
      if ( !InterlockedDecrement(v13 + 1) ) /*0x6c58df*/
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x6c58f1*/
    }
    sub_6C4810((int *)this + 0x1C, v4--); /*0x6c58f6*/
    goto LABEL_12; /*0x6c58fb*/
  }
  v9 = (volatile LONG *)(*v5)[v4]; /*0x6c5945*/
  KeyframeManager_RemoveSequence((unsigned __int16 *)this, (int *)&v13, (int)v9); /*0x6c5947*/
  v10 = v13; /*0x6c594c*/
  if ( v13 ) /*0x6c5952*/
  {
    if ( !InterlockedDecrement(v13 + 1) ) /*0x6c5958*/
      (**(void (__thiscall ***)(volatile LONG *, int))v10)(v10, 1); /*0x6c596a*/
  }
LABEL_18:
  sub_6C9F10((float *)a2, (int)v9, v12, a3); /*0x6c596c*/
  sub_6C78B0(v9); /*0x6c5982*/
  NiControllerManager_AddSequence((NiControllerManager *)this, (NiControllerSequence *)v9, 0, 0); /*0x6c598e*/
  return v9; /*0x6c5995*/
}
