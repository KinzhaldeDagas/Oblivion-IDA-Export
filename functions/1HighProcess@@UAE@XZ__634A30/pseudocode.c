void __thiscall HighProcess::~HighProcess(#552 *this)
{
  #552 *process; // eax
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // esi
  unsigned int v6; // esi
  unsigned int *v7; // esi
  _DWORD *v8; // esi
  int v9; // ebp
  int v10; // edx
  _DWORD *v11; // ecx
  int **v12; // esi
  int v13; // ebx
  int *v14; // ebp
  int v15; // eax
  unsigned int v16; // esi
  _DWORD *v17; // esi
  int v18; // ebp
  int v19; // esi
  _DWORD v20[2]; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+24h] [ebp-4h]

  v20[1] = this; /*0x634a59*/
  *(_DWORD *)this = &HighProcess::`vftable'; /*0x634a5d*/
  process = (#552 *)reference->super.super.super.process; /*0x634a68*/
  v21 = 1; /*0x634a6d*/
  if ( process == this && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x634a7d*/
    PrintError("Don't kill the PlayerCharacter HighProcess until we exit the game. The game will now crash."); /*0x634a8b*/
  v3 = *((_DWORD *)this + 0x9A); /*0x634a93*/
  if ( v3 ) /*0x634a9d*/
  {
    if ( *(_DWORD *)(v3 + 0x1C) ) /*0x634a9f*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(v3 + 0x1C) + 0x88))( /*0x634ab5*/
        *(_DWORD *)(v3 + 0x1C),
        v20,
        *((_DWORD *)this + 0x9A));
      if ( v20[0] ) /*0x634abd*/
      {
        v4 = (void (__thiscall ***)(_DWORD, int))v20[0]; /*0x634abf*/
        if ( !InterlockedDecrement((volatile LONG *)(v20[0] + 4)) ) /*0x634ac5*/
          (**v4)(v4, 1); /*0x634adb*/
      }
    }
    v5 = *((_DWORD *)this + 0x9A); /*0x634add*/
    if ( v5 ) /*0x634ae5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x634aeb*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x634b01*/
      *((_DWORD *)this + 0x9A) = 0; /*0x634b03*/
    }
  }
  v6 = *((_DWORD *)this + 0xAD); /*0x634b09*/
  if ( v6 ) /*0x634b11*/
  {
    sub_493B70(*((unsigned int ***)this + 0xAD)); /*0x634b15*/
    FormHeapFree(v6); /*0x634b1b*/
  }
  v7 = *((unsigned int **)this + 0x63); /*0x634b23*/
  *((_DWORD *)this + 0xAD) = 0; /*0x634b2b*/
  for ( *((_DWORD *)this + 0x75) = 0; v7; v7 = (unsigned int *)v7[1] ) /*0x634b37*/
  {
    if ( !*v7 ) /*0x634b40*/
      break; /*0x634b44*/
    FormHeapFree(*v7); /*0x634b47*/
  }
  v8 = *((_DWORD **)this + 0x63); /*0x634b56*/
  if ( v8[1] ) /*0x634b5c*/
  {
    do /*0x634b75*/
    {
      v9 = *(_DWORD *)(v8[1] + 4); /*0x634b64*/
      FormHeapFree(v8[1]); /*0x634b68*/
      v8[1] = v9; /*0x634b72*/
    }
    while ( v9 ); /*0x634b75*/
  }
  *v8 = 0; /*0x634b77*/
  FormHeapFree(*((_DWORD *)this + 0x63)); /*0x634b80*/
  v11 = (_DWORD *)((char *)this + 0x190); /*0x634b85*/
  if ( *((_DWORD *)this + 0x65) || *v11 ) /*0x634b93*/
    BSSimpleList_Clear(v11); /*0x634b97*/
  v12 = (int **)((char *)this + 0x220); /*0x634b9c*/
  v13 = 2; /*0x634ba2*/
  do /*0x634be6*/
  {
    if ( *v12 ) /*0x634ba7*/
    {
      if ( SoundHandle::IsPlaying((UInt32 *)*v12) ) /*0x634bad*/
        sub_6B7240(*v12); /*0x634bb8*/
      sub_6B73C0(*v12); /*0x634bbf*/
      v14 = *v12; /*0x634bc4*/
      if ( *v12 ) /*0x634bc4*/
      {
        sub_6B73E0(*v12); /*0x634bcc*/
        FormHeapFree((unsigned int)v14); /*0x634bd2*/
      }
      *v12 = 0; /*0x634bda*/
    }
    ++v12; /*0x634be0*/
    --v13; /*0x634be3*/
  }
  while ( v13 ); /*0x634be6*/
  v15 = *((_DWORD *)this + 0xA2); /*0x634be8*/
  if ( v15 ) /*0x634bf0*/
    *(_BYTE *)(v15 + 0x10) = 1; /*0x634bf2*/
  v16 = *((_DWORD *)this + 0x94); /*0x634bf6*/
  if ( v16 ) /*0x634bfe*/
  {
    DialogueItem::Destroy(*((DialogueItemView **)this + 0x94)); /*0x634c02*/
    FormHeapFree(v16); /*0x634c08*/
  }
  v17 = *((_DWORD **)this + 0xA9); /*0x634c10*/
  if ( v17 ) /*0x634c18*/
  {
    if ( v17[1] ) /*0x634c1a*/
    {
      do /*0x634c34*/
      {
        v18 = *(_DWORD *)(v17[1] + 4); /*0x634c23*/
        FormHeapFree(v17[1]); /*0x634c27*/
        v17[1] = v18; /*0x634c31*/
      }
      while ( v18 ); /*0x634c34*/
    }
    *v17 = 0; /*0x634c36*/
    FormHeapFree(*((_DWORD *)this + 0xA9)); /*0x634c43*/
    *((_DWORD *)this + 0xA9) = 0; /*0x634c4b*/
  }
  v19 = *((_DWORD *)this + 0x9A); /*0x634c55*/
  LOBYTE(v21) = 0; /*0x634c5d*/
  if ( v19 ) /*0x634c62*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x634c68*/
      (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x634c7e*/
  }
  v21 = 0xFFFFFFFF; /*0x634c82*/
  MiddleHighProcess::~MiddleHighProcess(this, v10); /*0x634c8a*/
}
