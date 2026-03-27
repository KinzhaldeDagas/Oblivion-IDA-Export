void __thiscall HighProcess::~HighProcess(#552 *this)
{
  #552 *process; // eax
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v8; // esi
  unsigned int v9; // esi
  unsigned int *v10; // esi
  _DWORD *v11; // esi
  int v12; // ebp
  int v13; // edx
  _DWORD *v14; // ecx
  int **v15; // esi
  int v16; // ebx
  int *v17; // ebp
  int v18; // eax
  unsigned int v19; // esi
  _DWORD *v20; // esi
  int v21; // ebp
  int v22; // esi
  _DWORD v23[2]; // [esp+14h] [ebp-14h] BYREF
  int v24; // [esp+24h] [ebp-4h]

  v23[1] = this;
  *(_DWORD *)this = &HighProcess::`vftable';
  process = (#552 *)TESDataHandler_g_PlayerRef->super.super.super.process;
  v24 = 1;
  if ( process == this && !*(_BYTE *)(TESDataHandler + 0xCD4) )
    PrintError("Don't kill the PlayerCharacter HighProcess until we exit the game. The game will now crash.");
  v6 = *((_DWORD *)this + 0x9A);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 0x1C) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(v6 + 0x1C) + 0x88))(
        *(_DWORD *)(v6 + 0x1C),
        v23,
        *((_DWORD *)this + 0x9A));
      if ( v23[0] )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v23[0];
        if ( !InterlockedDecrement((volatile LONG *)(v23[0] + 4)) )
          (**v7)(v7, 1);
      }
    }
    v8 = *((_DWORD *)this + 0x9A);
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      *((_DWORD *)this + 0x9A) = 0;
    }
  }
  v9 = *((_DWORD *)this + 0xAD);
  if ( v9 )
  {
    sub_493B70(*((unsigned int ***)this + 0xAD));
    FormHeapFree(v9);
  }
  v10 = *((unsigned int **)this + 0x63);
  *((_DWORD *)this + 0xAD) = 0;
  for ( *((_DWORD *)this + 0x75) = 0; v10; v10 = (unsigned int *)v10[1] )
  {
    if ( !*v10 )
      break;
    FormHeapFree(*v10);
  }
  v11 = *((_DWORD **)this + 0x63);
  if ( v11[1] )
  {
    do
    {
      v12 = *(_DWORD *)(v11[1] + 4);
      FormHeapFree(v11[1]);
      v11[1] = v12;
    }
    while ( v12 );
  }
  *v11 = 0;
  FormHeapFree(*((_DWORD *)this + 0x63));
  v14 = (_DWORD *)((char *)this + 0x190);
  if ( *((_DWORD *)this + 0x65) || *v14 )
    BSSimpleList_Clear(v14);
  v15 = (int **)((char *)this + 0x220);
  v16 = 2;
  do
  {
    if ( *v15 )
    {
      if ( sub_6B7260(*v15) )
        sub_6B7240(*v15);
      sub_6B73C0(*v15);
      v17 = *v15;
      if ( *v15 )
      {
        sub_6B73E0(*v15);
        FormHeapFree((unsigned int)v17);
      }
      *v15 = 0;
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v18 = *((_DWORD *)this + 0xA2);
  if ( v18 )
    *(_BYTE *)(v18 + 0x10) = 1;
  v19 = *((_DWORD *)this + 0x94);
  if ( v19 )
  {
    sub_6B81D0(*((unsigned int **)this + 0x94));
    FormHeapFree(v19);
  }
  v20 = *((_DWORD **)this + 0xA9);
  if ( v20 )
  {
    if ( v20[1] )
    {
      do
      {
        v21 = *(_DWORD *)(v20[1] + 4);
        FormHeapFree(v20[1]);
        v20[1] = v21;
      }
      while ( v21 );
    }
    *v20 = 0;
    FormHeapFree(*((_DWORD *)this + 0xA9));
    *((_DWORD *)this + 0xA9) = 0;
  }
  v22 = *((_DWORD *)this + 0x9A);
  LOBYTE(v24) = 0;
  if ( v22 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
      (**(void (__thiscall ***)(int, int))v22)(v22, 1);
  }
  v24 = 0xFFFFFFFF;
  MiddleHighProcess::~MiddleHighProcess(this, v13);
}
