double __userpurge sub_4F1AC0@<st0>(int a1@<ecx>, double result@<st0>, int a3)
{
  float v4; // ebx
  float v5; // eax
  _DWORD *v6; // eax
  float *v7; // esi
  double v8; // st7
  int (__thiscall *v9)(_DWORD); // edx
  float *v10; // eax
  int v11; // eax
  int v12; // ebp
  float *v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // edi
  float v21; // esi
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  float v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+14h] [ebp-28h]
  int i; // [esp+18h] [ebp-24h]
  float v28; // [esp+20h] [ebp-1Ch]
  float v29; // [esp+20h] [ebp-1Ch]
  float v30; // [esp+20h] [ebp-1Ch]
  int j; // [esp+20h] [ebp-1Ch]
  int v32; // [esp+24h] [ebp-18h]
  double v33; // [esp+28h] [ebp-14h]
  int v34; // [esp+28h] [ebp-14h]

  v4 = *(float *)&a3;
  if ( *(float *)&a3 != 0.0 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x170))(a3) )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v4) + 0x170))(COERCE_FLOAT(LODWORD(v4))) + 4) == 0x29 )
      {
        if ( !*(_DWORD *)(a1 + 0x60) )
        {
          v5 = COERCE_FLOAT(FormHeapAlloc(0x10u));
          *(float *)&a3 = v5;
          if ( v5 == 0.0 )
            v6 = 0;
          else
            v6 = sub_4F0DE0((_DWORD *)LODWORD(v5), 0x25u);
          *(_DWORD *)(a1 + 0x60) = v6;
        }
        v7 = (float *)(*(int (__usercall **)@<eax>(float@<ecx>, double@<st0>))(*(_DWORD *)LODWORD(v4) + 0x170))(
                        COERCE_FLOAT(LODWORD(v4)),
                        result);
        v33 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(v4) + 0xEC))(LODWORD(v4));
        v8 = sub_4A9730(v7);
        v9 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v4) + 0x174);
        *(float *)&a3 = v8 * v33;
        v10 = (float *)v9(LODWORD(v4));
        v24 = *v10 - *(float *)&a3;
        v11 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v4) + 0x174))(COERCE_FLOAT(LODWORD(v4)));
        v28 = *(float *)(v11 + 4) - *(float *)&a3;
        v12 = (int)v28 >> 0xC;
        v34 = v12;
        v13 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v4) + 0x174))(COERCE_FLOAT(LODWORD(v4)));
        v29 = *v13 + *(float *)&a3;
        result = v29;
        v14 = (int)v29 >> 0xC;
        v32 = v14;
        v15 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v4) + 0x174))(COERCE_FLOAT(LODWORD(v4)));
        v30 = *(float *)(v15 + 4) + *(float *)&a3;
        a3 = (int)v30;
        v16 = (int)v24 >> 0xC;
        v17 = a3 >> 0xC;
        v25 = a3 >> 0xC;
        for ( i = v16; v16 <= v14; i = v16 )
        {
          if ( v12 <= v17 )
          {
            v18 = (__int16)v16 << 0x10;
            for ( j = v18; ; v18 = j )
            {
              v19 = *(_DWORD **)(a1 + 0x60);
              v20 = v18 | (unsigned __int16)v12;
              *(float *)&a3 = 0.0;
              NiTMap_GetAt(v19, v20, &a3);
              v21 = *(float *)&a3;
              if ( *(float *)&a3 == 0.0 )
              {
                v22 = (_DWORD *)FormHeapAlloc(8u);
                if ( v22 )
                {
                  *v22 = 0;
                  v22[1] = 0;
                }
                else
                {
                  v22 = 0;
                }
                v21 = *(float *)&v22;
                NiTMap_SetAt(*(_DWORD **)(a1 + 0x60), v20, (int)v22);
              }
              if ( *(_DWORD *)LODWORD(v21) )
              {
                v23 = (_DWORD *)FormHeapAlloc(8u);
                if ( v23 )
                {
                  *v23 = *(_DWORD *)LODWORD(v21);
                  v23[1] = 0;
                }
                else
                {
                  v23 = 0;
                }
                v23[1] = *(_DWORD *)(LODWORD(v21) + 4);
                *(_DWORD *)(LODWORD(v21) + 4) = v23;
              }
              ++v12;
              *(float *)LODWORD(v21) = v4;
              if ( v12 > v25 )
                break;
            }
            v17 = v25;
            v14 = v32;
            v12 = v34;
            v16 = i;
          }
          ++v16;
        }
      }
    }
  }
  return result;
}
