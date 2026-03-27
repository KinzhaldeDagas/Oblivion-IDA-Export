void __cdecl sub_79B8D0(int a1, int a2)
{
  char v2; // bl
  int v3; // ebp
  int v4; // eax
  double v5; // st7
  double v6; // st7
  char *v7; // eax
  int v8; // edx
  double v9; // st7
  double v10; // st7
  char *v11[4]; // [esp+14h] [ebp-3Ch] BYREF
  float v12; // [esp+24h] [ebp-2Ch]
  float v13; // [esp+28h] [ebp-28h]
  char v14; // [esp+2Ch] [ebp-24h]
  float v15; // [esp+30h] [ebp-20h]
  float v16; // [esp+34h] [ebp-1Ch]
  float v17; // [esp+38h] [ebp-18h]
  int v18; // [esp+3Ch] [ebp-14h]
  int v19; // [esp+40h] [ebp-10h]
  int v20; // [esp+4Ch] [ebp-4h]

  sub_79AD70(v11, a1);
  v2 = *(_BYTE *)(a1 + 0x18);
  v12 = *(float *)(a1 + 0x10);
  v3 = *(_DWORD *)(a1 + 0x28);
  v4 = *(_DWORD *)(a1 + 0x2C);
  v13 = *(float *)(a1 + 0x14);
  v5 = *(float *)(a1 + 0x1C);
  v14 = v2;
  v15 = v5;
  v18 = v3;
  v6 = *(float *)(a1 + 0x20);
  v19 = v4;
  v16 = v6;
  v17 = *(float *)(a1 + 0x24);
  v20 = 0;
  sub_79B160((char **)a1, (char **)a2);
  *(float *)(a1 + 0x10) = *(float *)(a2 + 0x10);
  *(float *)(a1 + 0x14) = *(float *)(a2 + 0x14);
  *(_BYTE *)(a1 + 0x18) = *(_BYTE *)(a2 + 0x18);
  *(float *)(a1 + 0x1C) = *(float *)(a2 + 0x1C);
  *(float *)(a1 + 0x20) = *(float *)(a2 + 0x20);
  *(float *)(a1 + 0x24) = *(float *)(a2 + 0x24);
  *(_DWORD *)(a1 + 0x28) = *(_DWORD *)(a2 + 0x28);
  *(_DWORD *)(a1 + 0x2C) = *(_DWORD *)(a2 + 0x2C);
  sub_79B160((char **)a2, v11);
  v7 = v11[1];
  *(float *)(a2 + 0x10) = v12;
  v8 = v19;
  *(float *)(a2 + 0x14) = v13;
  v9 = v15;
  *(_BYTE *)(a2 + 0x18) = v2;
  *(float *)(a2 + 0x1C) = v9;
  *(_DWORD *)(a2 + 0x28) = v3;
  v10 = v16;
  *(_DWORD *)(a2 + 0x2C) = v8;
  *(float *)(a2 + 0x20) = v10;
  *(float *)(a2 + 0x24) = v17;
  if ( v7 )
    FormHeapFree((unsigned int)v7);
}
