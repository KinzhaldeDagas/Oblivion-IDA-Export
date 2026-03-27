float *__thiscall sub_4C1DD0(_DWORD *this, int a2, int a3, float *a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  float *result; // eax
  double v12; // st7
  float v13; // [esp+8h] [ebp-4h]

  v4 = (_DWORD *)*(this + 9);
  if ( v4 )
  {
    v5 = v4[1];
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 4 * a2) )
      {
        v6 = *(_DWORD *)(v5 + 4 * a2) + 0xC * a3;
LABEL_11:
        *a4 = *(float *)v6;
        a4[1] = *(float *)(v6 + 4);
        result = *(float **)(v6 + 8);
        *((_DWORD *)a4 + 2) = result;
        return result;
      }
      if ( *v4 )
      {
        v7 = *(_DWORD *)(*v4 + 4 * a2) == 0;
        v8 = (int *)(*v4 + 4 * a2);
        if ( !v7 )
        {
          v9 = *v8;
          if ( *(_WORD *)(v9 + 0xB6) )
            v10 = **(_DWORD **)(v9 + 0xB0);
          else
            v10 = 0;
          v6 = *(_DWORD *)(*(_DWORD *)(v10 + 0xB4) + 0x1C) + 0xC * a3;
          goto LABEL_11;
        }
      }
    }
  }
  v12 = flt_A37448;
  *a4 = 0.0;
  v13 = v12;
  a4[1] = 0.0;
  a4[2] = v13;
  return a4;
}
