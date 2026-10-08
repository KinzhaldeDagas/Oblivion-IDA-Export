int __thiscall sub_6DF2A0(char *this, int a2, int a3)
{
  int *v4; // ebx
  char *v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v12 = NiInterpolator_CloneTimeRange(this, a2, a3); /*0x6df2c2*/
  v4 = (int *)(v12 + 0x38); /*0x6df2c6*/
  v5 = this - v12; /*0x6df2c9*/
  v11 = 3; /*0x6df2cb*/
  do /*0x6df336*/
  {
    v6 = *(_DWORD *)&v5[(_DWORD)v4]; /*0x6df2d3*/
    if ( v6 ) /*0x6df2d8*/
    {
      v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 0x88))(v6, a2, a3); /*0x6df2f4*/
      v8 = *v4; /*0x6df2f6*/
      v9 = v7; /*0x6df2f8*/
      if ( *v4 != v7 ) /*0x6df2fc*/
      {
        if ( v8 ) /*0x6df300*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6df306*/
            (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6df31c*/
        }
        *v4 = v9; /*0x6df320*/
        if ( v9 ) /*0x6df322*/
          InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x6df328*/
      }
    }
    ++v4; /*0x6df32e*/
    --v11; /*0x6df331*/
  }
  while ( v11 ); /*0x6df336*/
  return v12; /*0x6df340*/
}
