Ni2DBuffer *__cdecl sub_701020(int a1, int a2)
{
  Ni2DBuffer **v3; // esi
  unsigned int v4; // ecx
  float v5; // ecx
  float v6; // eax
  float v7; // edx
  double v8; // st7
  double v9; // st6
  float v10; // eax
  float v11; // edx
  float v12; // eax
  float v13; // edx
  NiPixelData *v14; // eax
  float v15; // [esp+0h] [ebp-30h] BYREF
  float v16; // [esp+4h] [ebp-2Ch]
  float v17; // [esp+8h] [ebp-28h]
  float v18; // [esp+Ch] [ebp-24h]
  float v19; // [esp+10h] [ebp-20h] BYREF
  float v20; // [esp+14h] [ebp-1Ch]
  float v21; // [esp+18h] [ebp-18h]
  float v22; // [esp+1Ch] [ebp-14h]
  float v23; // [esp+20h] [ebp-10h]
  float v24; // [esp+24h] [ebp-Ch]
  float v25; // [esp+28h] [ebp-8h]
  float v26; // [esp+2Ch] [ebp-4h]

  if ( (a2 & 0x7FFFFFFFu) >= 0xA )
    return 0;
  v3 = (Ni2DBuffer **)(4 * a2 + 0xB3F800);
  v4 = 1;
  if ( !*v3 )
  {
    switch ( a2 )
    {
      case 0x80000001:
        v19 = 0.0;
        v20 = 0.0;
        v23 = 1.0;
        v24 = 1.0;
        v26 = 1.0;
        v21 = 1.0;
        v22 = 1.0;
        v25 = 0.0;
        v15 = 1.0;
        v16 = 1.0;
        v17 = 0.0;
        v18 = 1.0;
        goto LABEL_18;
      case 0x80000002:
        v19 = 0.0;
        v5 = 1.0;
        v6 = 1.0;
        v7 = 0.0;
        v23 = 1.0;
        v26 = 1.0;
        v24 = 0.0;
        v25 = 0.0;
        goto LABEL_7;
      case 0x80000003:
        v8 = 0.0;
        v23 = 0.0;
        v9 = 1.0;
        v24 = 1.0;
        v25 = 1.0;
        goto LABEL_9;
      case 0x80000004:
        v23 = 1.0;
        v24 = 0.0;
        v25 = 0.0;
        v9 = 1.0;
        v8 = 0.0;
LABEL_9:
        v10 = v24;
        v26 = v9;
        v11 = v23;
        v23 = v9;
        v24 = v9;
        v20 = v10;
        v12 = v26;
        v26 = v9;
        v19 = v11;
        v13 = v25;
        v25 = v8;
        goto LABEL_16;
      case 0x80000006:
        v19 = 0.0;
        v13 = 1.0;
        v23 = 0.0;
        v20 = 1.0;
        v12 = 1.0;
        v24 = 1.0;
        v25 = 1.0;
        v26 = 1.0;
        goto LABEL_16;
      case 0x80000007:
        v19 = 0.0;
        v20 = 1.0;
        v23 = 1.0;
        v24 = 1.0;
        v22 = 1.0;
        v26 = 1.0;
        v21 = 0.0;
        v15 = 1.0;
        v25 = 0.0;
        v17 = 0.0;
        v16 = 1.0;
        v18 = 1.0;
        v4 = 6;
        goto LABEL_18;
      case 0x80000008:
        v19 = 0.0;
        v5 = 1.0;
        v6 = 1.0;
        v7 = 0.0;
        v23 = 1.0;
        v25 = 1.0;
        v26 = 1.0;
        v24 = 0.0;
LABEL_7:
        v20 = v5;
        v15 = v23;
        v22 = v6;
        v21 = v7;
        v18 = v26;
        v16 = v24;
        v17 = v25;
        v4 = 6;
        goto LABEL_18;
      case 0x80000009:
        v19 = 0.0;
        v23 = 0.0;
        v20 = 1.0;
        v21 = 0.0;
        v24 = 1.0;
        v25 = 1.0;
        v16 = 1.0;
        v26 = 1.0;
        v22 = 1.0;
        v15 = 0.0;
        v4 = 6;
        goto LABEL_17;
      default:
        v19 = 1.0;
        v25 = 1.0;
        v20 = 0.0;
        v13 = 1.0;
        v23 = 1.0;
        v12 = 1.0;
        v26 = 1.0;
        v24 = 0.0;
LABEL_16:
        v22 = v12;
        v21 = v13;
        v16 = v24;
        v15 = v23;
LABEL_17:
        v17 = v25;
        v18 = v26;
LABEL_18:
        v14 = sub_700C70(&v19, &v15, byte_B3F718, v4);
        NiSmartPointer_Set__(v3, (Ni2DBuffer *)v14);
        break;
    }
  }
  return *v3;
}
