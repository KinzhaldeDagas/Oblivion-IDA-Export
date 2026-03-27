int __cdecl sub_7BD0D0(int a1)
{
  int v1; // eax
  int v2; // edi
  double v3; // st6
  float v4; // edx
  float v5; // edx
  UInt16 *v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  int v14; // ebp
  int v15; // ecx
  int v16; // edx
  int v17; // ebp
  NiAVObject *v18; // eax
  NiAVObject *v19; // eax
  float *v20; // eax
  double v21; // st7
  float v23; // [esp+18h] [ebp-1Ch]
  float v24; // [esp+20h] [ebp-14h]
  float v25; // [esp+20h] [ebp-14h]
  float v26; // [esp+20h] [ebp-14h]
  float v27; // [esp+24h] [ebp-10h]

  v1 = FormHeapAlloc(0x30u);
  v23 = flt_A30634;
  v2 = v1;
  v3 = flt_A8F8E4;
  v4 = flt_A8F8E4;
  *(float *)v1 = v23;
  *(float *)(v1 + 4) = v23;
  *(float *)(v1 + 8) = v4;
  v24 = v3;
  *(float *)(v1 + 0xC) = 1.0;
  v5 = v24;
  *(float *)(v1 + 0x10) = v23;
  v25 = v3;
  *(float *)(v1 + 0x14) = v5;
  *(float *)(v1 + 0x18) = 1.0;
  *(float *)(v1 + 0x1C) = 1.0;
  *(float *)(v1 + 0x20) = v25;
  *(float *)(v1 + 0x24) = v23;
  v26 = v3;
  *(float *)(v1 + 0x28) = 1.0;
  *(float *)(v1 + 0x2C) = v26;
  v6 = (UInt16 *)FormHeapAlloc(0xCu);
  *v6 = 0;
  v6[1] = 1;
  v6[2] = 2;
  v6[3] = 3;
  v6[4] = 0;
  v6[5] = 2;
  v7 = (_DWORD *)FormHeapAlloc(0x40u);
  v8 = v7;
  if ( v7 )
    sub_401080(v7, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v8 = 0;
  *v8 = dword_B25AD0;
  v8[1] = dword_B25AD4;
  v8[2] = dword_B25AD8;
  v8[3] = dword_B25ADC;
  v9 = dword_B25AD4;
  v10 = dword_B25AD8;
  v11 = dword_B25ADC;
  v8[4] = dword_B25AD0;
  v8[5] = v9;
  v8[6] = v10;
  v8[7] = v11;
  v12 = dword_B25AD4;
  v13 = dword_B25AD8;
  v14 = dword_B25ADC;
  v8[8] = dword_B25AD0;
  v8[9] = v12;
  v8[0xA] = v13;
  v8[0xB] = v14;
  v15 = dword_B25AD4;
  v16 = dword_B25AD8;
  v17 = dword_B25ADC;
  v8[0xC] = dword_B25AD0;
  v8[0xD] = v15;
  v8[0xE] = v16;
  v8[0xF] = v17;
  v18 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v18 )
    v19 = sub_7174B0(v18, 4, v2, 0, (int)v8, 0, 0, 0, 2, v6);
  else
    v19 = 0;
  *(_DWORD *)a1 = v19;
  if ( v19 )
    InterlockedIncrement((volatile LONG *)&v19->members);
  v20 = *(float **)(*(_DWORD *)a1 + 0xB4);
  v21 = flt_A342A4;
  v20[3] = 0.0;
  v27 = v21;
  v20[4] = 0.0;
  v20[5] = 0.0;
  v20[6] = v27;
  return a1;
}
