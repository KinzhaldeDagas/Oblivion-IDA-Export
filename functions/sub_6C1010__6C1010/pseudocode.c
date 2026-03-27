char __cdecl sub_6C1010(float a1, int *a2, int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int *v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char *v9; // eax
  int v10; // edx
  size_t v12; // [esp+10h] [ebp-3Ch]
  size_t v13; // [esp+10h] [ebp-3Ch]
  int v14[2]; // [esp+28h] [ebp-24h] BYREF
  int v15[4]; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v16; // [esp+48h] [ebp-4h]

  v3 = (int *)*a2;
  if ( !sub_6D31B0(a1, *a2, *a3, (int)v14, 0x40) )
    return 0;
  v4 = *a3 + 1;
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1A != 0 ? 0xFFFFFFFF : v4 << 6;
  v6 = (int *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v14[1] = (int)v6;
  v16 = 0;
  if ( v6 )
  {
    v7 = (char *)(v6 + 1);
    *v6 = v4;
    ArrayConstructor(v6 + 1, 0x40u, v4, (int)sub_6C0AD0, TESTexture::ClearComponentReferences);
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  LODWORD(v12) = v14[0] << 6;
  v16 = 0xFFFFFFFF;
  memcpy(v8, v3, v12);
  if ( (unsigned int)*a3 > v14[0] )
  {
    LODWORD(v13) = (*a3 - v14[0]) << 6;
    memcpy(&v8[0x40 * v14[0] + 0x40], &v3[0x10 * v14[0]], v13);
  }
  sub_6BD1F0(v15, a1, (int)v3, 3, *a3, 0x40u);
  v9 = &v8[0x40 * v14[0]];
  *(float *)v9 = a1;
  *((_DWORD *)v9 + 1) = v15[0];
  *((_DWORD *)v9 + 2) = v15[1];
  *((_DWORD *)v9 + 3) = v15[2];
  v10 = v15[3];
  *((float *)v9 + 5) = 0.0;
  *((float *)v9 + 6) = 0.0;
  *((_DWORD *)v9 + 4) = v10;
  *((float *)v9 + 7) = 0.0;
  ++*a3;
  if ( v3 )
  {
    _LN21(v3, 0x40u, v3[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
  }
  *a2 = (int)v8;
  sub_6C0EC0((float *)v8, *a3, 0x40u);
  return 1;
}
