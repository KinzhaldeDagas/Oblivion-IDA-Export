char __thiscall sub_7FB250(BSShader *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int *v2; // edi
  int v3; // esi
  int i; // edi
  int v5; // esi
  int v6; // esi
  NiD3DPass **v7; // esi
  NiD3DPass *v8; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // ebp
  int v13; // edx

  sub_8025F0(this);
  v1 = InterlockedDecrement;
  v2 = dword_B47288;
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
  while ( (int)v2 < (int)dword_B47308 );
  for ( i = 0; i < 0x27; ++i )
  {
    v5 = dword_B46ED8[i];
    if ( v5 )
    {
      if ( !v1((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      dword_B46ED8[i] = 0;
    }
    v6 = dword_B46C20[i];
    if ( v6 )
    {
      if ( !v1((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      dword_B46C20[i] = 0;
    }
  }
  v7 = (NiD3DPass **)dword_B473D0;
  do
  {
    v8 = *v7;
    if ( *v7 )
    {
      if ( v8->RefCount-- == 1 )
        sub_7604D0(v8);
      *v7 = 0;
    }
    ++v7;
  }
  while ( (int)v7 < (int)&dword_B474A8 );
  v10 = dword_B25AD0;
  v11 = dword_B25AD8;
  v12 = dword_B25ADC;
  v13 = dword_B25AD4;
  dword_B46CC8 = dword_B25AD0;
  dword_B46CD0 = v11;
  dword_B46CD4 = v12;
  dword_B46CCC = v13;
  qmemcpy(&unk_B46CD8, &dword_B46CC8, 0x200u);
  dword_B46F78 = v10;
  dword_B46F80 = v11;
  dword_B46F84 = v12;
  dword_B46F7C = v13;
  qmemcpy(&dword_B46F88, &dword_B46F78, 0x300u);
  return 1;
}
