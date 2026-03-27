float *__thiscall sub_732F80(unsigned __int16 *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // bx
  int v8; // eax
  int v9; // esi
  int v10; // edi
  float *v11; // ecx
  int v12; // ebx
  int v13; // eax
  double v14; // st7
  float *v15; // eax
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  int v20; // eax
  double v21; // st4
  float *v22; // eax
  int v23; // eax
  double v24; // st4
  float *v25; // eax
  float *result; // eax
  unsigned __int16 v27; // [esp+8h] [ebp-34h]
  int v28; // [esp+Ch] [ebp-30h]
  int v29; // [esp+10h] [ebp-2Ch]
  int v30; // [esp+14h] [ebp-28h]
  float v31; // [esp+18h] [ebp-24h] BYREF
  float v32; // [esp+1Ch] [ebp-20h]
  float v33; // [esp+20h] [ebp-1Ch]
  float v34; // [esp+24h] [ebp-18h]
  float v35; // [esp+28h] [ebp-14h]
  float v36; // [esp+2Ch] [ebp-10h]
  float v37; // [esp+30h] [ebp-Ch]
  float v38; // [esp+34h] [ebp-8h]
  float v39; // [esp+38h] [ebp-4h]

  sub_728280((int)this, 1);
  v2 = *((_DWORD *)this + 0x13);
  v3 = 0;
  v28 = v2;
  v29 = 0;
  if ( *(this + 0x22) )
  {
    while ( 1 )
    {
      v4 = 2 * (unsigned __int16)v3;
      v27 = 2;
      v30 = v4;
      if ( *(_WORD *)(v4 + *((_DWORD *)this + 0x12)) > 2u )
      {
        do
        {
          v5 = *(_WORD *)(v2 + 2 * v27 - 4);
          if ( (v27 & 1) != 0 )
          {
            v6 = *(_WORD *)(v2 + 2 * v27);
            v7 = *(_WORD *)(v2 + 2 * v27 - 2);
          }
          else
          {
            v6 = *(_WORD *)(v2 + 2 * v27 - 2);
            v7 = *(_WORD *)(v2 + 2 * v27);
          }
          if ( v5 != v6 && v6 != v7 && v7 != v5 )
          {
            v8 = *((_DWORD *)this + 7);
            v9 = 0xC * v6;
            v10 = 0xC * v5;
            v11 = (float *)(v9 + v8 + 8);
            v37 = *(float *)(v9 + v8) - *(float *)(v8 + v10);
            v12 = 0xC * v7;
            v38 = *(float *)(v9 + v8 + 4) - *(float *)(v8 + v10 + 4);
            v39 = *v11 - *(float *)(v8 + v10 + 8);
            v34 = *(float *)(v12 + v8) - *(float *)(v9 + v8);
            v35 = *(float *)(v12 + v8 + 4) - *(float *)(v9 + v8 + 4);
            v36 = *(float *)(v12 + v8 + 8) - *v11;
            v31 = v36 * v38 - v35 * v39;
            v32 = v39 * v34 - v36 * v37;
            v33 = v37 * v35 - v34 * v38;
            sub_4BFAA0(&v31);
            v13 = *((_DWORD *)this + 8);
            v14 = *(float *)(v13 + v10);
            v15 = (float *)(v10 + v13);
            v16 = v14 + v31;
            v17 = v31;
            *v15 = v16;
            v18 = v32;
            v15[1] = v15[1] + v32;
            v19 = v33;
            v4 = v30;
            v15[2] = v15[2] + v33;
            v20 = *((_DWORD *)this + 8);
            v21 = *(float *)(v20 + v9);
            v22 = (float *)(v9 + v20);
            v2 = v28;
            *v22 = v21 + v17;
            v22[1] = v22[1] + v18;
            v22[2] = v22[2] + v19;
            v23 = *((_DWORD *)this + 8);
            v24 = *(float *)(v23 + v12);
            v25 = (float *)(v12 + v23);
            *v25 = v17 + v24;
            v25[1] = v18 + v25[1];
            v25[2] = v19 + v25[2];
          }
          ++v27;
        }
        while ( v27 < *(_WORD *)(v4 + *((_DWORD *)this + 0x12)) );
        v3 = v29;
      }
      ++v3;
      v28 = v2 + 2 * *(unsigned __int16 *)(v4 + *((_DWORD *)this + 0x12));
      v29 = v3;
      if ( (unsigned __int16)v3 >= *(this + 0x22) )
        break;
      v2 += 2 * *(unsigned __int16 *)(v4 + *((_DWORD *)this + 0x12));
    }
  }
  result = sub_725890(*((float **)this + 8), *(this + 4), 0xC);
  *(this + 0x17) |= 2u;
  return result;
}
