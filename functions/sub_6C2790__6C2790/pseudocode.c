char __cdecl sub_6C2790(float a1, int *a2, int *a3)
{
  int *v3; // edi
  int v4; // esi
  unsigned int v5; // ecx
  int *v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char *v9; // eax
  size_t v11; // [esp+10h] [ebp-38h]
  size_t v12; // [esp+10h] [ebp-38h]
  int v13[2]; // [esp+28h] [ebp-20h] BYREF
  int v14[3]; // [esp+30h] [ebp-18h] BYREF
  unsigned int v15; // [esp+44h] [ebp-4h]

  v3 = (int *)*a2;
  if ( !sub_6D31B0(a1, *a2, *a3, (int)v13, 0x10) )
    return 0;
  v4 = *a3 + 1;
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4;
  v6 = (int *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v13[1] = (int)v6;
  v15 = 0;
  if ( v6 )
  {
    v7 = (char *)(v6 + 1);
    *v6 = v4;
    ArrayConstructor(v6 + 1, 0x10u, v4, (int)sub_7616D0, TESTexture::ClearComponentReferences);
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  LODWORD(v11) = 0x10 * v13[0];
  v15 = 0xFFFFFFFF;
  memcpy(v8, v3, v11);
  if ( (unsigned int)*a3 > v13[0] )
  {
    LODWORD(v12) = 0x10 * (*a3 - v13[0]);
    memcpy(&v8[0x10 * v13[0] + 0x10], &v3[4 * v13[0]], v12);
  }
  sub_6BBDC0(v14, a1, (int)v3, 5, *a3, 0x10u);
  v9 = &v8[0x10 * v13[0]];
  *(float *)v9 = a1;
  *((_DWORD *)v9 + 1) = v14[0];
  *((_DWORD *)v9 + 2) = v14[1];
  *((_DWORD *)v9 + 3) = v14[2];
  ++*a3;
  if ( v3 )
  {
    _LN21(v3, 0x10u, v3[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
  }
  *a2 = (int)v8;
  return 1;
}
