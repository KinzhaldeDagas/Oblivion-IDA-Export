unsigned int __thiscall sub_724C00(int *this, int a2)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  signed int v5; // edx
  int v6; // edi
  float *v7; // esi
  int v8; // ebp
  int v9; // edi
  double v10; // st6
  int v11; // ebx
  int v12; // eax
  double v13; // st6
  float *v14; // eax
  double v15; // st6
  int v16; // ebx
  int v17; // eax
  double v18; // st6
  float *v19; // eax
  double v20; // st6
  double v21; // st6
  int v22; // ebx
  int v23; // eax
  double v24; // st6
  float *v25; // eax
  int v26; // edi
  int v27; // esi
  double v28; // st6
  float v30; // [esp+0h] [ebp-Ch]
  int v31; // [esp+4h] [ebp-8h]
  int v32; // [esp+8h] [ebp-4h]
  float v33; // [esp+10h] [ebp+4h]

  v2 = a2;
  if ( a2 <= 0 )
    v2 = 0;
  v3 = *(this + 8);
  v31 = v3;
  if ( v2 >= v3 - 1 )
    v2 = v3 - 1;
  v4 = 0xFFFFFFFF;
  v33 = -flt_A7DEB4;
  if ( v2 >= 0 )
  {
    v32 = v2 + 1;
    do
    {
      v5 = 0;
      v30 = flt_A7DEB4;
      if ( v3 >= 4 )
      {
        v6 = *(this + 9);
        v7 = (float *)(v6 + 0x20);
        v8 = 0x20;
        v9 = -v6;
        do
        {
          v10 = v7[0xFFFFFFF8];
          if ( v33 < v10 && v30 >= v10 )
          {
            v11 = *(this + 9);
            v12 = (int)v7 + v9 - 0x20;
            v13 = *(float *)(v12 + v11);
            v14 = (float *)(v11 + v12);
            v33 = v13;
            v4 = v5;
            v30 = *v14;
          }
          v15 = v7[0xFFFFFFFC];
          if ( v33 < v15 && v30 >= v15 )
          {
            v16 = *(this + 9);
            v17 = (int)v7 + v9 - 0x20;
            v18 = *(float *)(v17 + v16 + 0x10);
            v19 = (float *)(v17 + v16 + 0x10);
            v33 = v18;
            v4 = v5 + 1;
            v30 = *v19;
          }
          v20 = *v7;
          if ( v33 < v20 && v30 >= v20 )
          {
            v33 = *(float *)(*(this + 9) + v8);
            v4 = v5 + 2;
            v30 = v33;
          }
          v21 = v7[4];
          if ( v33 < v21 && v30 >= v21 )
          {
            v22 = *(this + 9);
            v23 = (int)v7 + v9 + 0x10;
            v24 = *(float *)(v23 + v22);
            v25 = (float *)(v22 + v23);
            v33 = v24;
            v4 = v5 + 3;
            v30 = *v25;
          }
          v5 += 4;
          v8 += 0x40;
          v7 += 0x10;
        }
        while ( v5 < v31 - 3 );
        v3 = *(this + 8);
      }
      if ( v5 < v3 )
      {
        v26 = *(this + 9);
        v27 = 0x10 * v5;
        do
        {
          v28 = *(float *)(v27 + v26);
          if ( v33 < v28 && v30 >= v28 )
          {
            v33 = *(float *)(v26 + v27);
            v4 = v5;
            v30 = v33;
          }
          ++v5;
          v27 += 0x10;
        }
        while ( v5 < v31 );
        v3 = *(this + 8);
      }
      --v32;
    }
    while ( v32 );
  }
  return v4;
}
