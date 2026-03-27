void __usercall sub_57E150(int a1@<ecx>, char a2@<bpl>, double a3@<st0>, double a4@<st2>)
{
  char v6; // bl
  double v7; // st6
  unsigned int *v8; // esi
  double v9; // st7
  Tile *v10; // esi
  double v11; // st7
  unsigned int *v12; // esi
  double v13; // st7
  Tile *v14; // eax
  Tile *v15; // esi
  double v16; // st7

  if ( TESDataHandler_g_PlayerRef )
  {
    if ( *(_BYTE *)(a1 + 0x94) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
      {
        byte_B3B0A2 = 1;
        v6 = *(_BYTE *)(a1 + 8);
        v7 = sub_5AD980(a4, a3, 0);
        v8 = sub_57A440(a2, a1, a4, v7, a3);
        v9 = sub_5AD980(a4, a3, 0);
        if ( v8 )
        {
          v9 = 1.0;
          Tile_SetFloat((Tile *)v8, (_DWORD *)0xFA1, 1.0);
        }
        v10 = (Tile *)sub_57A2D0(v9, v7);
        v11 = sub_5AD980(a4, v9, 0);
        if ( v10 )
        {
          v11 = 1.0;
          Tile_SetFloat(v10, (_DWORD *)0xFA1, 1.0);
        }
        v12 = sub_57A180(a2, v6, a4, v7, v11);
        sub_5AD980(a4, v11, 0);
        if ( v12 )
          Tile_SetFloat((Tile *)v12, (_DWORD *)0xFA1, 1.0);
        v13 = sub_579F80(a2, a4, v7);
        v15 = v14;
        v16 = sub_5AD980(a4, v13, 0);
        if ( v15 )
        {
          v16 = 1.0;
          Tile_SetFloat(v15, (_DWORD *)0xFA1, 1.0);
        }
        sub_5C1290(v6, a4, v7, a2, v16);
        sub_5AD980(a4, v16, 0);
        byte_B3B0A2 = 0;
        *(_BYTE *)(a1 + 8) = v6;
        *(_BYTE *)(a1 + 0x94) = 0;
        sub_5AD980(a4, v16, 0);
      }
    }
  }
}
