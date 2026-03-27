char __cdecl sub_6BC9A0(float a1, void **a2, int *a3)
{
  int v3; // edx
  int *v4; // edi
  int v5; // esi
  unsigned int v6; // ecx
  float v7; // eax
  char *v8; // ebx
  char *v9; // esi
  float v10; // ecx
  float v11; // edx
  char *v12; // edi
  float v13; // eax
  int v14; // ecx
  int v15; // edx
  double v16; // st6
  int v17; // eax
  float v18; // ecx
  float v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v27; // [esp+1Ch] [ebp-9Ch]
  size_t v28; // [esp+24h] [ebp-94h]
  size_t v29; // [esp+24h] [ebp-94h]
  int v30; // [esp+3Ch] [ebp-7Ch] BYREF
  float v31; // [esp+40h] [ebp-78h]
  float v32; // [esp+44h] [ebp-74h]
  void *v33; // [esp+48h] [ebp-70h]
  int v34; // [esp+4Ch] [ebp-6Ch] BYREF
  int v35; // [esp+50h] [ebp-68h] BYREF
  int v36; // [esp+54h] [ebp-64h] BYREF
  int v37; // [esp+58h] [ebp-60h] BYREF
  int v38; // [esp+5Ch] [ebp-5Ch] BYREF
  int v39[2]; // [esp+60h] [ebp-58h] BYREF
  int v40; // [esp+68h] [ebp-50h]
  int v41; // [esp+6Ch] [ebp-4Ch]
  float v42; // [esp+70h] [ebp-48h]
  float v43; // [esp+74h] [ebp-44h]
  float v44; // [esp+78h] [ebp-40h]
  float v45; // [esp+7Ch] [ebp-3Ch]
  float v46; // [esp+80h] [ebp-38h]
  float v47; // [esp+84h] [ebp-34h]
  int v48; // [esp+88h] [ebp-30h] BYREF
  int v49; // [esp+8Ch] [ebp-2Ch] BYREF
  int v50; // [esp+90h] [ebp-28h] BYREF
  int v51; // [esp+94h] [ebp-24h] BYREF
  int v52; // [esp+98h] [ebp-20h] BYREF
  int v53; // [esp+9Ch] [ebp-1Ch] BYREF
  int v54[3]; // [esp+A0h] [ebp-18h] BYREF
  unsigned int v55; // [esp+B4h] [ebp-4h]

  v3 = *a3;
  v4 = (int *)*a2;
  v33 = v4;
  if ( !sub_6D31B0(a1, (int)v4, v3, (int)&v30, 0x40) )
    return 0;
  v5 = *a3 + 1;
  v6 = (unsigned __int64)(unsigned int)v5 >> 0x1A != 0 ? 0xFFFFFFFF : v5 << 6;
  v7 = COERCE_FLOAT(FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4));
  v32 = v7;
  v8 = 0;
  v55 = 0;
  if ( v7 != 0.0 )
  {
    v8 = (char *)(LODWORD(v7) + 4);
    *(_DWORD *)LODWORD(v7) = v5;
    ArrayConstructor((void *)(LODWORD(v7) + 4), 0x40u, v5, (int)sub_7616D0, TESTexture::ClearComponentReferences);
  }
  LODWORD(v28) = v30 << 6;
  v55 = 0xFFFFFFFF;
  memcpy(v8, v4, v28);
  if ( *a3 > (unsigned int)v30 )
  {
    LODWORD(v29) = (*a3 - v30) << 6;
    memcpy(&v8[0x40 * v30 + 0x40], &v4[0x10 * v30], v29);
  }
  sub_6BBDC0(v54, a1, (int)v4, 2, *a3, 0x40u);
  v9 = &v8[0x40 * v30];
  *(float *)v9 = a1;
  *((_DWORD *)v9 + 1) = v54[0];
  *((_DWORD *)v9 + 2) = v54[1];
  *((_DWORD *)v9 + 3) = v54[2];
  *((float *)v9 + 4) = Vector3_InitValue_;
  *((float *)v9 + 5) = *(&Vector3_InitValue_ + 1);
  *((float *)v9 + 6) = dword_B3F9B0;
  *((float *)v9 + 7) = Vector3_InitValue_;
  *((float *)v9 + 8) = *(&Vector3_InitValue_ + 1);
  *((float *)v9 + 9) = dword_B3F9B0;
  if ( v30 )
  {
    if ( v30 != *a3 )
    {
      v10 = *(float *)&v8[0x40 * v30 - 0x38];
      v11 = *(float *)&v8[0x40 * v30 - 0x34];
      v32 = *(float *)&v8[0x40 * v30 - 0x40];
      v12 = &v8[0x40 * v30];
      v45 = *((float *)v12 + 0xFFFFFFF1);
      v34 = *((_DWORD *)v12 + 0xFFFFFFF7);
      v13 = *((float *)v9 + 1);
      v46 = v10;
      v35 = *((_DWORD *)v12 + 0xFFFFFFF8);
      v14 = *((_DWORD *)v9 + 2);
      v47 = v11;
      v36 = *((_DWORD *)v12 + 0xFFFFFFF9);
      v15 = *((_DWORD *)v9 + 3);
      v31 = *((float *)v12 + 0x10);
      *(float *)&v39[1] = v13;
      v16 = v13;
      v42 = *((float *)v12 + 0x11);
      v17 = *((_DWORD *)v12 + 0x14);
      v40 = v14;
      v18 = *((float *)v12 + 0x12);
      v41 = v15;
      v19 = *((float *)v12 + 0x13);
      v37 = v17;
      v43 = v18;
      v38 = *((_DWORD *)v12 + 0x15);
      *(float *)&v27 = v16;
      v44 = v19;
      v39[0] = *((_DWORD *)v12 + 0x16);
      sub_6D3720(v45, v32, (int)&v34, v42, v31, (int)&v37, a1, v27, (int)&v48, (int)&v51);
      sub_6D3720(v46, v32, (int)&v35, v43, v31, (int)&v38, a1, v40, (int)&v49, (int)&v52);
      sub_6D3720(v47, v32, (int)&v36, v44, v31, (int)v39, a1, v41, (int)&v50, (int)&v53);
      *((_DWORD *)v12 + 0xFFFFFFF7) = v34;
      *((_DWORD *)v12 + 0xFFFFFFF8) = v35;
      *((_DWORD *)v12 + 0xFFFFFFF9) = v36;
      v20 = v49;
      v21 = v50;
      *((_DWORD *)v9 + 4) = v48;
      v22 = v51;
      *((_DWORD *)v9 + 5) = v20;
      v23 = v52;
      *((_DWORD *)v9 + 6) = v21;
      v24 = v53;
      *((_DWORD *)v9 + 7) = v22;
      v25 = v37;
      *((_DWORD *)v9 + 8) = v23;
      *((_DWORD *)v9 + 9) = v24;
      *((_DWORD *)v12 + 0x14) = v25;
      *((_DWORD *)v12 + 0x15) = v38;
      *((_DWORD *)v12 + 0x16) = v39[0];
      v4 = (int *)v33;
    }
  }
  ++*a3;
  if ( v4 )
  {
    _LN21(v4, 0x40u, v4[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(v4 + 0xFFFFFFFF));
  }
  *a2 = v8;
  sub_6BC600((int)v8, *a3);
  return 1;
}
