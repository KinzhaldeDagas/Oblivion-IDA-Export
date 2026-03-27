void __thiscall sub_7C5F60(_DWORD *this, int a2)
{
  _DWORD *v2; // ebp
  char v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // esi
  unsigned int i; // esi
  int v7; // ecx
  _BYTE *v8; // eax

  v2 = (_DWORD *)a2;
  if ( !*(_BYTE *)(a2 + 0xF4) )
  {
    v4 = *(_BYTE *)(*sub_405AD0((_DWORD *)a2, &a2) + 0x18) & 1;
    if ( a2 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))a2;
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
        (**v5)(v5, 1);
    }
    if ( v4 )
    {
      sub_7D21F0(v2);
    }
    else
    {
      sub_7D5ED0(v2);
      for ( i = 0; i < *((unsigned __int16 *)this + 0x5C); ++i )
      {
        if ( *((unsigned __int16 *)this + 0x5B) > i )
        {
          v7 = *(_DWORD *)(*(this + 0x2C) + 4 * i);
          if ( v7 )
          {
            v8 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
            if ( v8 )
              ShadowSceneLight_AddToScene____(v2, v8);
          }
        }
      }
      sub_7D6A40(v2);
    }
  }
}
