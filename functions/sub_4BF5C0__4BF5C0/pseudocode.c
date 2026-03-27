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

  v35 = 0;
  for ( i = 0x40; i < 0x50; i += 4 )
  {
    v3 = v35;
    if ( v35 < 4u && (v4 = *(this + 9), v5 = 0, v4) && (v6 = *(_DWORD *)(v4 + 4 * v35 + 0x20)) != 0 )
    {
      v38 = (void *)(v6 + 0x18);
      v37 = 0;
    }
    else
    {
      v5 = 0;
      v38 = 0;
      v37 = 0;
    }
    while ( 1 )
    {
      if ( v3 < 4u && (unsigned __int16)v37 < 8u )
      {
        v7 = *(this + 9);
        if ( v7 )
        {
          v8 = 4 * v3 + 0x30;
          v36 = v8;
          if ( *(_DWORD *)(v8 + v7) )
          {
            v42 = 4 * (unsigned __int16)v37;
            v9 = *(_DWORD *)(v42 + *(_DWORD *)(v8 + v7));
            if ( v9 )
            {
              v40 = (void *)(v9 + 0x18);
              if ( v9 != 0xFFFFFFE8 )
              {
                v10 = 0;
                v39 = 0;
                for ( j = 0; j < 0x20; j += 4 )
                {
                  if ( v37 != v10 && v35 < 4u && (unsigned __int16)v10 < 8u )
                  {
                    v12 = *(this + 9);
                    if ( v12 )
                    {
                      if ( *(_DWORD *)(v8 + v12) )
                      {
                        v41 = 4 * (unsigned __int16)v10;
                        v13 = *(_DWORD *)(v41 + *(_DWORD *)(v8 + v12));
                        if ( v13 )
                        {
                          v14 = (void *)(v13 + 0x18);
                          if ( v14 )
                          {
                            if ( !TESTexture_CompareTo(v40, v14) )
                            {
                              for ( k = 0xC;
                                    k < 0x474;
                                    *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x10)) = 0.0 )
                              {
                                v16 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0xC);
                                k += 0x20;
                                *(float *)(v16 + v5) = *(float *)(j + v16) + *(float *)(v16 + v5);
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x2C)) = 0.0;
                                v17 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x28);
                                *(float *)(v17 + v5) = *(float *)(j + v17) + *(float *)(v17 + v5);
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x28)) = 0.0;
                                v18 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x24);
                                *(float *)(v18 + v5) = *(float *)(j + v18) + *(float *)(v18 + v5);
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x24)) = 0.0;
                                v19 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x20);
                                *(float *)(v19 + v5) = *(float *)(j + v19) + *(float *)(v19 + v5);
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x20)) = 0.0;
                                v20 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x1C);
                                *(float *)(v20 + v5) = *(float *)(j + v20) + *(float *)(v20 + v5);
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x1C)) = 0.0;
                                v21 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x18);
                                *(float *)(v21 + v5) = *(float *)(j + v21) + *(float *)(v21 + v5);
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x18)) = 0.0;
                                v22 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x14);
                                *(float *)(v22 + v5) = *(float *)(j + v22) + *(float *)(v22 + v5);
                                *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + k - 0x14)) = 0.0;
                                v23 = *(_DWORD *)(k + *(_DWORD *)(*(this + 9) + i) - 0x10);
                                *(float *)(v23 + v5) = *(float *)(j + v23) + *(float *)(v23 + v5);
                              }
                              for ( m = 0x480;
                                    m < 0x484;
                                    *(float *)(j + *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + m - 4)) = 0.0 )
                              {
                                v25 = *(_DWORD *)(m + *(_DWORD *)(*(this + 9) + i));
                                m += 4;
                                *(float *)(v25 + v5) = *(float *)(j + v25) + *(float *)(v25 + v5);
                              }
                              v26 = *(this + 9);
                              if ( v26 )
                                *(_DWORD *)(v41 + *(_DWORD *)(v36 + v26)) = 0;
                            }
                            v8 = v36;
                          }
                        }
                      }
                    }
                  }
                  v10 = ++v39;
                }
                if ( v38 )
                {
                  if ( !TESTexture_CompareTo(v40, v38) )
                  {
                    for ( n = 0xC; n < 0x474; n += 0x20 )
                    {
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n - 0xC) + v5) = 0.0;
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n - 8) + v5) = 0.0;
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n - 4) + v5) = 0.0;
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n) + v5) = 0.0;
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 4) + v5) = 0.0;
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 8) + v5) = 0.0;
                      *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 0xC) + v5) = 0.0;
                      v28 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + n + 0x10);
                      *(float *)(v28 + v5) = 0.0;
                    }
                    for ( ii = 0x480; ii < 0x484; ii += 4 )
                    {
                      v30 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + i) + ii);
                      *(float *)(v30 + v5) = 0.0;
                    }
                    if ( v35 < 4u )
                    {
                      v31 = *(this + 9);
                      if ( v31 )
                        *(_DWORD *)(v42 + *(_DWORD *)(v36 + v31)) = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v37;
      v5 += 4;
      if ( v5 >= 0x20 )
        break;
      v3 = v35;
    }
    result = *(_DWORD *)(i + *(this + 9) - 0x10);
    v33 = 8;
    for ( jj = 0; jj < v33; ++jj )
    {
      for ( ; !*(_DWORD *)(result + 4 * jj); --v33 )
      {
        if ( jj >= v33 )
          break;
        sub_4BF2F0(this, v35, jj);
        result = *(_DWORD *)(i + *(this + 9) - 0x10);
      }
    }
    ++v35;
  }
  return result;
}
