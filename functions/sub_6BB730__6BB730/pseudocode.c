char __cdecl sub_6BB730(float a1, int *a2, int *a3)
{
  int *v3; // edi
  int *v4; // ebp
  int v5; // esi
  unsigned int v6; // ecx
  int *v7; // eax
  char *v8; // ebx
  float *v9; // esi
  double v10; // st6
  int *v11; // edi
  int v13; // [esp+1Ch] [ebp-48h]
  size_t v14; // [esp+24h] [ebp-40h]
  size_t v15; // [esp+24h] [ebp-40h]
  int v16; // [esp+3Ch] [ebp-28h] BYREF
  int v17; // [esp+40h] [ebp-24h] BYREF
  int v18; // [esp+44h] [ebp-20h] BYREF
  float v19; // [esp+48h] [ebp-1Ch]
  float v20; // [esp+4Ch] [ebp-18h]
  int v21; // [esp+50h] [ebp-14h] BYREF
  int v22; // [esp+54h] [ebp-10h] BYREF
  unsigned int v23; // [esp+60h] [ebp-4h]

  v3 = a3;
  v4 = (int *)*a2;
  if ( !sub_6D31B0(a1, *a2, *a3, (int)&v16, 0x10) )
    return 0;
  v5 = *a3 + 1;
  v6 = (unsigned __int64)(unsigned int)v5 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v5;
  v7 = (int *)FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
  v22 = (int)v7;
  v8 = 0;
  v23 = 0;
  if ( v7 )
  {
    v8 = (char *)(v7 + 1);
    *v7 = v5;
    ArrayConstructor(v7 + 1, 0x10u, v5, (int)sub_7616D0, TESTexture::ClearComponentReferences);
  }
  LODWORD(v14) = 0x10 * v16;
  v23 = 0xFFFFFFFF;
  memcpy(v8, v4, v14);
  if ( *a3 > (unsigned int)v16 )
  {
    LODWORD(v15) = 0x10 * (*a3 - v16);
    memcpy(&v8[0x10 * v16 + 0x10], &v4[4 * v16], v15);
  }
  *(float *)&v18 = sub_6BB4D0(a1, (float *)v4, 2, *a3, 0x10u);
  v9 = (float *)&v8[0x10 * v16];
  *v9 = a1;
  v10 = *(float *)&v18;
  v9[1] = *(float *)&v18;
  v9[2] = 0.0;
  v9[3] = 0.0;
  if ( v16 )
  {
    if ( v16 != *a3 )
    {
      v11 = (int *)&v8[0x10 * v16];
      v22 = v11[0xFFFFFFFD];
      v21 = v11[0xFFFFFFFC];
      v17 = v11[0xFFFFFFFF];
      v20 = *((float *)v11 + 5);
      v19 = *((float *)v11 + 4);
      v18 = v11[6];
      *(float *)&v13 = v10;
      sub_6D3720(*(float *)&v22, *(float *)&v21, (int)&v17, v20, v19, (int)&v18, a1, v13, (int)&v22, (int)&v21);
      v11[0xFFFFFFFF] = v17;
      v9[2] = *(float *)&v22;
      v9[3] = *(float *)&v21;
      v11[6] = v18;
      v3 = a3;
    }
  }
  ++*v3;
  if ( v4 )
  {
    _LN21(v4, 0x10u, v4[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(v4 + 0xFFFFFFFF));
  }
  *a2 = (int)v8;
  return 1;
}
