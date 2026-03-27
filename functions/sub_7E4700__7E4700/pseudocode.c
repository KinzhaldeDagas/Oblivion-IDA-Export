void __thiscall sub_7E4700(float *this, float a2)
{
  signed int v3; // eax
  double v4; // st7
  double v5; // st6
  int v6; // ebp
  int v7; // ecx
  unsigned int v8; // edi
  float *v9; // edx
  int v10; // edx
  double v11; // st5
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  float *v17; // edx
  float v18; // [esp+0h] [ebp-4h]

  v18 = a2 - *(this + 0x3E);
  v3 = sub_7E2D60();
  v4 = v18;
  v5 = dbl_A3A5B0;
  v6 = 0;
  if ( v3 >= 4 )
  {
    v7 = 0;
    v8 = ((unsigned int)(v3 - 4) >> 2) + 1;
    v6 = 4 * v8;
    do
    {
      v9 = (float *)(v7 + *((_DWORD *)this + 0x1B));
      if ( *v9 != v5 )
        v9[3] = v4 + v9[3];
      v10 = *((_DWORD *)this + 0x1B);
      v11 = *(float *)(v10 + v7 + 0x20);
      v12 = v7 + v10;
      if ( v11 != v5 )
        *(float *)(v12 + 0x2C) = v4 + *(float *)(v12 + 0x2C);
      v13 = *((_DWORD *)this + 0x1B);
      if ( *(float *)(v7 + v13 + 0x40) != v5 )
        *(float *)(v7 + v13 + 0x4C) = v4 + *(float *)(v7 + v13 + 0x4C);
      v14 = *((_DWORD *)this + 0x1B);
      if ( *(float *)(v7 + v14 + 0x60) != v5 )
        *(float *)(v7 + v14 + 0x6C) = v4 + *(float *)(v7 + v14 + 0x6C);
      v7 += 0x80;
      --v8;
    }
    while ( v8 );
  }
  if ( v6 < v3 )
  {
    v15 = 0x20 * v6;
    v16 = v3 - v6;
    do
    {
      v17 = (float *)(v15 + *((_DWORD *)this + 0x1B));
      if ( *v17 != v5 )
        v17[3] = v17[3] + v4;
      v15 += 0x20;
      --v16;
    }
    while ( v16 );
  }
  *(this + 0x3E) = a2;
}
