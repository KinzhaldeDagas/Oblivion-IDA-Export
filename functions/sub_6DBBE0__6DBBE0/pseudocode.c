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

  v6 = *((_DWORD *)this + 6); /*0x6dbbec*/
  if ( v6 ) /*0x6dbbf3*/
  {
    v7 = *(float *)(v6 + 8); /*0x6dbbf5*/
    v19 = v7; /*0x6dbbf8*/
  }
  else
  {
    v19 = 0.0; /*0x6dbbfe*/
    v7 = 0.0; /*0x6dbc06*/
  }
  if ( a2 == 0.0 ) /*0x6dbc1a*/
  {
    *a3 = 0; /*0x6dbc27*/
    *a4 = 1; /*0x6dbc2d*/
    *a5 = 0.0; /*0x6dbc33*/
    return (float *)a3; /*0x6dbc1c*/
  }
  else
  {
    v9 = a2; /*0x6dbc42*/
    v10 = 1.0; /*0x6dbc47*/
    if ( a2 < 0.0 ) /*0x6dbc49*/
    {
      unknown_libname_14(1.0, v9); /*0x6dbc4b*/
      v27 = a2 + 1.0; /*0x6dbc5e*/
      v10 = 1.0; /*0x6dbc64*/
      v9 = v27; /*0x6dbc64*/
    }
    if ( 1.0 == v9 ) /*0x6dbc71*/
    {
      *a3 = LODWORD(v7) - 2; /*0x6dbc80*/
      *a4 = LODWORD(v7) - 1; /*0x6dbc88*/
      *a5 = 1.0; /*0x6dbc8a*/
      return a5; /*0x6dbc82*/
    }
    else
    {
      if ( v9 > 1.0 ) /*0x6dbc9c*/
      {
        unknown_libname_14(v10, v9); /*0x6dbc9e*/
        v22 = v9; /*0x6dbca3*/
        v9 = v22; /*0x6dbcae*/
      }
      v11 = 0; /*0x6dbcbc*/
      v12 = 1; /*0x6dbcc5*/
      if ( LODWORD(v19) != 1 ) /*0x6dbcca*/
      {
        v23 = v9 * *(this + 9); /*0x6dbcc1*/
        v13 = v23; /*0x6dbccf*/
        v14 = (float *)(*((_DWORD *)this + 8) + 4); /*0x6dbcd3*/
        while ( *v14 < v13 ) /*0x6dbcdf*/
        {
          ++v11; /*0x6dbce1*/
          ++v12; /*0x6dbce4*/
          ++v14; /*0x6dbce7*/
          if ( v11 >= LODWORD(v19) - 1 ) /*0x6dbcec*/
            goto LABEL_18; /*0x6dbcec*/
        }
        v15 = *((_DWORD *)this + 8); /*0x6dbcf2*/
        v21 = v13 - *(float *)(v15 + 4 * v11); /*0x6dbcf8*/
        v19 = v21 / (*(float *)(v15 + 4 * v12) - *(float *)(v15 + 4 * v11)); /*0x6dbd08*/
      }
LABEL_18:
      v24 = 0; /*0x6dbd0c*/
      do /*0x6dbd7f*/
      {
        v25 = sub_6DB6F0(this, v11, v12, v19) - v21; /*0x6dbd29*/
        v16 = v25; /*0x6dbd2d*/
        v26 = fabs(v25); /*0x6dbd35*/
        if ( v26 <= dbl_A68FE0 ) /*0x6dbd48*/
          break; /*0x6dbd48*/
        v20 = v19; /*0x6dbd4f*/
        v18 = v20; /*0x6dbd5b*/
        v17 = ++v24 < 0x20; /*0x6dbd70*/
        v19 = v20 - v16 / sub_6DB660(this, v11, v12, v18); /*0x6dbd7b*/
      }
      while ( v17 ); /*0x6dbd7f*/
      *a3 = v11; /*0x6dbd92*/
      *a4 = v12; /*0x6dbd94*/
      *a5 = v19; /*0x6dbd96*/
      return a5; /*0x6dbd8f*/
    }
  }
}
