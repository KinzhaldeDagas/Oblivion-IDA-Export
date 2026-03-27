char __cdecl sub_6C0680(float a1, int *a2, int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int *v6; // eax
  char *v7; // ebx
  char *v8; // esi
  int v9; // eax
  char *v10; // eax
  size_t v12; // [esp+10h] [ebp-38h]
  size_t v13; // [esp+10h] [ebp-38h]
  int v14[2]; // [esp+28h] [ebp-20h] BYREF
  int v15[3]; // [esp+30h] [ebp-18h] BYREF
  unsigned int v16; // [esp+44h] [ebp-4h]

  v3 = (int *)*a2;
  if ( !sub_6D31B0(a1, *a2, *a3, (int)v14, 0x4C) )
    return 0;
  v4 = *a3 + 1;
  v5 = (0x4C * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * v4;
  v6 = (int *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v14[1] = (int)v6;
  v16 = 0;
  if ( v6 )
  {
    v7 = (char *)(v6 + 1);
    *v6 = v4;
    ArrayConstructor(v6 + 1, 0x4Cu, v4, (int)sub_7616D0, TESTexture::ClearComponentReferences);
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  LODWORD(v12) = 0x4C * v14[0];
  v16 = 0xFFFFFFFF;
  memcpy(v8, v3, v12);
  if ( (unsigned int)*a3 > v14[0] )
  {
    LODWORD(v13) = 0x4C * (*a3 - v14[0]);
    memcpy(&v8[0x4C * v14[0] + 0x4C], &v3[0x13 * v14[0]], v13);
  }
  sub_6BBDC0(v15, a1, (int)v3, 3, *a3, 0x4Cu);
  v9 = 0x4C * v14[0];
  *(float *)&v8[v9] = a1;
  v10 = &v8[v9];
  *((_DWORD *)v10 + 1) = v15[0];
  *((_DWORD *)v10 + 2) = v15[1];
  *((_DWORD *)v10 + 3) = v15[2];
  *((float *)v10 + 4) = 0.0;
  *((float *)v10 + 5) = 0.0;
  *((float *)v10 + 6) = 0.0;
  ++*a3;
  if ( v3 )
  {
    _LN21(v3, 0x4Cu, v3[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
  }
  *a2 = (int)v8;
  sub_6C0170((float *)v8, *a3);
  return 1;
}
