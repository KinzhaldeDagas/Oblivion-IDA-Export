void __thiscall sub_6EDE10(_BYTE *this, signed int a2, signed int a3, int a4, int a5)
{
  signed int v7; // esi
  int v8; // eax
  float *v9; // ecx
  double v10; // st7
  int v11; // eax
  double v12; // st7
  float *v13; // eax
  unsigned int v14; // esi
  int *v15; // edi
  int *v16; // eax
  _DWORD *v17; // eax
  float v18; // [esp+0h] [ebp-74h]
  float v19; // [esp+14h] [ebp-60h]
  float v20; // [esp+18h] [ebp-5Ch]
  float v21; // [esp+1Ch] [ebp-58h]
  float v22[2]; // [esp+20h] [ebp-54h] BYREF
  float v23; // [esp+28h] [ebp-4Ch]
  float v24; // [esp+2Ch] [ebp-48h]
  double v25; // [esp+30h] [ebp-44h]
  int v26[3]; // [esp+38h] [ebp-3Ch] BYREF
  unsigned int v27; // [esp+44h] [ebp-30h]
  int v28; // [esp+48h] [ebp-2Ch]
  int v29; // [esp+4Ch] [ebp-28h]
  _DWORD v30[3]; // [esp+50h] [ebp-24h] BYREF
  unsigned int v31; // [esp+5Ch] [ebp-18h]
  unsigned int v32; // [esp+70h] [ebp-4h]
  float v33; // [esp+78h] [ebp+4h]
  int v34; // [esp+80h] [ebp+Ch]
  _DWORD *v35; // [esp+84h] [ebp+10h]

  if ( a2 >= 5 )
    sub_6ED6D0(".\\FanControls.cpp", 0xD9);
  if ( *this )
  {
    v22[0] = flt_A468FC;
    v22[1] = flt_A63CD4;
    v7 = 0;
    v8 = a4 - (_DWORD)v22;
    v23 = flt_A47800;
    v34 = a4 - (_DWORD)v22;
    v24 = flt_A46B10;
    v20 = 0.0;
    v21 = 0.0;
    while ( 1 )
    {
      v9 = &v22[v7];
      v33 = *(float *)((char *)v9 + v8);
      if ( *v9 > (double)v33 )
        v33 = *v9;
      if ( *(&v23 + v7) < (double)v33 )
        v33 = *(&v23 + v7);
      v25 = v33;
      v10 = sub_6EDD30(this, a2, v7++, a3, a5);
      *(&v19 + v7) = v25 - v10;
      if ( v7 >= 2 )
        break;
      v8 = v34;
    }
    v11 = 0x10 * (a3 + 2 * a2);
    v12 = *(float *)(this + v11 + 0xC38);
    v13 = (float *)(this + v11 + 0xC34);
    v14 = 0;
    v35 = (_DWORD *)(a5 + 0x30 * a3);
    v23 = *v13 * v20 + v12 * v21;
    v15 = (int *)(this + 0x80 * a2 + 0x20 * a3 + 0x25C);
    v24 = v20 * v13[2] + v21 * v13[3];
    do
    {
      v16 = sub_552730(v15, v30);
      v18 = *(&v23 + v14);
      v32 = 0;
      v17 = sub_552310(v16, v26, v18);
      LOBYTE(v32) = 1;
      sub_551DA0(v35, v17);
      if ( v27 )
        FormHeapFree(v27);
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v32 = 0xFFFFFFFF;
      if ( v31 )
        FormHeapFree(v31);
      ++v14;
      v15 += 0x10;
    }
    while ( v14 < 2 );
  }
}
