char __cdecl sub_4980D0(char a1)
{
  int v1; // eax
  unsigned int v2; // esi
  int v3; // eax
  int v5; // edi
  int v6; // ebp
  _DWORD *v7; // esi
  bool v8; // al
  int v9; // eax
  int v10; // esi
  char v11; // bl
  unsigned int v12; // eax
  int v13; // eax
  char v14; // cl
  int v15; // eax
  char v16; // cl
  char v17; // [esp-18h] [ebp-24h]
  int v18; // [esp+8h] [ebp-4h]

  v1 = *(_DWORD *)&MEMORY[0xB33E90][0x1134]; /*0x4980d1*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1134] /*0x4980ec*/
    || (v1 = NiDX9AdapterDescArray_GetSingleton(), (*(_DWORD *)&MEMORY[0xB33E90][0x1134] = v1) != 0) )
  {
    v2 = dword_B06C54; /*0x4980f5*/
    if ( (v1 || (v1 = NiDX9AdapterDescArray_GetSingleton(), (*(_DWORD *)&MEMORY[0xB33E90][0x1134] = v1) != 0)) /*0x498115*/
      && v2 < *(_DWORD *)v1
      && v2 < *(unsigned __int16 *)(v1 + 0xE) )
    {
      v18 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 4 * v2); /*0x49811d*/
    }
    else
    {
      v18 = 0; /*0x498123*/
    }
    if ( v18 ) /*0x49812d*/
    {
      if ( !g_bFullScreen ) /*0x498133*/
      {
        v3 = *(_DWORD *)(v18 + 0x460); /*0x49813c*/
        if ( !*(_DWORD *)(v3 + 4) || !v3 || !*(_BYTE *)(v3 + 0x144) ) /*0x498161*/
        {
          sub_497B20("Windowed mode not supported on this Adapter."); /*0x498170*/
          return 0; /*0x49817e*/
        }
      }
      v5 = *(unsigned __int16 *)(v18 + 0x45A); /*0x498180*/
      if ( *(_WORD *)(v18 + 0x45A) ) /*0x498180*/
      {
        v6 = *(_DWORD *)(v18 + 0x454) + 4 * v5; /*0x498193*/
        while ( 1 ) /*0x498196*/
        {
          v7 = *(_DWORD **)(v6 - 4); /*0x498196*/
          v6 -= 4; /*0x498199*/
          --v5; /*0x49819c*/
          v8 = 0; /*0x49819f*/
          if ( v7 ) /*0x4981a3*/
            v8 = (!a1 || !g_bFullScreen || nWidth == *v7 && nHeight == v7[1]) /*0x4981e1*/
              && v7[2] >= 0x20u
              && v7[3] == sub_4979E0(dword_B06C34);
          if ( v8 ) /*0x4981eb*/
            break; /*0x4981eb*/
          if ( !v5 ) /*0x4981ef*/
            goto LABEL_29; /*0x4981ef*/
        }
        v9 = *(_DWORD *)(v18 + 0x460); /*0x49820a*/
        if ( *(_DWORD *)(v9 + 4) ) /*0x498214*/
        {
          if ( v9 ) /*0x49821f*/
          {
            v10 = v9 + 4; /*0x498225*/
            if ( v9 != 0xFFFFFFFC ) /*0x49822a*/
            {
              if ( byte_B06CA4 ) /*0x49822c*/
              {
                v11 = *(_BYTE *)(v9 + 0x22) & 1; /*0x498237*/
                if ( v11 ) /*0x49823a*/
                {
                  v12 = (unsigned __int16)*(_DWORD *)(v9 + 0xC8); /*0x498242*/
                  if ( v12 < dword_B06C48 || *(unsigned __int16 *)(v10 + 0xCC) < (unsigned int)dword_B06C44 ) /*0x49825c*/
                  {
                    v11 = 0; /*0x498274*/
                    sub_497B20("Pixel and Vertex Shader versions incorrect.  Requires a Geforce4 4400 or Radeon 8500 or better."); /*0x49827b*/
                  }
                  else
                  {
                    dword_B06C48 = v12; /*0x49825e*/
                    v11 = 1; /*0x49826a*/
                    dword_B06C44 = *(unsigned __int16 *)(v10 + 0xCC); /*0x49826c*/
                  }
                }
                else
                {
                  sub_497B20("Hardware T&L required but not supported by Adapter."); /*0x498282*/
                }
                MEMORY[0xB33E90][0x1116] = *(_BYTE *)(v10 + 0x1F) & (dword_B06C8C > 1); /*0x49829b*/
                return v11; /*0x4982a5*/
              }
            }
          }
        }
        v17 = byte_B06DB4; /*0x4982b0*/
        dword_B06C48 = 0; /*0x4982b3*/
        dword_B06C44 = 0; /*0x4982b9*/
        SetShaderPackage(0, 0, v17, 0, 0, 0); /*0x4982bf*/
        if ( !byte_B06CA4 ) /*0x4982c7*/
          return 1; /*0x4982db*/
      }
      else
      {
LABEL_29:
        sub_497B20("Desired render mode not found on Adapter."); /*0x4981f1*/
      }
      return 0; /*0x498205*/
    }
    MEMORY[0xB33E90][0x1138] = 0; /*0x4982dc*/
    v13 = 0; /*0x4982e3*/
    do /*0x498301*/
    {
      v14 = byte_A3DE48[v13]; /*0x4982f0*/
      MEMORY[0xB33E90][v13++ + 0x1138] = v14; /*0x4982f6*/
    }
    while ( v14 ); /*0x498301*/
    return 0; /*0x498305*/
  }
  else
  {
    MEMORY[0xB33E90][0x1138] = 0; /*0x49830a*/
    v15 = 0; /*0x498311*/
    do /*0x498331*/
    {
      v16 = byte_A3DE24[v15]; /*0x498320*/
      MEMORY[0xB33E90][v15++ + 0x1138] = v16; /*0x498326*/
    }
    while ( v16 ); /*0x498331*/
    return 0; /*0x498334*/
  }
}
