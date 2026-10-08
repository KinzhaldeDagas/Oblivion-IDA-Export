// Verified: marks subtree release-in-progress (+5), clears matching interface active/drag references, marks released (+4), detaches parent, destroys each Value, detaches model, then deletes children. Native loop at 0x58DA90 advances child iterator EDX before call; pseudocode may omit this advance.
void __thiscall Tile::Release(Tile *this)
{
  int v2; // edx
  InterfaceManager *Singleton; // eax
  int *v4; // eax
  int v5; // ecx
  bool v6; // zf
  OblivionTileValueView *v7; // edi
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // esi
  int *v10; // eax
  int v11; // ecx
  void (__thiscall ***v12)(_DWORD, int); // edi
  int v13; // [esp+10h] [ebp-4h] BYREF

  if ( !*((_BYTE *)this + 4) && !*((_BYTE *)this + 5) ) /*0x58da7e*/
  {
    v2 = *((_DWORD *)this + 0xD); /*0x58da83*/
    *((_BYTE *)this + 5) = 1; /*0x58da88*/
    while ( v2 ) /*0x58da8c*/
      Tile::MarkSubtreeReleasing(*(Tile **)(v2 + 8)); /*0x58da98*/
  }
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x58daa4*/
  if ( Singleton->activeTile == this ) /*0x58dab2*/
  {
    Singleton->activeTile = 0; /*0x58dab4*/
    Singleton->activeMenu = 0; /*0x58daba*/
  }
  if ( (Tile *)Singleton->unk0A0 == this ) /*0x58dac6*/
  {
    Singleton->unk0A0 = 0; /*0x58dac8*/
    Singleton->unk0A4 = 0; /*0x58dace*/
  }
  *((_BYTE *)this + 4) = 1; /*0x58dad6*/
  sub_589890(this); /*0x58dada*/
  Tile::SetParent(this, 0, 0); /*0x58dae3*/
  while ( *((_DWORD *)this + 8) ) /*0x58dae8*/
  {
    v4 = *((int **)this + 6); /*0x58daf0*/
    v5 = *v4; /*0x58daf3*/
    v6 = *v4 == 0; /*0x58daf5*/
    *((_DWORD *)this + 6) = *v4; /*0x58daf7*/
    if ( v6 ) /*0x58dafa*/
      *((_DWORD *)this + 7) = 0; /*0x58db01*/
    else
      *(_DWORD *)(v5 + 4) = 0; /*0x58dafc*/
    v7 = (OblivionTileValueView *)v4[2]; /*0x58db06*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 5) + 8))((char *)this + 0x14, v4); /*0x58db0f*/
    --*((_DWORD *)this + 8); /*0x58db11*/
    if ( v7 ) /*0x58db17*/
    {
      Tile::Value::Destroy(v7); /*0x58db1b*/
      FormHeapFree((unsigned int)v7); /*0x58db21*/
    }
  }
  v8 = *((_DWORD *)this + 9); /*0x58db2e*/
  if ( v8 ) /*0x58db33*/
  {
    if ( *(_DWORD *)(v8 + 0x1C) ) /*0x58db35*/
    {
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x58db3c*/
      (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 9) + 0x1C) + 0x88))( /*0x58db58*/
        *(_DWORD *)(*((_DWORD *)this + 9) + 0x1C),
        &v13,
        *((_DWORD *)this + 9));
      if ( v13 ) /*0x58db60*/
      {
        v9 = (void (__thiscall ***)(_DWORD, int))v13; /*0x58db62*/
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x58db68*/
          (**v9)(v9, 1); /*0x58db7e*/
      }
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x58db82*/
    }
  }
  while ( *((_DWORD *)this + 0xF) ) /*0x58db8a*/
  {
    v10 = *((int **)this + 0xD); /*0x58db92*/
    v11 = *v10; /*0x58db95*/
    v6 = *v10 == 0; /*0x58db97*/
    *((_DWORD *)this + 0xD) = *v10; /*0x58db99*/
    if ( v6 ) /*0x58db9c*/
      *((_DWORD *)this + 0xE) = 0; /*0x58dba3*/
    else
      *(_DWORD *)(v11 + 4) = 0; /*0x58db9e*/
    v12 = (void (__thiscall ***)(_DWORD, int))v10[2]; /*0x58dba8*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0xC) + 8))((char *)this + 0x30, v10); /*0x58dbb1*/
    --*((_DWORD *)this + 0xF); /*0x58dbb3*/
    if ( v12 ) /*0x58dbb9*/
      (**v12)(v12, 1); /*0x58dbc3*/
  }
}
