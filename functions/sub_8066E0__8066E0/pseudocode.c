char __thiscall sub_8066E0(BSShader *this)
{
  unsigned __int16 *v2; // edi
  int v3; // ebx
  int v4; // esi
  unsigned __int16 *v5; // edi
  int v6; // ebx
  int v7; // esi
  NiD3DPass **v8; // esi
  NiD3DPass *v9; // ecx

  sub_8025F0(this);
  v2 = (unsigned __int16 *)((char *)this + 0x9C);
  v3 = 0x24;
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
  v5 = (unsigned __int16 *)((char *)this + 0x12C);
  v6 = 0x1E;
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
  v8 = (NiD3DPass **)dword_B47620;
  do
  {
    v9 = *v8;
    if ( *v8 )
    {
      if ( v9->RefCount-- == 1 )
        sub_7604D0(v9);
      *v8 = 0;
    }
    ++v8;
  }
  while ( (int)v8 < (int)&unk_B47710 );
  return 1;
}
