int __usercall sub_585620@<eax>(_DWORD *this@<ecx>, unsigned int a2@<ebp>, double a3@<st1>, double a4@<st0>)
{
  int result; // eax
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  unsigned int v9; // ebp
  double v10; // st5
  float *v11; // eax
  int v12; // ebx
  double v13; // st5
  float *v14; // eax
  float v15; // [esp+0h] [ebp-30h]
  char *v16; // [esp+0h] [ebp-30h]
  float v17; // [esp+4h] [ebp-2Ch]
  float v18; // [esp+4h] [ebp-2Ch]
  float v19; // [esp+8h] [ebp-28h]
  float v20; // [esp+10h] [ebp-20h]
  float v21; // [esp+14h] [ebp-1Ch]
  unsigned int v22; // [esp+18h] [ebp-18h]
  int v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+28h] [ebp-8h]
  int v25; // [esp+2Ch] [ebp-4h]

  result = dword_B1398C;
  v5 = (_DWORD *)*(this + 2);
  v6 = *(this + 0xB);
  v7 = dword_B3A704 - dword_B13980 * dword_B1398C;
  v8 = v6 - dword_B1398C;
  v24 = v7;
  v25 = v6;
  if ( v8 < 0 )
  {
    v22 = a2;
    v9 = dword_B1398C - v6;
    v8 = 0;
    do
    {
      v20 = flt_A30634;
      v17 = (float)v24;
      v10 = (double)dword_B3A700;
      v15 = v10;
      v11 = sub_571F90(1);
      result = sub_5723E0((char *)v11, v9, v10, a3, a4, 0, v15, v17, 1, 0xFFFFFFFF, v20, 0);
      v7 += dword_B13980;
      --v9;
      v24 = v7;
    }
    while ( v9 );
    v6 = v25;
    a2 = v22;
  }
  if ( v8 > 0 )
  {
    result = v8;
    do
    {
      if ( v5 )
        v5 = (_DWORD *)*v5;
      else
        v5 = 0;
      --result;
    }
    while ( result );
  }
  if ( v8 < v6 )
  {
    v12 = v6 - v8;
    do
    {
      v23 = dword_B13994;
      v21 = flt_A30634;
      v19 = (float)v24;
      v13 = (double)dword_B3A700;
      v18 = v13;
      v16 = (char *)v5[2];
      v14 = sub_571F90(1);
      result = sub_5723E0((char *)v14, a2, v13, a3, a4, v16, v18, v19, 1, 0xFFFFFFFF, v21, v23);
      v7 += dword_B13980;
      --v12;
      v5 = (_DWORD *)*v5;
      v24 = v7;
    }
    while ( v12 );
  }
  return result;
}
