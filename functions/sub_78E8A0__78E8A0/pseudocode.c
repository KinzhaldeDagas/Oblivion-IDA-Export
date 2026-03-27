int __thiscall sub_78E8A0(_DWORD *this, int a2, float a3)
{
  int result; // eax
  _DWORD *v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // ecx
  float *v10; // edi
  char *v11; // ebp
  unsigned int v12; // esi
  double v13; // st5
  char *v14; // ebp
  int v15; // edx
  int v16; // ebx
  double v17; // st6
  _DWORD *v18; // [esp+8h] [ebp-4h]

  result = a2;
  *(float *)(a2 + 0x10) = 0.0;
  *(float *)(a2 + 0xC) = 0.0;
  v4 = this;
  *(float *)(a2 + 8) = 0.0;
  v5 = *(this + 5);
  *(float *)(a2 + 4) = 0.0;
  v6 = v5;
  *(float *)a2 = 0.0;
  v7 = a2 + 4;
  v18 = v4;
  if ( v5 > 5 )
    v6 = 5;
  v8 = a3;
  *(_DWORD *)(a2 + 0x14) = v6;
  v9 = 0;
  if ( v5 >= 4 )
  {
    v10 = (float *)(v4 + 3);
    v11 = (char *)v4 - a2;
    v12 = ((unsigned int)(v5 - 4) >> 2) + 1;
    v9 = 4 * v12;
    do
    {
      v7 += 0x10;
      v13 = v10[0xFFFFFFFD] * v8;
      v10 += 4;
      --v12;
      *(float *)(v7 - 0x14) = v13;
      *(float *)(v7 - 0x10) = *(float *)&v11[v7 - 0x10] * v8;
      *(float *)(v7 - 0xC) = v10[0xFFFFFFFB] * v8;
      *(float *)(v7 - 8) = v10[0xFFFFFFFC] * v8;
    }
    while ( v12 );
    v4 = v18;
  }
  if ( v9 < v5 )
  {
    v14 = (char *)v4 - a2;
    v15 = a2 + 4 * v9;
    v16 = v5 - v9;
    do
    {
      v17 = *(float *)&v14[v15];
      v15 += 4;
      --v16;
      *(float *)(v15 - 4) = v17 * v8;
    }
    while ( v16 );
  }
  return result;
}
