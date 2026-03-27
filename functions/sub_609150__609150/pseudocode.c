char __thiscall sub_609150(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  NiNode *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int128 v17; // [esp+10h] [ebp-20h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*this + 0x1C8))(this);
  v3 = *(this + 0x17);
  if ( !*(_DWORD *)(v3 + 0x28) )
  {
    PrintError("An arrow thinks it is colliding with an Reference, but there is no Reference in the collision data!");
    return 0;
  }
  v4 = sub_480340(*(_DWORD *)(v3 + 0x2C));
  if ( !v4 )
    return 0;
  v5 = *(_DWORD **)(v4 + 0x10);
  v6 = (NiNode *)(*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
  sub_88D070(v6, 6, 1, 0);
  if ( v5 && (v7 = v5[2]) != 0 && (v8 = v7 + 0x14) != 0 )
    v9 = *(_DWORD *)(v8 + 0x1C);
  else
    v9 = 0;
  v10 = v9 & 0xFFFF0000 | 6;
  if ( v5 && (v11 = v5[2]) != 0 && (v12 = v11 + 0x14) != 0 )
    v13 = *(_DWORD *)(v12 + 0x1C);
  else
    LOBYTE(v13) = 0;
  if ( (v13 & 0x3F) != 4 )
    v10 = v10 & 0xFFFFFFC0 | 0xF;
  if ( a2 )
  {
    v14 = a2[2];
    if ( v14 )
    {
      v15 = v14 + 0x14;
      if ( v15 )
        *(_DWORD *)(v15 + 0x1C) = v10;
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*a2 + 0x80))(a2);
  BSSimpleList_PushFront(ActorProcessManager_ptr.unk4C, (int)this);
  if ( sub_535AC0(v5) > *(float *)&SrcStr )
  {
    (*(void (__thiscall **)(_DWORD *, __int128 *))(*a2 + 0xA8))(a2, &v17);
    sub_535BE0(&v17, *(_DWORD *)(*(this + 0x17) + 0x2C));
  }
  return 1;
}
