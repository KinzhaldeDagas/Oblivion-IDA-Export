int __thiscall sub_78E6E0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v4; // ebp
  int result; // eax
  int v6; // esi
  int v7; // edi
  float *v8; // edx
  double v9; // st7
  float *v10; // edx
  int v11; // ebp
  double v12; // st7

  v3 = *(_DWORD *)(a3 + 0x14);
  v4 = *(this + 5);
  if ( v4 < v3 )
    v3 = *(this + 5);
  result = a2;
  *(float *)(a2 + 0x10) = 0.0;
  *(float *)(a2 + 0xC) = 0.0;
  v6 = a2 + 8;
  *(float *)(a2 + 8) = 0.0;
  *(float *)(a2 + 4) = 0.0;
  *(float *)a2 = 0.0;
  if ( v3 > 5 )
    v3 = 5;
  v7 = 0;
  *(_DWORD *)(a2 + 0x14) = v3;
  if ( v4 >= 4 )
  {
    v4 = *(this + 5);
    v8 = (float *)(this + 1);
    do
    {
      v9 = *(float *)(a3 + 4 * v7) + v8[0xFFFFFFFF];
      v7 += 4;
      v8 += 4;
      v6 += 0x10;
      *(float *)(v6 - 0x18) = v9;
      *(float *)((char *)v8 + a2 - (_DWORD)this - 0x10) = *(float *)((char *)v8 + a3 - (_DWORD)this - 0x10)
                                                        + v8[0xFFFFFFFC];
      *(float *)(v6 - 0x10) = *(float *)(a3 - a2 + v6 - 0x10) + v8[0xFFFFFFFD];
      *(float *)(v6 - 0xC) = *(float *)(a3 + 4 * v7 - 4) + v8[0xFFFFFFFE];
    }
    while ( v7 < v4 - 3 );
    result = a2;
  }
  if ( v7 < v4 )
  {
    v10 = (float *)(this + v7);
    v11 = v4 - v7;
    do
    {
      v12 = *(float *)((char *)v10++ + a3 - (_DWORD)this);
      --v11;
      *(float *)((char *)v10 + result - (_DWORD)this - 4) = v12 + v10[0xFFFFFFFF];
    }
    while ( v11 );
  }
  return result;
}
