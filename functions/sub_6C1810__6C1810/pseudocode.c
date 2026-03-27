char __cdecl sub_6C1810(float a1, int *a2, int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int *v6; // eax
  char *v7; // ebx
  char *v8; // esi
  float *v9; // eax
  size_t v11; // [esp+10h] [ebp-2Ch]
  size_t v12; // [esp+10h] [ebp-2Ch]
  int v13; // [esp+28h] [ebp-14h] BYREF
  float v14; // [esp+2Ch] [ebp-10h]
  unsigned int v15; // [esp+38h] [ebp-4h]

  v3 = (int *)*a2;
  if ( !sub_6D31B0(a1, *a2, *a3, (int)&v13, 0x1C) )
    return 0;
  v4 = *a3 + 1;
  v5 = (0x1C * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v4;
  v6 = (int *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v14 = *(float *)&v6;
  v15 = 0;
  if ( v6 )
  {
    v7 = (char *)(v6 + 1);
    *v6 = v4;
    ArrayConstructor(v6 + 1, 0x1Cu, v4, (int)sub_7616D0, TESTexture::ClearComponentReferences);
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  LODWORD(v11) = 0x1C * v13;
  v15 = 0xFFFFFFFF;
  memcpy(v8, v3, v11);
  if ( *a3 > (unsigned int)v13 )
  {
    LODWORD(v12) = 0x1C * (*a3 - v13);
    memcpy(&v8[0x1C * v13 + 0x1C], &v3[7 * v13], v12);
  }
  v14 = sub_6BB4D0(a1, (float *)v3, 3, *a3, 0x1Cu);
  v9 = (float *)&v8[0x1C * v13];
  *v9 = a1;
  v9[1] = v14;
  v9[2] = 0.0;
  v9[3] = 0.0;
  v9[4] = 0.0;
  ++*a3;
  if ( v3 )
  {
    _LN21(v3, 0x1Cu, v3[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
  }
  *a2 = (int)v8;
  sub_6C1650((float *)v8, *a3);
  return 1;
}
