float *__thiscall sub_738110(int this)
{
  unsigned __int16 *v2; // esi
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // cx
  _WORD *v6; // esi
  unsigned __int16 v7; // dx
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // ebp
  int v12; // eax
  double v13; // st7
  float *v14; // eax
  double v15; // st6
  double v16; // st7
  double v17; // st6
  double v18; // st5
  int v19; // eax
  double v20; // st4
  float *v21; // eax
  int v22; // eax
  double v23; // st4
  float *v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  float *v29; // eax
  unsigned __int16 *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  float *v34; // eax
  unsigned __int16 *v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  float *v39; // eax
  unsigned __int16 v40; // ax
  float *result; // eax
  int v42; // [esp+8h] [ebp-38h]
  unsigned __int16 *v43; // [esp+Ch] [ebp-34h]
  int v44; // [esp+10h] [ebp-30h]
  int v45; // [esp+14h] [ebp-2Ch]
  int v46; // [esp+18h] [ebp-28h]
  float v47; // [esp+1Ch] [ebp-24h] BYREF
  float v48; // [esp+20h] [ebp-20h]
  float v49; // [esp+24h] [ebp-1Ch]
  float v50; // [esp+28h] [ebp-18h]
  float v51; // [esp+2Ch] [ebp-14h]
  float v52; // [esp+30h] [ebp-10h]
  float v53; // [esp+34h] [ebp-Ch]
  float v54; // [esp+38h] [ebp-8h]
  float v55; // [esp+3Ch] [ebp-4h]

  sub_728280(this, 1);
  v2 = *(unsigned __int16 **)(this + 0x48);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x5C))(this);
  if ( v3 )
  {
    v42 = v3;
    while ( 1 )
    {
      v4 = *v2;
      v5 = v2[1];
      v6 = v2 + 1;
      v7 = v6[1];
      v43 = v6 + 2;
      v8 = v4;
      v9 = *(_DWORD *)(this + 0x1C);
      v45 = v5;
      v44 = v8;
      v10 = 0xC * v5;
      v8 *= 0xC;
      v46 = v7;
      v53 = *(float *)(v10 + v9) - *(float *)(v9 + v8);
      v11 = 0xC * v7;
      v54 = *(float *)(v10 + v9 + 4) - *(float *)(v9 + v8 + 4);
      v55 = *(float *)(v10 + v9 + 8) - *(float *)(v9 + v8 + 8);
      v50 = *(float *)(v9 + v11) - *(float *)(v10 + v9);
      v51 = *(float *)(v9 + v11 + 4) - *(float *)(v10 + v9 + 4);
      v52 = *(float *)(v9 + v11 + 8) - *(float *)(v10 + v9 + 8);
      v47 = v52 * v54 - v51 * v55;
      v48 = v55 * v50 - v52 * v53;
      v49 = v53 * v51 - v50 * v54;
      sub_4BFAA0(&v47);
      v12 = *(_DWORD *)(this + 0x20);
      v13 = *(float *)(v12 + v8);
      v14 = (float *)(v8 + v12);
      v15 = v13 + v47;
      v16 = v47;
      *v14 = v15;
      v17 = v48;
      v14[1] = v48 + v14[1];
      v18 = v49;
      v14[2] = v14[2] + v49;
      v19 = *(_DWORD *)(this + 0x20);
      v20 = *(float *)(v19 + v10);
      v21 = (float *)(v10 + v19);
      *v21 = v20 + v16;
      v21[1] = v17 + v21[1];
      v21[2] = v21[2] + v18;
      v22 = *(_DWORD *)(this + 0x20);
      v23 = *(float *)(v22 + v11);
      v24 = (float *)(v11 + v22);
      *v24 = v23 + v16;
      v24[1] = v24[1] + v17;
      v24[2] = v18 + v24[2];
      v25 = *(_DWORD *)(this + 0x4C);
      if ( v25 )
      {
        if ( *(_WORD *)(this + 0x50) == *(_WORD *)(this + 8) )
        {
          v26 = *(unsigned __int16 *)(v25 + 8 * v44);
          if ( (_WORD)v26 )
          {
            v27 = *(_DWORD *)(v25 + 8 * v44 + 4) + 2 * (unsigned __int16)v26;
            do
            {
              v28 = *(unsigned __int16 *)(v27 - 2);
              v27 -= 2;
              v29 = (float *)(*(_DWORD *)(this + 0x20) + 0xC * v28);
              v26 += 0xFFFF;
              *v29 = *v29 + v16;
              v29[1] = v29[1] + v17;
              v29[2] = v29[2] + v18;
            }
            while ( (_WORD)v26 );
          }
          v30 = (unsigned __int16 *)(*(_DWORD *)(this + 0x4C) + 8 * v45);
          v31 = *v30;
          if ( (_WORD)v31 )
          {
            v32 = *((_DWORD *)v30 + 1) + 2 * (unsigned __int16)v31;
            do
            {
              v33 = *(unsigned __int16 *)(v32 - 2);
              v32 -= 2;
              v34 = (float *)(*(_DWORD *)(this + 0x20) + 0xC * v33);
              v31 += 0xFFFF;
              *v34 = v16 + *v34;
              v34[1] = v17 + v34[1];
              v34[2] = v34[2] + v18;
            }
            while ( (_WORD)v31 );
          }
          v35 = (unsigned __int16 *)(*(_DWORD *)(this + 0x4C) + 8 * v46);
          v36 = *v35;
          if ( (_WORD)v36 )
          {
            v37 = *((_DWORD *)v35 + 1) + 2 * (unsigned __int16)v36;
            do
            {
              v38 = *(unsigned __int16 *)(v37 - 2);
              v37 -= 2;
              v39 = (float *)(*(_DWORD *)(this + 0x20) + 0xC * v38);
              v36 += 0xFFFF;
              *v39 = *v39 + v16;
              v39[1] = v17 + v39[1];
              v39[2] = v39[2] + v18;
            }
            while ( (_WORD)v36 );
          }
        }
      }
      if ( !--v42 )
        break;
      v2 = v43;
    }
  }
  v40 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x50))(this);
  result = sub_725890(*(float **)(this + 0x20), v40, 0xC);
  *(_WORD *)(this + 0x2E) |= 2u;
  return result;
}
