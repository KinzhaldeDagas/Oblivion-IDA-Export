char __cdecl sub_4D43F0(int a1, int arg4, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  unsigned __int16 *v6; // esi
  _WORD *v7; // eax
  _WORD *v8; // eax
  float v9; // eax
  float v10; // ecx
  float v11; // edx
  _DWORD *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // rt1
  double v17; // st5
  double v18; // st7
  float v20; // [esp+14h] [ebp-74h] BYREF
  int v21; // [esp+18h] [ebp-70h]
  int v22; // [esp+1Ch] [ebp-6Ch]
  int v23; // [esp+20h] [ebp-68h] BYREF
  int v24; // [esp+24h] [ebp-64h]
  _WORD *v25; // [esp+28h] [ebp-60h]
  float v26; // [esp+2Ch] [ebp-5Ch] BYREF
  float v27; // [esp+30h] [ebp-58h]
  float v28; // [esp+34h] [ebp-54h]
  float v29; // [esp+38h] [ebp-50h] BYREF
  float v30; // [esp+3Ch] [ebp-4Ch]
  float v31; // [esp+40h] [ebp-48h]
  float v32; // [esp+44h] [ebp-44h]
  float v33; // [esp+48h] [ebp-40h]
  float v34; // [esp+4Ch] [ebp-3Ch]
  float v35; // [esp+50h] [ebp-38h]
  float v36; // [esp+54h] [ebp-34h]
  float v37; // [esp+58h] [ebp-30h]
  int a2; // [esp+5Ch] [ebp-2Ch] BYREF
  float v39; // [esp+60h] [ebp-28h] BYREF
  float v40; // [esp+64h] [ebp-24h] BYREF
  float v41; // [esp+68h] [ebp-20h] BYREF
  float v42; // [esp+6Ch] [ebp-1Ch] BYREF
  float v43; // [esp+70h] [ebp-18h] BYREF
  int v44; // [esp+74h] [ebp-14h] BYREF
  float v45; // [esp+78h] [ebp-10h] BYREF
  unsigned int v46; // [esp+84h] [ebp-4h]

  if ( a5 )
  {
    if ( arg4 )
    {
      if ( a1 )
      {
        if ( TESFile_GetRecordType((Data *)a1) == 0x30 )
        {
          TESFile_NextRecordEx((Data *)a1, 1);
          v5 = (_DWORD *)(a1 + 0x23C);
          if ( *(_DWORD *)(a1 + 0x23C) == dword_B05E20 && *(_DWORD *)(a1 + 0x248) == 6 )
          {
            TESFile_NextRecordEx((Data *)a1, 1);
            if ( *v5 == dword_B05E20 )
            {
              if ( *(_DWORD *)(a1 + 0x248) == 8 )
                TESFile::NextGroup((Data *)a1);
              if ( *v5 == dword_B05E20 && *(_DWORD *)(a1 + 0x248) == 0xA )
              {
                TESFile_NextRecordEx((Data *)a1, 1);
                while ( TESFile_GetRecordType((Data *)a1) == 0x31 )
                {
                  if ( (*(_BYTE *)(a1 + 0x244) & 0x20) == 0 )
                  {
                    if ( sub_4D8440((int *)a1, COERCE_FLOAT(&a2)) )
                    {
                      if ( a2 )
                      {
                        v23 = 0;
                        if ( !NiTMap_GetAt(a5, a2, &v23) || (v6 = (unsigned __int16 *)v23) == 0 )
                        {
                          v7 = (_WORD *)FormHeapAlloc(0x34u);
                          v25 = v7;
                          v46 = 0;
                          if ( v7 )
                            v8 = sub_4CC7C0(v7);
                          else
                            v8 = 0;
                          v8[0x17] = 0x1E;
                          v8[0xF] = 0x5A;
                          v8[7] = 0x5A;
                          *((_DWORD *)v8 + 0xC) = 0;
                          v46 = 0xFFFFFFFF;
                          v6 = v8;
                          NiTMap_SetAt(a5, a2, (int)v8);
                        }
                        v9 = Vector3_InitValue_;
                        v10 = *(&Vector3_InitValue_ + 1);
                        v20 = 0.0;
                        v11 = dword_B3F9B0;
                        v26 = v9;
                        v27 = v10;
                        v28 = v11;
                        v29 = v39;
                        v30 = v40;
                        v31 = v41;
                        v12 = (_DWORD *)sub_4EF7E0(arg4);
                        if ( sub_4EB370(v12, (int)&v29, &v20, &v26) )
                        {
                          v21 = (int)v20;
                          v25 = (_WORD *)v21;
                          v22 = (int)v30;
                          v23 = v22;
                          v24 = (int)v29;
                          v32 = (float)v24;
                          v29 = v32;
                          v33 = (float)v22;
                          v30 = v33;
                          v34 = (float)v21;
                          v31 = v34;
                          v13 = dbl_A2FAA0;
                          v26 = v26 * v13 + v13;
                          v14 = dbl_A46B18;
                          v15 = flt_A34F5C;
                          if ( v14 <= v26 )
                            v26 = flt_A34F5C;
                          v27 = v27 * v13 + v13;
                          if ( v27 >= v14 )
                            v27 = v15;
                          v16 = v15;
                          v17 = v13 + v28 * v13;
                          v18 = v16;
                          v28 = v17;
                          if ( v28 >= v14 )
                            v28 = v18;
                          v35 = v32 + v26;
                          v39 = v35;
                          v36 = v33 + v27;
                          v40 = v36;
                          v37 = v34 + v28;
                          v41 = v37;
                        }
                        sub_4D31D0(v6 + 8, &v39);
                        sub_4D31D0(v6 + 8, &v40);
                        sub_4D31D0(v6 + 8, &v41);
                        sub_4D31D0(v6, &v43);
                        sub_4D31D0(v6, (float *)&v44);
                        sub_4D31D0(v6, &v45);
                        sub_4D31D0(v6 + 0x10, &v42);
                        ++*((_DWORD *)v6 + 0xC);
                      }
                    }
                  }
                  TESFile_NextRecordEx((Data *)a1, 1);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
