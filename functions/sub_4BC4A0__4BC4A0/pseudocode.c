float *__cdecl sub_4BC4A0(float *a1, float **a2)
{
  double v2; // st7
  float **v3; // edi
  float *i; // ebp
  float *v5; // esi
  char v6; // al
  int v7; // ecx
  float v9; // [esp+8h] [ebp-4h]

  v2 = flt_A32048;
  v9 = flt_A32048;
  v3 = a2;
  for ( i = 0; v3; v3 = (float **)v3[1] )
  {
    v5 = *v3;
    if ( *v3 )
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 0x170))(*v3) )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 0x170))(v5) + 4) == 0x29 )
        {
          v2 = sub_4BC2E0(v2, a1, v5);
          if ( v6 )
          {
            v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 0x170))(v5);
            v2 = *(float *)(v7 + 0x2C);
            if ( v9 > v2 )
            {
              v2 = *(float *)(v7 + 0x2C);
              i = v5;
              v9 = *(float *)(v7 + 0x2C);
            }
          }
        }
      }
    }
  }
  return i;
}
