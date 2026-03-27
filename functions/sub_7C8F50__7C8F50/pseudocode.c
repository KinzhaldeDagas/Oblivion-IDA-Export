char __thiscall sub_7C8F50(BSShader *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int *v2; // edi
  int v3; // esi
  int *v4; // edi
  int v5; // esi
  NiD3DPass **v6; // esi
  NiD3DPass *v7; // ecx
  int *v9; // edi
  int v10; // esi
  int *v11; // edi
  int v12; // esi

  sub_8025F0(this);
  v1 = InterlockedDecrement;
  v2 = dword_B45290;
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( !v1((volatile LONG *)(v3 + 4)) )
      {
        if ( v3 )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
      *v2 = 0;
    }
    ++v2;
  }
  while ( (int)v2 < (int)&dword_B45494 );
  v4 = dword_B45088;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      if ( !v1((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      *v4 = 0;
    }
    ++v4;
  }
  while ( (int)v4 < (int)&dword_B4528C );
  v6 = (NiD3DPass **)dword_B455A0;
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      if ( v7->RefCount-- == 1 )
        sub_7604D0(v7);
      *v6 = 0;
    }
    ++v6;
  }
  while ( (int)v6 < (int)&dword_B45C2C );
  v9 = &dword_B45018;
  do
  {
    v10 = *v9;
    if ( *v9 )
    {
      if ( !v1((volatile LONG *)(v10 + 4)) )
      {
        if ( v10 )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      }
      *v9 = 0;
    }
    ++v9;
  }
  while ( (int)v9 < (int)&dword_B45084 );
  v11 = dword_B45518;
  do
  {
    v12 = *v11;
    if ( *v11 )
    {
      if ( !v1((volatile LONG *)(v12 + 4)) )
      {
        if ( v12 )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      }
      *v11 = 0;
    }
    ++v11;
  }
  while ( (int)v11 < (int)&dword_B4555C );
  _memset(dword_B43B20, 0, 0x68C);
  _memset(dword_B441B0, 0, 0x68C);
  _memset(dword_B43490, 0, 0x68C);
  _memset(dword_B44840, 0, 0x68C);
  return 1;
}
