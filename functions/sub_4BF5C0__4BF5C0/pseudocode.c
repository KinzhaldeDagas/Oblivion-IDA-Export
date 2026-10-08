int __thiscall sub_4BF5C0(_DWORD *this)
{
  int i; // edi
  unsigned __int8 v3; // dl
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int j; // ebx
  int v12; // ecx
  int v13; // eax
  void *v14; // eax
  int k; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int m; // eax
  int v25; // ecx
  int v26; // eax
  int n; // eax
  int v28; // ecx
  int ii; // eax
  int v30; // edx
  int v31; // eax
  int result; // eax
  unsigned int v33; // ebp
  unsigned int jj; // ebx
  unsigned __int8 v35; // [esp+10h] [ebp-20h]
  int v36; // [esp+14h] [ebp-1Ch]
  int v37; // [esp+18h] [ebp-18h]
  void *v38; // [esp+1Ch] [ebp-14h]
  int v39; // [esp+20h] [ebp-10h]
  void *v40; // [esp+24h] [ebp-Ch]
  int v41; // [esp+28h] [ebp-8h]
  int v42; // [esp+2Ch] [ebp-4h]

  v35 = 0; /*0x4bf5c9*/
  for ( i = 0x40; i < 0x50; i += 4 ) /*0x4bf5d1*/
  {
    v3 = v35; /*0x4bf5d6*/
    if ( v35 < 4u && (v4 = *(this + 9), v5 = 0, v4) && (v6 = *(_DWORD *)(v4 + 4 * v35 + 0x20)) != 0 ) /*0x4bf5f1*/
    {
      v38 = (void *)(v6 + 0x18); /*0x4bf5f6*/
      v37 = 0; /*0x4bf5fa*/
    }
    else
    {
      v5 = 0; /*0x4bf600*/
      v38 = 0; /*0x4bf602*/
      v37 = 0; /*0x4bf606*/
    }
    while ( 1 ) /*0x4bf614*/
    {
      if ( v3 < 4u && (unsigned __int16)v37 < 8u ) /*0x4bf626*/
      {
        v7 = *(this + 9); /*0x4bf62c*/
        if ( v7 ) /*0x4bf631*/
        {
          v8 = 4 * v3 + 0x30; /*0x4bf63a*/
          v36 = v8; /*0x4bf645*/
          if ( *(_DWORD *)(v8 + v7) ) /*0x4bf641*/
          {
            v42 = 4 * (unsigned __int16)v37; /*0x4bf659*/
            v9 = *(_DWORD *)(v42 + *(_DWORD *)(v8 + v7)); /*0x4bf65d*/
            if ( v9 ) /*0x4bf662*/
            {
              v40 = (void *)(v9 + 0x18); /*0x4bf66b*/
              if ( v9 != 0xFFFFFFE8 ) /*0x4bf66f*/
              {
                v10 = 0; /*0x4bf675*/
                v39 = 0; /*0x4bf677*/
                for ( j = 0; j < 0x20; j += 4 ) /*0x4bf67b*/
                {
                  if ( v37 != v10 && v35 < 4u && (unsigned __int16)v10 < 8u ) /*0x4bf69c*/
                  {
                    v12 = *(this + 9); /*0x4bf6a2*/
                    if ( v12 ) /*0x4bf6a7*/
                    {
                      if ( *(_DWORD *)(v8 + v12) ) /*0x4bf6ad*/
                      {
                        v41 = 4 * (unsigned __int16)v10; /*0x4bf6c1*/
                        v13 = *(_DWORD *)(v41 + *(_DWORD *)(v8 + v12)); /*0x4bf6c5*/
                        if ( v13 ) /*0x4bf6ca*/
                        {
                          v14 = (void *)(v13 + 0x18); /*0x4bf6d0*/
                          if ( v14 ) /*0x4bf6d3*/
                          {
                            if ( !TESTexture_CompareTo(v40, v14) ) /*0x4bf6de*/
                            {
                              for ( k = 0xC; /*0x4bf6ed*/
                                    k < 0x474;
                                    *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x10)) = 0.0 )
                              {
                                v16 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0xC); /*0x4bf6f8*/
                                k += 0x20; /*0x4bf6ff*/
                                *(float *)(v16 + v5) = *(float *)(j + v16) + *(float *)(v16 + v5); /*0x4bf705*/
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x2C)) = 0.0; /*0x4bf712*/
                                v17 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x28); /*0x4bf71b*/
                                *(float *)(v17 + v5) = *(float *)(j + v17) + *(float *)(v17 + v5); /*0x4bf725*/
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x28)) = 0.0; /*0x4bf732*/
                                v18 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x24); /*0x4bf73b*/
                                *(float *)(v18 + v5) = *(float *)(j + v18) + *(float *)(v18 + v5); /*0x4bf745*/
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x24)) = 0.0; /*0x4bf752*/
                                v19 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x20); /*0x4bf75b*/
                                *(float *)(v19 + v5) = *(float *)(j + v19) + *(float *)(v19 + v5); /*0x4bf765*/
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x20)) = 0.0; /*0x4bf772*/
                                v20 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x1C); /*0x4bf77b*/
                                *(float *)(v20 + v5) = *(float *)(j + v20) + *(float *)(v20 + v5); /*0x4bf785*/
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x1C)) = 0.0; /*0x4bf792*/
                                v21 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x18); /*0x4bf79b*/
                                *(float *)(v21 + v5) = *(float *)(j + v21) + *(float *)(v21 + v5); /*0x4bf7a5*/
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x18)) = 0.0; /*0x4bf7b2*/
                                v22 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x14); /*0x4bf7bb*/
                                *(float *)(v22 + v5) = *(float *)(j + v22) + *(float *)(v22 + v5); /*0x4bf7c5*/
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x14)) = 0.0; /*0x4bf7d2*/
                                v23 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x10); /*0x4bf7db*/
                                *(float *)(v23 + v5) = *(float *)(j + v23) + *(float *)(v23 + v5); /*0x4bf7e5*/
                              }
                              for ( m = 0x480; /*0x4bf800*/
                                    m < 0x484;
                                    *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + m - 4)) = 0.0 )
                              {
                                v25 = *(_DWORD *)(m + *(_DWORD *)(*(this + 9) + i)); /*0x4bf80b*/
                                m += 4; /*0x4bf811*/
                                *(float *)(v25 + v5) = *(float *)(j + v25) + *(float *)(v25 + v5); /*0x4bf81c*/
                              }
                              v26 = *(this + 9); /*0x4bf82e*/
                              if ( v26 ) /*0x4bf835*/
                                *(_DWORD *)(v41 + *(_DWORD *)(v36 + v26)) = 0; /*0x4bf842*/
                            }
                            v8 = v36; /*0x4bf849*/
                          }
                        }
                      }
                    }
                  }
                  v10 = ++v39; /*0x4bf851*/
                }
                if ( v38 ) /*0x4bf869*/
                {
                  if ( !TESTexture_CompareTo(v40, v38) ) /*0x4bf878*/
                  {
                    for ( n = 0xC; n < 0x474; n += 0x20 ) /*0x4bf887*/
                    {
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n - 0xC) + v5) = 0.0; /*0x4bf896*/
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n - 8) + v5) = 0.0; /*0x4bf8a3*/
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n - 4) + v5) = 0.0; /*0x4bf8b0*/
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n) + v5) = 0.0; /*0x4bf8bc*/
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 4) + v5) = 0.0; /*0x4bf8c9*/
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 8) + v5) = 0.0; /*0x4bf8d6*/
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 0xC) + v5) = 0.0; /*0x4bf8e3*/
                      v28 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 0x10); /*0x4bf8ec*/
                      *(float *)(v28 + v5) = 0.0; /*0x4bf8f3*/
                    }
                    for ( ii = 0x480; ii < 0x484; ii += 4 ) /*0x4bf8fd*/
                    {
                      v30 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + ii); /*0x4bf908*/
                      *(float *)(v30 + v5) = 0.0; /*0x4bf90e*/
                    }
                    if ( v35 < 4u ) /*0x4bf91f*/
                    {
                      v31 = *(this + 9); /*0x4bf921*/
                      if ( v31 ) /*0x4bf926*/
                        *(_DWORD *)(v42 + *(_DWORD *)(v36 + v31)) = 0; /*0x4bf933*/
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v37; /*0x4bf93a*/
      v5 += 4; /*0x4bf93f*/
      if ( v5 >= 0x20 ) /*0x4bf945*/
        break; /*0x4bf945*/
      v3 = v35; /*0x4bf610*/
    }
    result = *(_DWORD *)(i + *(this + 9) - 0x10); /*0x4bf94e*/
    v33 = 8; /*0x4bf952*/
    for ( jj = 0; jj < v33; ++jj ) /*0x4bf957*/
    {
      for ( ; !*(_DWORD *)(result + 4 * jj); --v33 ) /*0x4bf960*/
      {
        if ( jj >= v33 ) /*0x4bf968*/
          break; /*0x4bf968*/
        sub_4BF2F0(this, v35, jj); /*0x4bf972*/
        result = *(_DWORD *)(i + *(this + 9) - 0x10); /*0x4bf97a*/
      }
    }
    ++v35; /*0x4bf98e*/
  }
  return result; /*0x4bf99f*/
}
