void __thiscall sub_58DA70(int this)
{
  int v2; // edx
  InterfaceManager *Singleton; // eax
  int *v4; // eax
  int v5; // ecx
  bool v6; // zf
  _DWORD *v7; // edi
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // esi
  int *v10; // eax
  int v11; // ecx
  void (__thiscall ***v12)(_DWORD, int); // edi
  int v13; // [esp+10h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 4) && !*(_BYTE *)(this + 5) )
  {
    v2 = *(_DWORD *)(this + 0x34);
    *(_BYTE *)(this + 5) = 1;
    while ( v2 )
      sub_588B20(*(_DWORD *)(v2 + 8));
  }
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Singleton->activeTile == (Tile *)this )
  {
    Singleton->activeTile = 0;
    Singleton->activeMenu = 0;
  }
  if ( Singleton->unk0A0 == this )
  {
    Singleton->unk0A0 = 0;
    Singleton->unk0A4 = 0;
  }
  *(_BYTE *)(this + 4) = 1;
  sub_589890((_DWORD *)this);
  sub_58D1C0((float *)this, 0.0, 0);
  while ( *(_DWORD *)(this + 0x20) )
  {
    v4 = *(int **)(this + 0x18);
    v5 = *v4;
    v6 = *v4 == 0;
    *(_DWORD *)(this + 0x18) = *v4;
    if ( v6 )
      *(_DWORD *)(this + 0x1C) = 0;
    else
      *(_DWORD *)(v5 + 4) = 0;
    v7 = (_DWORD *)v4[2];
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x14) + 8))(this + 0x14, v4);
    --*(_DWORD *)(this + 0x20);
    if ( v7 )
    {
      sub_589BB0(v7);
      FormHeapFree((unsigned int)v7);
    }
  }
  v8 = *(_DWORD *)(this + 0x24);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 0x1C) )
    {
      nullsub_returnTrue_0arg();
      (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 0x24) + 0x1C) + 0x88))(
        *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x1C),
        &v13,
        *(_DWORD *)(this + 0x24));
      if ( v13 )
      {
        v9 = (void (__thiscall ***)(_DWORD, int))v13;
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
          (**v9)(v9, 1);
      }
      nullsub_returnTrue_0arg();
    }
  }
  while ( *(_DWORD *)(this + 0x3C) )
  {
    v10 = *(int **)(this + 0x34);
    v11 = *v10;
    v6 = *v10 == 0;
    *(_DWORD *)(this + 0x34) = *v10;
    if ( v6 )
      *(_DWORD *)(this + 0x38) = 0;
    else
      *(_DWORD *)(v11 + 4) = 0;
    v12 = (void (__thiscall ***)(_DWORD, int))v10[2];
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x30) + 8))(this + 0x30, v10);
    --*(_DWORD *)(this + 0x3C);
    if ( v12 )
      (**v12)(v12, 1);
  }
}
