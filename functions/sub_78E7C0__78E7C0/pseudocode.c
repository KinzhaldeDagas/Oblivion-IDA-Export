int __thiscall sub_78E7C0(float *this, int a2, int a3)
{
  int v3; // edx
  int v4; // ebp
  int result; // eax
  int v6; // esi
  int v7; // edi
  int v8; // edx
  double v9; // st7
  char *v10; // ecx
  int v11; // edx
  int v12; // ebp
  double v13; // st7

  v3 = *(_DWORD *)(a3 + 0x14);
  v4 = *((_DWORD *)this + 5);
  if ( v4 < v3 )
    v3 = *((_DWORD *)this + 5);
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
    v4 = *((_DWORD *)this + 5);
    v8 = a3 + 4;
    do
    {
      v9 = *(this + v7) - *(float *)(v8 - 4);
      v7 += 4;
      v8 += 0x10;
      v6 += 0x10;
      *(float *)(v6 - 0x18) = v9;
      *(float *)(a2 - a3 + v8 - 0x10) = *(float *)((char *)this + v8 - a3 - 0x10) - *(float *)(v8 - 0x10);
      *(float *)(v6 - 0x10) = *(float *)((char *)this + v6 - a2 - 0x10) - *(float *)(v8 - 0xC);
      *(float *)(v6 - 0xC) = *(this + v7 - 1) - *(float *)(v8 - 8);
    }
    while ( v7 < v4 - 3 );
    result = a2;
  }
  if ( v7 < v4 )
  {
    v10 = (char *)this - a3;
    v11 = a3 + 4 * v7;
    v12 = v4 - v7;
    do
    {
      v13 = *(float *)&v10[v11];
      v11 += 4;
      --v12;
      *(float *)(v11 + result - a3 - 4) = v13 - *(float *)(v11 - 4);
    }
    while ( v12 );
  }
  return result;
}
