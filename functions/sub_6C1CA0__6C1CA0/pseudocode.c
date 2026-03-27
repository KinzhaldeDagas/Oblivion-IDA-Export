char __cdecl sub_6C1CA0(float a1, int *a2, int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int *v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char v9; // al
  float *v10; // ecx
  size_t v12; // [esp+10h] [ebp-2Ch]
  size_t v13; // [esp+10h] [ebp-2Ch]
  int v14[2]; // [esp+28h] [ebp-14h] BYREF
  unsigned int v15; // [esp+38h] [ebp-4h]

  v3 = (int *)*a2;
  if ( !sub_6D31B0(a1, *a2, *a3, (int)v14, 8) )
    return 0;
  v4 = *a3 + 1;
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4;
  v6 = (int *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v14[1] = (int)v6;
  v15 = 0;
  if ( v6 )
  {
    v7 = (char *)(v6 + 1);
    *v6 = v4;
    ArrayConstructor(v6 + 1, 8u, v4, (int)sub_7616D0, TESTexture::ClearComponentReferences);
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  LODWORD(v12) = 8 * v14[0];
  v15 = 0xFFFFFFFF;
  memcpy(v8, v3, v12);
  if ( (unsigned int)*a3 > v14[0] )
  {
    LODWORD(v13) = 8 * (*a3 - v14[0]);
    memcpy(&v8[8 * v14[0] + 8], &v3[2 * v14[0]], v13);
  }
  v9 = sub_6BDDC0(a1, (int)v3, 5, *a3, 8u);
  v10 = (float *)&v8[8 * v14[0]];
  *v10 = a1;
  *((_BYTE *)v10 + 4) = v9;
  ++*a3;
  if ( v3 )
  {
    _LN21(v3, 8u, v3[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
  }
  *a2 = (int)v8;
  return 1;
}
