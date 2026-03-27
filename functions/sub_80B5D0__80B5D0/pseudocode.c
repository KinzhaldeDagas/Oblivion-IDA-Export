char __thiscall sub_80B5D0(BSShader *this)
{
  unsigned __int16 *v2; // edi
  int v3; // ebx
  int v4; // esi
  unsigned __int16 *v5; // edi
  int v6; // ebx
  int v7; // esi
  unsigned __int16 *v8; // edi
  int v9; // ebx
  int v10; // esi
  unsigned __int16 *v11; // edi
  int v12; // ebx
  int v13; // esi
  NiD3DPass **v14; // esi
  int v15; // edi
  NiD3DPass *v16; // ecx

  sub_8025F0(this);
  v2 = (unsigned __int16 *)((char *)this + 0xA4);
  v3 = 7;
  do
  {
    v4 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *(_DWORD *)v2 = 0;
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v5 = (unsigned __int16 *)((char *)this + 0xCC);
  v6 = 7;
  do
  {
    v7 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      {
        if ( v7 )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      *(_DWORD *)v5 = 0;
    }
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v8 = (unsigned __int16 *)((char *)this + 0xC0);
  v9 = 3;
  do
  {
    v10 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
      {
        if ( v10 )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      }
      *(_DWORD *)v8 = 0;
    }
    v8 += 2;
    --v9;
  }
  while ( v9 );
  v11 = (unsigned __int16 *)((char *)this + 0xE8);
  v12 = 3;
  do
  {
    v13 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
      {
        if ( v13 )
          (**(void (__thiscall ***)(int, int))v13)(v13, 1);
      }
      *(_DWORD *)v11 = 0;
    }
    v11 += 2;
    --v12;
  }
  while ( v12 );
  v14 = (NiD3DPass **)((char *)this + 0x9C);
  v15 = 2;
  do
  {
    v16 = *v14;
    if ( *v14 )
    {
      if ( v16->RefCount-- == 1 )
        sub_7604D0(v16);
      *v14 = 0;
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  return 1;
}
