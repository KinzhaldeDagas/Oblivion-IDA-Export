void __thiscall sub_4729F0(int *this)
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

  v17[1] = this;
  v18 = 1;
  v2 = this + 7;
  v3 = 2;
  do
  {
    if ( *v2 )
    {
      v16 = *v2;
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C5E70(ShadowSceneNode, v16);
      v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xA) + 0x164))(*(this + 0xA));
      sub_716620((_DWORD *)*v2, *(_DWORD *)(*(_DWORD *)(v5 + 0x98) + 0x7C));
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xA) + 0x164))(*(this + 0xA));
      if ( v6 )
      {
        v7 = *(_DWORD **)(v6 + 4);
        if ( v7 )
          sub_47CC80(v7, *v2);
      }
      (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(*v2 + 0x1C) + 0x88))(
        *(_DWORD *)(*v2 + 0x1C),
        v17,
        *v2);
      if ( v17[0] )
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v17[0];
        if ( !InterlockedDecrement((volatile LONG *)(v17[0] + 4)) )
          (**v8)(v8, 1);
      }
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)(v2[0xFFFFFFFE] + 0x18) + 0x14))(v2[0xFFFFFFFE] + 0x18);
      QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v9, 1, 1);
      v10 = *v2;
      if ( *v2 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        {
          if ( v10 )
            (**(void (__thiscall ***)(int, int))v10)(v10, 1);
        }
        *v2 = 0;
      }
      v11 = (_DWORD *)*(this + 4);
      if ( v11 )
        sub_49F750(v11, (int)v2);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v12 = (int *)*(this + 2);
  if ( v12 && *(this + 1) )
  {
    sub_438540(ModelLoaderPtr, *v12, 1);
  }
  else if ( !*this )
  {
    sub_439D20((_DWORD **)ModelLoaderPtr, (int)this);
  }
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    v13 = (_DWORD **)*(this + 0xA);
    if ( v13 )
    {
      if ( Actor_GetCurrentAction(v13) == 0xB )
      {
        v14 = *(this + 4);
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 0xA) + 0x58) + 0x2D4))(*(_DWORD *)(*(this + 0xA) + 0x58)) == v14 )
          HighPRocess_DoAction_____((PlayerCharacter *)*(this + 0xA), 0xFFFFFFFF, 0);
      }
    }
  }
  LOBYTE(v18) = 0;
  _LN21(this + 7, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  v15 = *(this + 4);
  v18 = 0xFFFFFFFF;
  if ( v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
  }
}
