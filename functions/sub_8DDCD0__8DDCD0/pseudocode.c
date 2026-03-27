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

  v3 = a3;
  v5 = *(float *)(LODWORD(a3) + 8) + *(float *)(this + 0x2C);
  v6 = *(_DWORD *)(this + 0x1C);
  *(float *)(this + 0x2C) = v5;
  a3 = *(float *)(this + 0x30) + *(float *)(LODWORD(v3) + 8);
  v7 = *(float *)(this + 0x2C);
  *(float *)(this + 0x30) = a3;
  if ( v7 <= *(float *)(v6 + 0xA8) )
  {
    if ( a3 > (double)*(float *)(v6 + 0xAC) )
    {
      v14 = *(_DWORD *)(this + 0x38);
      v15 = 0;
      v16 = 1;
      *(float *)(this + 0x30) = a3 - *(float *)(v6 + 0xAC);
      if ( v14 <= 0 )
        goto LABEL_18;
      do
      {
        v17 = *(_DWORD *)(*(_DWORD *)(this + 0x34) + 4 * v15);
        if ( !*(_DWORD *)(v17 + 0x64)
          || !*(_BYTE *)(*(int (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v17 + 0x64) + 0xC))(
                          *(_DWORD *)(v17 + 0x64),
                          &a3,
                          v17) )
        {
          v16 = 0;
        }
        ++v15;
      }
      while ( v15 < *(_DWORD *)(this + 0x38) );
      if ( v16 )
      {
LABEL_18:
        v18 = *(_BYTE *)(this + 0x25) + 1;
        *(_BYTE *)(this + 0x25) = v18;
        if ( v18 >= 5u )
        {
          *(_BYTE *)(this + 0x25) = 0;
          *a2 = 1;
          return a2;
        }
      }
      else
      {
        *(_BYTE *)(this + 0x25) = 0;
      }
    }
  }
  else
  {
    v8 = *(_DWORD *)(this + 0x38);
    v9 = 0;
    v10 = 1;
    *(float *)(this + 0x2C) = *(float *)(this + 0x2C) - *(float *)(v6 + 0xA8);
    if ( v8 > 0 )
    {
      do
      {
        v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x34) + 4 * v9) + 0x64);
        if ( !v11
          || !*(_BYTE *)(*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v11 + 8))(
                          v11,
                          &a3,
                          *(_DWORD *)(*(_DWORD *)(this + 0x34) + 4 * v9)) )
        {
          v10 = 0;
        }
        ++v9;
      }
      while ( v9 < *(_DWORD *)(this + 0x38) );
      if ( !v10 )
      {
        *(_BYTE *)(this + 0x24) = 0;
        *a2 = 0;
        return a2;
      }
    }
    v12 = *(_BYTE *)(this + 0x24) + 1;
    *(_BYTE *)(this + 0x24) = v12;
    if ( v12 >= 5u )
    {
      *(_BYTE *)(this + 0x24) = 0;
      *a2 = 1;
      return a2;
    }
  }
  *a2 = 0;
  return a2;
}
