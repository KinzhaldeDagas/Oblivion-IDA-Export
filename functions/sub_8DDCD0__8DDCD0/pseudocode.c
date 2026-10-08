_BYTE *__thiscall sub_8DDCD0(int this, _BYTE *a2, float a3)
{
  float v3; // eax
  double v5; // st7
  int v6; // ecx
  double v7; // st7
  int v8; // eax
  int v9; // edi
  char v10; // bl
  int v11; // ecx
  unsigned __int8 v12; // al
  int v14; // eax
  int v15; // edi
  char v16; // bl
  int v17; // edx
  unsigned __int8 v18; // al

  v3 = a3; /*0x8ddcd0*/
  v5 = *(float *)(LODWORD(a3) + 8) + *(float *)(this + 0x2C); /*0x8ddcdb*/
  v6 = *(_DWORD *)(this + 0x1C); /*0x8ddcde*/
  *(float *)(this + 0x2C) = v5; /*0x8ddce2*/
  a3 = *(float *)(this + 0x30) + *(float *)(LODWORD(v3) + 8); /*0x8ddceb*/
  v7 = *(float *)(this + 0x2C); /*0x8ddcf3*/
  *(float *)(this + 0x30) = a3; /*0x8ddcf6*/
  if ( v7 <= *(float *)(v6 + 0xA8) ) /*0x8ddd25*/
  {
    if ( a3 > (double)*(float *)(v6 + 0xAC) ) /*0x8ddda1*/
    {
      v14 = *(_DWORD *)(this + 0x38); /*0x8ddda7*/
      v15 = 0; /*0x8dddb0*/
      v16 = 1; /*0x8dddb4*/
      *(float *)(this + 0x30) = a3 - *(float *)(v6 + 0xAC); /*0x8dddb6*/
      if ( v14 <= 0 ) /*0x8dddb9*/
        goto LABEL_18; /*0x8dddb9*/
      do /*0x8ddded*/
      {
        v17 = *(_DWORD *)(*(_DWORD *)(this + 0x34) + 4 * v15); /*0x8dddc3*/
        if ( !*(_DWORD *)(v17 + 0x64) /*0x8ddde0*/
          || !*(_BYTE *)(*(int (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v17 + 0x64) + 0xC))(
                          *(_DWORD *)(v17 + 0x64),
                          &a3,
                          v17) )
        {
          v16 = 0; /*0x8ddde5*/
        }
        ++v15; /*0x8dddea*/
      }
      while ( v15 < *(_DWORD *)(this + 0x38) ); /*0x8ddded*/
      if ( v16 ) /*0x8dddf1*/
      {
LABEL_18:
        v18 = *(_BYTE *)(this + 0x25) + 1; /*0x8dddf8*/
        *(_BYTE *)(this + 0x25) = v18; /*0x8dddfc*/
        if ( v18 >= 5u ) /*0x8dddff*/
        {
          *(_BYTE *)(this + 0x25) = 0; /*0x8dde06*/
          *a2 = 1; /*0x8dde0b*/
          return a2; /*0x8dde0f*/
        }
      }
      else
      {
        *(_BYTE *)(this + 0x25) = 0; /*0x8dde12*/
      }
    }
  }
  else
  {
    v8 = *(_DWORD *)(this + 0x38); /*0x8ddd2a*/
    v9 = 0; /*0x8ddd33*/
    v10 = 1; /*0x8ddd37*/
    *(float *)(this + 0x2C) = *(float *)(this + 0x2C) - *(float *)(v6 + 0xA8); /*0x8ddd39*/
    if ( v8 > 0 ) /*0x8ddd3c*/
    {
      do /*0x8ddd65*/
      {
        v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x34) + 4 * v9) + 0x64); /*0x8ddd46*/
        if ( !v11 /*0x8ddd58*/
          || !*(_BYTE *)(*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v11 + 8))(
                          v11,
                          &a3,
                          *(_DWORD *)(*(_DWORD *)(this + 0x34) + 4 * v9)) )
        {
          v10 = 0; /*0x8ddd5d*/
        }
        ++v9; /*0x8ddd62*/
      }
      while ( v9 < *(_DWORD *)(this + 0x38) ); /*0x8ddd65*/
      if ( !v10 ) /*0x8ddd69*/
      {
        *(_BYTE *)(this + 0x24) = 0; /*0x8ddd93*/
        *a2 = 0; /*0x8ddd98*/
        return a2; /*0x8ddd9c*/
      }
    }
    v12 = *(_BYTE *)(this + 0x24) + 1; /*0x8ddd70*/
    *(_BYTE *)(this + 0x24) = v12; /*0x8ddd74*/
    if ( v12 >= 5u ) /*0x8ddd77*/
    {
      *(_BYTE *)(this + 0x24) = 0; /*0x8ddd82*/
      *a2 = 1; /*0x8ddd87*/
      return a2; /*0x8ddd8b*/
    }
  }
  *a2 = 0; /*0x8dde1c*/
  return a2; /*0x8ddd81*/
}
