void __thiscall sub_74EE70(float *this, float a2, unsigned __int16 a3, int a4)
{
  int v5; // ebp
  int v6; // edi
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  bool v9; // cf
  unsigned __int16 v10; // cx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  int v17; // [esp+Ch] [ebp-4Ch]
  float v18; // [esp+10h] [ebp-48h]
  float v19; // [esp+14h] [ebp-44h]
  float v20; // [esp+14h] [ebp-44h]
  float v21; // [esp+18h] [ebp-40h]
  float v22; // [esp+18h] [ebp-40h]
  float v23; // [esp+18h] [ebp-40h]
  float v24; // [esp+1Ch] [ebp-3Ch]
  float v25; // [esp+20h] [ebp-38h]
  float v26; // [esp+20h] [ebp-38h]
  int v27; // [esp+24h] [ebp-34h]
  int i; // [esp+28h] [ebp-30h]
  float v29; // [esp+2Ch] [ebp-2Ch]
  float v30; // [esp+2Ch] [ebp-2Ch]
  float v31; // [esp+2Ch] [ebp-2Ch]
  float v32; // [esp+30h] [ebp-28h]
  float v33; // [esp+30h] [ebp-28h]
  int v34; // [esp+34h] [ebp-24h]
  int v35; // [esp+38h] [ebp-20h]
  int v36; // [esp+3Ch] [ebp-1Ch]
  float v37; // [esp+40h] [ebp-18h]
  float v38; // [esp+44h] [ebp-14h]
  float v39; // [esp+4Ch] [ebp-Ch]
  float v40; // [esp+50h] [ebp-8h]
  float v41; // [esp+54h] [ebp-4h]

  v5 = *(_DWORD *)(*((_DWORD *)this + 4) + 0xB4);
  v6 = 0;
  v34 = *(_DWORD *)(v5 + 0x1C);
  v35 = *(_DWORD *)(v5 + 0x24);
  v27 = *(_DWORD *)(v5 + 0x44);
  v36 = *(_DWORD *)(v5 + 0x4C);
  for ( i = 0; (unsigned __int16)v6 < a3; i = ++v6 )
  {
    v24 = *(float *)(a4 + 4 * (unsigned __int16)v6);
    v25 = (double)rand() / dbl_A3D5A8;
    v26 = (v25 - dbl_A2FAA0) * *(this + 0x13) + *(this + 0x12);
    if ( v26 >= (double)v24 )
    {
      v7 = *(_WORD *)(v5 + 0x64);
      if ( v7 )
      {
        v10 = *(_WORD *)(v5 + 0x66);
        if ( v7 + v10 >= *(unsigned __int16 *)(v5 + 8) )
          return;
        *(_WORD *)(v5 + 0x64) = v7 + 1;
        v17 = (unsigned __int16)(v7 + v10);
        v8 = v7 + v10;
      }
      else
      {
        v8 = *(_WORD *)(v5 + 0x48);
        v9 = v8 < *(_WORD *)(v5 + 8);
        *(_WORD *)(v5 + 0x66) = v8;
        if ( !v9 )
          return;
        v17 = v8;
        *(_WORD *)(v5 + 0x64) = 1;
      }
      if ( v8 == word_A877E8 )
        return;
      v11 = v8;
      v12 = *(_DWORD *)(v5 + 0x5C) + 0x1C * v8;
      v21 = (double)rand() / dbl_A3D5A8;
      v32 = (v21 - dbl_A2FAA0) * *(this + 7) + *(this + 6);
      v13 = rand();
      v22 = ((double)v13 + (double)v13) / dbl_A3D5A8 - dbl_A2F928;
      v23 = *(this + 9) * v22 + *(this + 8);
      v14 = rand();
      v19 = ((double)v14 + (double)v14) / dbl_A3D5A8 - dbl_A2F928;
      v18 = *(this + 0xB) * v19 + *(this + 0xA);
      v20 = sin(v23);
      v29 = cos(v18);
      v37 = v29 * v20;
      v30 = sin(v18);
      v38 = v30 * v20;
      v31 = cos(v23);
      *(_WORD *)(v12 + 0x18) = 0;
      v39 = v37 * v32;
      *(float *)v12 = v39;
      v40 = v38 * v32;
      *(float *)(v12 + 4) = v40;
      v41 = v32 * v31;
      *(float *)(v12 + 8) = v41;
      *(float *)(v12 + 0xC) = v24;
      *(float *)(v12 + 0x10) = v26;
      (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 0x60))(this, v34 + 0xC * v11, v12);
      if ( v35 )
      {
        v15 = (float *)(v35 + 0x10 * v11);
        *v15 = *(this + 0xC);
        v15[1] = *(this + 0xD);
        v15[2] = *(this + 0xE);
        v15[3] = *(this + 0xF);
      }
      if ( v27 )
      {
        v16 = (double)rand();
        v33 = (v16 + v16) / dbl_A3D5A8 - dbl_A2F928;
        *(float *)(v27 + 4 * v11) = *(this + 0x11) * v33 + *(this + 0x10);
      }
      if ( v36 )
        *(float *)(v36 + 4 * v11) = 1.0;
      *(float *)(v12 + 0x14) = a2 - *(float *)(v12 + 0xC);
      sub_749510(*((_DWORD **)this + 4), v17);
      v6 = i;
    }
  }
}
