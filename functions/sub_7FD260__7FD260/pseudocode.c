char __cdecl sub_7FD260(unsigned __int16 a1)
{
  int *shader; // esi
  unsigned __int16 v2; // bx
  int v3; // edi
  void (__stdcall *v4)(volatile LONG *); // ebx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // edi
  int i; // eax
  int v18; // esi
  int v20; // esi
  int v21; // esi

  shader = (int *)GetShaderDefinition(0x1Au)->shader;
  if ( shader && (v2 = a1, (unsigned __int16)(a1 - 0x15E) <= 1u) )
  {
    sub_55E2A0(shader + 0xB, shader + 0x1F);
    sub_55E2A0(shader + 0xC, shader + 0x20);
  }
  else
  {
    v3 = shader[0xB];
    v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    v5 = InterlockedDecrement;
    if ( v3 != shader[0x21] )
    {
      if ( v3 )
      {
        if ( !v5((volatile LONG *)(v3 + 4)) )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
      v6 = shader[0x21];
      shader[0xB] = v6;
      if ( v6 )
        v4((volatile LONG *)(v6 + 4));
    }
    v7 = shader[0xC];
    if ( v7 != shader[0x22] )
    {
      if ( v7 )
      {
        if ( !v5((volatile LONG *)(v7 + 4)) )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      v8 = shader[0x22];
      shader[0xC] = v8;
      if ( v8 )
        v4((volatile LONG *)(v8 + 4));
    }
    v2 = a1;
  }
  if ( v2 == 4 )
  {
    v9 = 1;
  }
  else if ( v2 == 5 )
  {
    v9 = 2;
  }
  else
  {
    v9 = v2 - 0x12A;
  }
  v10 = 1;
  v11 = 0;
  v12 = 2;
  do
  {
    if ( v11 >= 5 )
    {
      *((_BYTE *)&dword_B46964 + 0xFFFFFFFF + v10) = ((1 << v10) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0;
    }
    else
    {
      v13 = *(_DWORD *)(4 * v11 + 0xB46B98);
      if ( v13 )
      {
        v2 = a1;
        *(_BYTE *)(v13 + 8) = ((1 << v10) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0;
      }
    }
    if ( v10 >= 5 )
    {
      *((_BYTE *)&dword_B46964 + v10) = ((1 << v12) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0;
    }
    else
    {
      v14 = *(_DWORD *)(4 * v11 + 0xB46B9C);
      if ( v14 )
      {
        v2 = a1;
        *(_BYTE *)(v14 + 8) = ((1 << v12) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0;
      }
    }
    if ( v12 >= 5 )
    {
      *((_BYTE *)&dword_B46964 + v12) = ((1 << (v12 + 1)) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0;
    }
    else
    {
      v15 = *(_DWORD *)(4 * v11 + 0xB46BA0);
      if ( v15 )
      {
        v2 = a1;
        *(_BYTE *)(v15 + 8) = ((1 << (v12 + 1)) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0;
      }
    }
    v11 += 3;
    v10 += 3;
    v12 += 3;
  }
  while ( v11 < 0x21 );
  v16 = *(_DWORD *)(4 * v9 + 0xB46A60);
  for ( i = 0; i < 0x31; ++i )
    byte_B46930[i] = ((1 << (i + 1)) & v16) != 0;
  word_B46935 = 0x101;
  byte_B46937 = 1;
  LOWORD(dword_B46974) = 0x101;
  BYTE2(dword_B46974) = 1;
  if ( v2 == 4 || v2 == 5 )
  {
    v21 = *(_DWORD *)(4 * v9 + 0xB473D0);
  }
  else
  {
    if ( (unsigned __int16)(v2 - 0x156) <= 7u )
    {
      v18 = *(_DWORD *)(4 * v2 + 0xB46F28);
      if ( !*(_DWORD *)(v18 + 0x30) )
        *(_DWORD *)(v18 + 0x30) = sub_772DF0();
      return sub_772CD0(*(_DWORD **)(v18 + 0x30), 0xA8, 0xF, 0);
    }
    if ( (unsigned __int16)(v2 - 0x12B) <= 0x34u )
    {
      v20 = *(_DWORD *)(4 * v2 + 0xB46F28);
      if ( !*(_DWORD *)(v20 + 0x30) )
        *(_DWORD *)(v20 + 0x30) = sub_772DF0();
      return sub_772CD0(*(_DWORD **)(v20 + 0x30), 0xA8, 7, 0);
    }
    v21 = *(_DWORD *)(4 * v2 + 0xB46F28);
  }
  if ( !*(_DWORD *)(v21 + 0x30) )
    *(_DWORD *)(v21 + 0x30) = sub_772DF0();
  return sub_772CD0(*(_DWORD **)(v21 + 0x30), 0xA8, 0, 0);
}
