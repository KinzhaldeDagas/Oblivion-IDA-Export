float *__userpurge sub_798360@<eax>(float *result@<eax>, int a2@<ecx>, float *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // edx
  double v7; // st7
  float *v8; // edx
  double v9; // st2
  double v10; // st7
  int v11; // edx
  double v12; // st7
  float *v13; // edx
  double v14; // st2
  double v15; // st7
  float *v16; // edx
  double v17; // st7
  int v18; // esi
  int v19; // eax
  double v20; // st6
  float *v21; // eax
  int v22; // [esp+0h] [ebp-34h]
  float v23; // [esp+4h] [ebp-30h]
  float v24; // [esp+8h] [ebp-2Ch]
  float v25; // [esp+10h] [ebp-24h]
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+18h] [ebp-1Ch]
  float v28; // [esp+1Ch] [ebp-18h]
  float v29; // [esp+20h] [ebp-14h]
  float v30; // [esp+28h] [ebp-Ch]
  float v31; // [esp+2Ch] [ebp-8h]
  float v32; // [esp+30h] [ebp-4h]
  int v33; // [esp+38h] [ebp+4h]

  if ( *(_DWORD *)(a2 + 0x2C) )
  {
    if ( *(_DWORD *)(a2 + 0x20) )
    {
      result = a3;
      v22 = 0;
      if ( *(_WORD *)(a2 + 0x28) )
      {
        v33 = 0;
        do
        {
          v3 = v33 + *(_DWORD *)(a2 + 0x2C);
          v4 = 0;
          if ( *(_WORD *)(v3 + 0xC) )
          {
            v5 = 0;
            do
            {
              v6 = *(_DWORD *)(v3 + 0x18);
              v7 = *(float *)(v6 + v5);
              v8 = (float *)(v5 + v6);
              v23 = v7;
              v24 = v8[1];
              v9 = v8[2];
              v25 = result[8] * v9 + *result * v23 + result[4] * v24 + result[0xC];
              v26 = result[1] * v23 + result[5] * v24 + result[9] * v9 + result[0xD];
              v10 = v9 * result[0xA] + v24 * result[6] + v23 * result[2] + result[0xE];
              *v8 = v25;
              v8[1] = v26;
              v27 = v10;
              v8[2] = v27;
              if ( *(_BYTE *)(a2 + 1) )
              {
                v11 = *(_DWORD *)(v3 + 0x40);
                v12 = *(float *)(v11 + v5);
                v13 = (float *)(v5 + v11);
                v28 = v12;
                v29 = v13[1];
                v14 = v13[2];
                v30 = result[8] * v14 + *result * v28 + result[4] * v29 + result[0xC];
                v31 = result[5] * v29 + result[1] * v28 + result[9] * v14 + result[0xD];
                v15 = v28 * result[2] + v29 * result[6] + v14 * result[0xA] + result[0xE];
                *v13 = v30;
                v13[1] = v31;
                v32 = v15;
                v13[2] = v32;
              }
              ++v4;
              v5 += 0xC;
            }
            while ( v4 < *(unsigned __int16 *)(v3 + 0xC) );
          }
          v33 += 0x44;
          ++v22;
        }
        while ( v22 < *(unsigned __int16 *)(a2 + 0x28) );
      }
      v16 = 0;
      if ( *(_WORD *)(a2 + 0x1C) )
      {
        v17 = *result;
        v18 = 0;
        do
        {
          v19 = *(_DWORD *)(a2 + 0x20);
          v20 = *(float *)(v19 + v18);
          v21 = (float *)(v18 + v19);
          v16 = (float *)((char *)v16 + 1);
          v18 += 0xC;
          *v21 = v20 * v17;
          v21[1] = v21[1] * v17;
          v21[2] = v21[2] * v17;
          result = (float *)*(unsigned __int16 *)(a2 + 0x1C);
        }
        while ( (int)v16 < (int)result );
      }
    }
  }
  return result;
}
