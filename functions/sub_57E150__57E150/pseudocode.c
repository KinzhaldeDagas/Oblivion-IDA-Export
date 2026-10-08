void __usercall sub_57E150(int a1@<ecx>, double a2@<st0>, double a3@<st2>, double a4@<st1>)
{
  char v6; // bl
  double v7; // st7
  Tile *v8; // esi
  double v9; // st7
  Tile *v10; // esi
  double v11; // st7
  Tile *v12; // esi
  double v13; // st7
  double v14; // st7
  Tile *v15; // eax
  Tile *v16; // esi
  double v17; // st7
  double v18; // st7

  if ( reference ) /*0x57e150*/
  {
    if ( *(_BYTE *)(a1 + 0x94) ) /*0x57e160*/
    {
      if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184) ) /*0x57e17c*/
      {
        unk_B3B0A2 = 1; /*0x57e18b*/
        v6 = *(_BYTE *)(a1 + 8); /*0x57e192*/
        v7 = sub_5AD980(a3, a2, 0); /*0x57e197*/
        v8 = (Tile *)sub_57A440(a3, a4, v7); /*0x57e1a3*/
        v9 = sub_5AD980(a3, v7, 0); /*0x57e1a5*/
        if ( v8 ) /*0x57e1af*/
        {
          v9 = 1.0; /*0x57e1b1*/
          Tile_SetFloat(v8, 0xFA1u, 1.0); /*0x57e1be*/
        }
        v10 = (Tile *)sub_57A2D0(v9, a4); /*0x57e1ca*/
        v11 = sub_5AD980(a3, v9, 0); /*0x57e1cc*/
        if ( v10 ) /*0x57e1d6*/
        {
          v11 = 1.0; /*0x57e1d8*/
          Tile_SetFloat(v10, 0xFA1u, 1.0); /*0x57e1e5*/
        }
        v12 = (Tile *)sub_57A180(a3, a4, v11); /*0x57e1f1*/
        v13 = sub_5AD980(a3, v11, 0); /*0x57e1f3*/
        if ( v12 ) /*0x57e1fd*/
        {
          v13 = 1.0; /*0x57e1ff*/
          Tile_SetFloat(v12, 0xFA1u, 1.0); /*0x57e20c*/
        }
        v14 = sub_579F80(a3, a4, v13); /*0x57e211*/
        v16 = v15; /*0x57e218*/
        v17 = sub_5AD980(a3, v14, 0); /*0x57e21a*/
        if ( v16 ) /*0x57e224*/
        {
          v17 = 1.0; /*0x57e226*/
          Tile_SetFloat(v16, 0xFA1u, 1.0); /*0x57e233*/
        }
        sub_5C1290(a3, a4, v17); /*0x57e238*/
        v18 = sub_5AD980(a3, v17, 0); /*0x57e23f*/
        unk_B3B0A2 = 0; /*0x57e244*/
        *(_BYTE *)(a1 + 8) = v6; /*0x57e24d*/
        *(_BYTE *)(a1 + 0x94) = 0; /*0x57e250*/
        sub_5AD980(a3, v18, 0); /*0x57e257*/
      }
    }
  }
}
