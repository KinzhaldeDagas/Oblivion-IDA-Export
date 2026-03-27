int __thiscall sub_8DB5C0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // edx
  int i; // eax
  int v12; // edx
  int v13; // edi
  int j; // eax
  int v15; // esi
  double v16; // st7
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD v22[7]; // [esp+10h] [ebp-28h] BYREF
  int v23; // [esp+2Ch] [ebp-Ch]
  _DWORD *v24; // [esp+30h] [ebp-8h]
  int v25; // [esp+34h] [ebp-4h]
  float v26; // [esp+3Ch] [ebp+4h]
  float v27; // [esp+3Ch] [ebp+4h]

  v10 = *(_DWORD *)(a2 + 0xC);
  for ( i = a2; v10; v10 = *(_DWORD *)(v10 + 0xC) )
    i = v10;
  v12 = *(_DWORD *)(a3 + 0xC);
  v13 = i + *(_DWORD *)(i + 0x10);
  for ( j = a3; v12; v12 = *(_DWORD *)(v12 + 0xC) )
    j = v12;
  v15 = *(_DWORD *)(j + 0x10);
  v16 = *(float *)(v15 + j + 0x5C);
  v17 = j + v15;
  v26 = sqrt(v16 * *(float *)(v13 + 0x5C)) * flt_A3F458;
  *(_WORD *)(a8 + 4) = (int)v26;
  v27 = sqrt(*(float *)(v17 + 0x60) * *(float *)(v13 + 0x60)) * flt_A2FFE8;
  *(_BYTE *)(a8 + 6) = (int)v27;
  v22[5] = a8;
  v22[0] = a2;
  v22[4] = a5;
  v22[6] = a7;
  v18 = *(this + 2);
  v22[2] = 0;
  v23 = 0;
  v22[1] = a3;
  v24 = this;
  v25 = a6;
  sub_8DC800(v18, v18, (int)v22);
  v19 = *(_DWORD *)(v13 + 0x98);
  if ( v19 )
    sub_8DBF80(v19, v13, (int)v22);
  v20 = *(_DWORD *)(v17 + 0x98);
  if ( v20 )
    sub_8DBF80(v20, v17, (int)v22);
  return v23;
}
