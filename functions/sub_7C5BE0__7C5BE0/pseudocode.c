void __thiscall sub_7C5BE0(_DWORD *this)
{
  _DWORD *v1; // ebp
  _DWORD *v2; // edi
  bool v3; // bl
  void (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // esi
  _DWORD *v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v1 = (_DWORD *)*(this + 0x3E);
  v8 = 0;
  while ( v1 )
  {
    v2 = (_DWORD *)v1[2];
    v1 = (_DWORD *)*v1;
    v3 = 0;
    if ( v2 )
    {
      v8 |= 1u;
      if ( *sub_405AD0(v2, &v9) )
        v3 = 1;
    }
    if ( (v8 & 1) != 0 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v9;
      v8 &= ~1u;
      if ( v9 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        {
          if ( v4 )
            (**v4)(v4, 1);
        }
      }
    }
    if ( v3 )
    {
      BSTextureManager_DiscardShadowMap(g_textureManager, v2[0x45]);
      v5 = v2[0x45];
      if ( v5 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        v2[0x45] = 0;
      }
      v6 = sub_405AD0(v2, &v10);
      *(_WORD *)(*v6 + 0x18) |= 1u;
      if ( v10 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v10;
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
          (**v7)(v7, 1);
      }
      sub_7D5320(v2);
    }
  }
}
