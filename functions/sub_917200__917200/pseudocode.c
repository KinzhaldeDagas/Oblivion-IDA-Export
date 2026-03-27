int __thiscall sub_917200(int *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // edx
  double v11; // st7
  double v12; // st6

  v3 = *(this + 0xF);
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
  if ( v4 < v3 )
  {
    v5 = 2 * v4;
    if ( v3 >= v5 )
      v5 = *(this + 0xF);
    sub_8A6E40((const void **)a2, v5, 0x10);
  }
  *(_DWORD *)(a2 + 4) = v3;
  result = *(this + 0xF);
  v7 = 0;
  if ( result > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(this + 0xC);
      v10 = (v7 & 3) + 0xC * (v7 / 4);
      v11 = *(float *)(v9 + 4 * v10 + 0x20);
      result = v8 + *(_DWORD *)a2;
      v12 = *(float *)(v9 + 4 * v10 + 0x10);
      *(_DWORD *)result = *(_DWORD *)(v9 + 4 * v10);
      *(float *)(result + 4) = v12;
      ++v7;
      v8 += 0x10;
      *(float *)(result + 8) = v11;
      *(_DWORD *)(result + 0xC) = 0;
    }
    while ( v7 < *(this + 0xF) );
  }
  return result;
}
