//
// GPU static-world LOD audit 2026-09-27: forced-level helper clamps iteration count then repeatedly accepts the first authored local minimum strictly greater than the previously accepted minimum; retains the prior index if none is higher. Exact captured routine was exercised by isolated test oracles including unsorted/duplicate minima and empty tables.
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

  v2 = a2; /*0x724c00*/
  if ( a2 <= 0 ) /*0x724c09*/
    v2 = 0; /*0x724c0b*/
  v3 = *(this + 8); /*0x724c0f*/
  v31 = v3; /*0x724c17*/
  if ( v2 >= v3 - 1 ) /*0x724c1b*/
    v2 = v3 - 1; /*0x724c1d*/
  v4 = 0xFFFFFFFF; /*0x724c25*/
  v33 = -flt_A7DEB4; /*0x724c2e*/
  if ( v2 >= 0 ) /*0x724c32*/
  {
    v32 = v2 + 1; /*0x724c3c*/
    do /*0x724db3*/
    {
      v5 = 0; /*0x724c41*/
      v30 = flt_A7DEB4; /*0x724c43*/
      if ( v3 >= 4 ) /*0x724c4a*/
      {
        v6 = *(this + 9); /*0x724c50*/
        v7 = (float *)(v6 + 0x20); /*0x724c53*/
        v8 = 0x20; /*0x724c56*/
        v9 = -v6; /*0x724c5b*/
        do /*0x724d54*/
        {
          v10 = v7[0xFFFFFFF8]; /*0x724c5d*/
          if ( v33 < v10 && v30 >= v10 ) /*0x724c78*/
          {
            v11 = *(this + 9); /*0x724c7a*/
            v12 = (int)v7 + v9 - 0x20; /*0x724c7d*/
            v13 = *(float *)(v12 + v11); /*0x724c81*/
            v14 = (float *)(v11 + v12); /*0x724c84*/
            v33 = v13; /*0x724c86*/
            v4 = v5; /*0x724c8a*/
            v30 = *v14; /*0x724c8e*/
          }
          v15 = v7[0xFFFFFFFC]; /*0x724c96*/
          if ( v33 < v15 && v30 >= v15 ) /*0x724cb1*/
          {
            v16 = *(this + 9); /*0x724cb3*/
            v17 = (int)v7 + v9 - 0x20; /*0x724cb6*/
            v18 = *(float *)(v17 + v16 + 0x10); /*0x724cba*/
            v19 = (float *)(v17 + v16 + 0x10); /*0x724cbe*/
            v33 = v18; /*0x724cc2*/
            v4 = v5 + 1; /*0x724cc6*/
            v30 = *v19; /*0x724ccb*/
          }
          v20 = *v7; /*0x724cd3*/
          if ( v33 < v20 && v30 >= v20 ) /*0x724ced*/
          {
            v33 = *(float *)(*(this + 9) + v8); /*0x724cf7*/
            v4 = v5 + 2; /*0x724cfb*/
            v30 = v33; /*0x724d00*/
          }
          v21 = v7[4]; /*0x724d08*/
          if ( v33 < v21 && v30 >= v21 ) /*0x724d23*/
          {
            v22 = *(this + 9); /*0x724d25*/
            v23 = (int)v7 + v9 + 0x10; /*0x724d28*/
            v24 = *(float *)(v23 + v22); /*0x724d2c*/
            v25 = (float *)(v22 + v23); /*0x724d2f*/
            v33 = v24; /*0x724d31*/
            v4 = v5 + 3; /*0x724d35*/
            v30 = *v25; /*0x724d3a*/
          }
          v5 += 4; /*0x724d46*/
          v8 += 0x40; /*0x724d4c*/
          v7 += 0x10; /*0x724d4f*/
        }
        while ( v5 < v31 - 3 ); /*0x724d54*/
        v3 = *(this + 8); /*0x724d5a*/
      }
      if ( v5 < v3 ) /*0x724d60*/
      {
        v26 = *(this + 9); /*0x724d62*/
        v27 = 0x10 * v5; /*0x724d67*/
        do /*0x724da8*/
        {
          v28 = *(float *)(v27 + v26); /*0x724d6a*/
          if ( v33 < v28 && v30 >= v28 ) /*0x724d85*/
          {
            v33 = *(float *)(v26 + v27); /*0x724d8e*/
            v4 = v5; /*0x724d92*/
            v30 = v33; /*0x724d96*/
          }
          ++v5; /*0x724d9e*/
          v27 += 0x10; /*0x724da1*/
        }
        while ( v5 < v31 ); /*0x724da8*/
        v3 = *(this + 8); /*0x724daa*/
      }
      --v32; /*0x724dae*/
    }
    while ( v32 ); /*0x724db3*/
  }
  return v4; /*0x724dc1*/
}
