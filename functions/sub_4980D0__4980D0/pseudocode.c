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

  v1 = dword_B34FC4;
  if ( dword_B34FC4 || (v1 = sub_763DE0(), (dword_B34FC4 = v1) != 0) )
  {
    v2 = dword_B06C54;
    if ( (v1 || (v1 = sub_763DE0(), (dword_B34FC4 = v1) != 0))
      && v2 < *(_DWORD *)v1
      && v2 < *(unsigned __int16 *)(v1 + 0xE) )
    {
      v18 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 4 * v2);
    }
    else
    {
      v18 = 0;
    }
    if ( v18 )
    {
      if ( !g_bFullScreen )
      {
        v3 = *(_DWORD *)(v18 + 0x460);
        if ( !*(_DWORD *)(v3 + 4) || !v3 || !*(_BYTE *)(v3 + 0x144) )
        {
          sub_497B20("Windowed mode not supported on this Adapter.");
          return 0;
        }
      }
      v5 = *(unsigned __int16 *)(v18 + 0x45A);
      if ( *(_WORD *)(v18 + 0x45A) )
      {
        v6 = *(_DWORD *)(v18 + 0x454) + 4 * v5;
        while ( 1 )
        {
          v7 = *(_DWORD **)(v6 - 4);
          v6 -= 4;
          --v5;
          v8 = 0;
          if ( v7 )
            v8 = (!a1 || !g_bFullScreen || nWidth == *v7 && nHeight == v7[1])
              && v7[2] >= 0x20u
              && v7[3] == sub_4979E0(dword_B06C34);
          if ( v8 )
            break;
          if ( !v5 )
            goto LABEL_29;
        }
        v9 = *(_DWORD *)(v18 + 0x460);
        if ( *(_DWORD *)(v9 + 4) )
        {
          if ( v9 )
          {
            v10 = v9 + 4;
            if ( v9 != 0xFFFFFFFC )
            {
              if ( byte_B06CA4 )
              {
                v11 = *(_BYTE *)(v9 + 0x22) & 1;
                if ( v11 )
                {
                  v12 = (unsigned __int16)*(_DWORD *)(v9 + 0xC8);
                  if ( v12 < dword_B06C48 || *(unsigned __int16 *)(v10 + 0xCC) < (unsigned int)dword_B06C44 )
                  {
                    v11 = 0;
                    sub_497B20("Pixel and Vertex Shader versions incorrect.  Requires a Geforce4 4400 or Radeon 8500 or better.");
                  }
                  else
                  {
                    dword_B06C48 = v12;
                    v11 = 1;
                    dword_B06C44 = *(unsigned __int16 *)(v10 + 0xCC);
                  }
                }
                else
                {
                  sub_497B20("Hardware T&L required but not supported by Adapter.");
                }
                byte_B34FA6 = *(_BYTE *)(v10 + 0x1F) & (dword_B06C8C > 1);
                return v11;
              }
            }
          }
        }
        v17 = byte_B06DB4;
        dword_B06C48 = 0;
        dword_B06C44 = 0;
        SetShaderPackage(0, 0, v17, 0, 0, 0);
        if ( !byte_B06CA4 )
          return 1;
      }
      else
      {
LABEL_29:
        sub_497B20("Desired render mode not found on Adapter.");
      }
      return 0;
    }
    byte_B34FC8[0] = 0;
    v13 = 0;
    do
    {
      v14 = byte_A3DE48[v13];
      byte_B34FC8[v13++] = v14;
    }
    while ( v14 );
    return 0;
  }
  else
  {
    byte_B34FC8[0] = 0;
    v15 = 0;
    do
    {
      v16 = byte_A3DE24[v15];
      byte_B34FC8[v15++] = v16;
    }
    while ( v16 );
    return 0;
  }
}
