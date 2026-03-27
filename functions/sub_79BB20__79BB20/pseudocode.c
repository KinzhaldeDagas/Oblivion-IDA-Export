int __cdecl sub_79BB20(int a1, int a2, int a3)
{
  int v3; // ebx
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // esi
  int v8; // ebp
  int v9; // edi
  char v10; // cl
  int v11; // edx
  int v12; // eax
  double v13; // st7
  double v14; // st7
  int v15; // eax
  int v16; // esi
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  char *v22; // eax
  double v23; // st7
  char *v24[4]; // [esp+18h] [ebp-3Ch] BYREF
  float v25; // [esp+28h] [ebp-2Ch]
  float v26; // [esp+2Ch] [ebp-28h]
  char v27; // [esp+30h] [ebp-24h]
  float v28; // [esp+34h] [ebp-20h]
  float v29; // [esp+38h] [ebp-1Ch]
  float v30; // [esp+3Ch] [ebp-18h]
  int v31; // [esp+40h] [ebp-14h]
  int v32; // [esp+44h] [ebp-10h]
  unsigned int v33; // [esp+50h] [ebp-4h]
  int v34; // [esp+5Ch] [ebp+8h]

  v3 = (a2 - a1) / 0x30;
  result = (a3 - a1) / 0x30;
  v34 = result;
  v5 = v3;
  if ( v3 )
  {
    do
    {
      v6 = result % v5;
      v34 = v5;
      result = v5;
      v5 = v6;
    }
    while ( v6 );
  }
  if ( result < (a3 - a1) / 0x30 && result > 0 )
  {
    v7 = 0x30 * v3;
    v8 = 0x30 * result + a1 + 0x14;
    while ( 1 )
    {
      v9 = v8 - 0x14;
      sub_79AD70(v24, v8 - 0x14);
      v10 = *(_BYTE *)(v8 + 4);
      v25 = *(float *)(v8 - 4);
      v11 = *(_DWORD *)(v8 + 0x14);
      v12 = *(_DWORD *)(v8 + 0x18);
      v26 = *(float *)v8;
      v13 = *(float *)(v8 + 8);
      v27 = v10;
      v28 = v13;
      v31 = v11;
      v14 = *(float *)(v8 + 0xC);
      v32 = v12;
      v29 = v14;
      v30 = *(float *)(v8 + 0x10);
      v15 = v7 + v8 - 0x14;
      v16 = a1;
      v33 = 0;
      if ( v15 != a3 )
        v16 = v15;
      while ( v16 != v8 - 0x14 )
      {
        sub_79B160((char **)v9, (char **)v16);
        *(float *)(v9 + 0x10) = *(float *)(v16 + 0x10);
        *(float *)(v9 + 0x14) = *(float *)(v16 + 0x14);
        *(_BYTE *)(v9 + 0x18) = *(_BYTE *)(v16 + 0x18);
        *(float *)(v9 + 0x1C) = *(float *)(v16 + 0x1C);
        *(float *)(v9 + 0x20) = *(float *)(v16 + 0x20);
        *(float *)(v9 + 0x24) = *(float *)(v16 + 0x24);
        *(_DWORD *)(v9 + 0x28) = *(_DWORD *)(v16 + 0x28);
        *(_DWORD *)(v9 + 0x2C) = *(_DWORD *)(v16 + 0x2C);
        v17 = (a3 - v16) / 0x30;
        v9 = v16;
        if ( v3 >= v17 )
          v16 = a1 + 0x30 * (v3 - v17);
        else
          v16 += 0x30 * v3;
      }
      sub_79B160((char **)v9, v24);
      v18 = v27;
      *(float *)(v9 + 0x10) = v25;
      v19 = v31;
      v20 = v32;
      *(float *)(v9 + 0x14) = v26;
      v21 = v28;
      *(_BYTE *)(v9 + 0x18) = v18;
      v22 = v24[1];
      *(float *)(v9 + 0x1C) = v21;
      *(float *)(v9 + 0x20) = v29;
      *(_DWORD *)(v9 + 0x28) = v19;
      v23 = v30;
      *(_DWORD *)(v9 + 0x2C) = v20;
      *(float *)(v9 + 0x24) = v23;
      v33 = 0xFFFFFFFF;
      if ( v22 )
        FormHeapFree((unsigned int)v22);
      result = v34 - 1;
      v8 -= 0x30;
      if ( --v34 <= 0 )
        break;
      v7 = 0x30 * v3;
    }
  }
  return result;
}
