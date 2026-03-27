float *__thiscall sub_6DBBE0(float *this, float a2, unsigned int *a3, int *a4, float *a5)
{
  int v6; // eax
  float v7; // esi
  double v9; // st7
  double v10; // st6
  unsigned int v11; // esi
  int v12; // edi
  double v13; // st7
  float *v14; // edx
  int v15; // eax
  double v16; // st7
  bool v17; // cc
  float v18; // [esp+0h] [ebp-2Ch]
  float v19; // [esp+14h] [ebp-18h]
  double v20; // [esp+14h] [ebp-18h]
  float v21; // [esp+1Ch] [ebp-10h]
  float v22; // [esp+20h] [ebp-Ch]
  float v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+20h] [ebp-Ch]
  float v25; // [esp+24h] [ebp-8h]
  float v26; // [esp+24h] [ebp-8h]
  float v27; // [esp+34h] [ebp+8h]

  v6 = *((_DWORD *)this + 6);
  if ( v6 )
  {
    v7 = *(float *)(v6 + 8);
    v19 = v7;
  }
  else
  {
    v19 = 0.0;
    v7 = 0.0;
  }
  if ( a2 == 0.0 )
  {
    *a3 = 0;
    *a4 = 1;
    *a5 = 0.0;
    return (float *)a3;
  }
  else
  {
    v9 = a2;
    v10 = 1.0;
    if ( a2 < 0.0 )
    {
      unknown_libname_14(1.0, v9);
      v27 = a2 + 1.0;
      v10 = 1.0;
      v9 = v27;
    }
    if ( 1.0 == v9 )
    {
      *a3 = LODWORD(v7) - 2;
      *a4 = LODWORD(v7) - 1;
      *a5 = 1.0;
      return a5;
    }
    else
    {
      if ( v9 > 1.0 )
      {
        unknown_libname_14(v10, v9);
        v22 = v9;
        v9 = v22;
      }
      v11 = 0;
      v12 = 1;
      if ( LODWORD(v19) != 1 )
      {
        v23 = v9 * *(this + 9);
        v13 = v23;
        v14 = (float *)(*((_DWORD *)this + 8) + 4);
        while ( *v14 < v13 )
        {
          ++v11;
          ++v12;
          ++v14;
          if ( v11 >= LODWORD(v19) - 1 )
            goto LABEL_18;
        }
        v15 = *((_DWORD *)this + 8);
        v21 = v13 - *(float *)(v15 + 4 * v11);
        v19 = v21 / (*(float *)(v15 + 4 * v12) - *(float *)(v15 + 4 * v11));
      }
LABEL_18:
      v24 = 0;
      do
      {
        v25 = sub_6DB6F0(this, v11, v12, v19) - v21;
        v16 = v25;
        v26 = fabs(v25);
        if ( v26 <= dbl_A68FE0 )
          break;
        v20 = v19;
        v18 = v20;
        v17 = ++v24 < 0x20;
        v19 = v20 - v16 / sub_6DB660(this, v11, v12, v18);
      }
      while ( v17 );
      *a3 = v11;
      *a4 = v12;
      *a5 = v19;
      return a5;
    }
  }
}
