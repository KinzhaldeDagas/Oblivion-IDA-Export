void __thiscall BSTextureManager_DiscardShadowMap(BSTextureManager *this, int a2)
{
  int v3; // esi
  int *start; // edi
  void (__stdcall *v5)(volatile LONG *); // ebp
  void (__thiscall ***v6)(_DWORD, int); // edi
  int *v7; // [esp+14h] [ebp-14h] BYREF
  int v8; // [esp+18h] [ebp-10h] BYREF
  unsigned int v9; // [esp+24h] [ebp-4h]

  if ( a2 )
  {
    v3 = 0;
    v8 = 0;
    start = (int *)this->unk30.start;
    v9 = 0;
    v7 = start;
    if ( start )
    {
      v5 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
      while ( 1 )
      {
        if ( v3 != start[2] )
        {
          if ( v3 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
              (**(void (__thiscall ***)(int, int))v3)(v3, 1);
          }
          v8 = start[2];
          v3 = v8;
          if ( v8 )
            v5((volatile LONG *)(v8 + 4));
        }
        if ( v3 == a2 )
          break;
        start = (int *)*start;
        if ( !start )
        {
          v7 = 0;
          goto LABEL_18;
        }
      }
      v7 = start;
      sub_7C16B0(&this->shadowMaps.__vftable, &v8);
      sub_7C17D0((int **)&this->unk30, &a2, &v7);
      v6 = (void (__thiscall ***)(_DWORD, int))a2;
      if ( a2 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
        {
          if ( v6 )
            (**v6)(v6, 1);
        }
      }
    }
LABEL_18:
    v9 = 0xFFFFFFFF;
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
}
