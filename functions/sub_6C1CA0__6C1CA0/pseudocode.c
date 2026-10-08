char __cdecl sub_6C1CA0(float a1, int **a2, unsigned int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char v9; // al
  float *v10; // ecx
  int v12[2]; // [esp+28h] [ebp-14h] BYREF
  unsigned int v13; // [esp+38h] [ebp-4h]

  v3 = *a2; /*0x6c1cd5*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)v12, 8u) ) /*0x6c1ce4*/
    return 0; /*0x6c1df9*/
  v4 = *a3 + 1; /*0x6c1cf6*/
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v12[1] = v6; /*0x6c1d20*/
  v13 = 0; /*0x6c1d26*/
  if ( v6 ) /*0x6c1d2e*/
  {
    v7 = (char *)(v6 + 4); /*0x6c1d3b*/
    *(_DWORD *)v6 = v4; /*0x6c1d41*/
    ArrayConstructor( /*0x6c1d43*/
      (char *)(v6 + 4),
      8u,
      v4,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v8 = v7; /*0x6c1d48*/
  }
  else
  {
    v8 = 0; /*0x6c1d4c*/
  }
  v13 = 0xFFFFFFFF; /*0x6c1d5c*/
  memcpy(v8, v3, 8 * v12[0]); /*0x6c1d64*/
  if ( *a3 > v12[0] ) /*0x6c1d74*/
    memcpy(&v8[8 * v12[0] + 8], &v3[2 * v12[0]], 8 * (*a3 - v12[0])); /*0x6c1d89*/
  v9 = sub_6BDDC0(a1, (int)v3, 5, *(float *)a3, 8); /*0x6c1da1*/
  v10 = (float *)&v8[8 * v12[0]]; /*0x6c1dae*/
  *v10 = a1; /*0x6c1db1*/
  *((_BYTE *)v10 + 4) = v9; /*0x6c1db3*/
  ++*a3; /*0x6c1db6*/
  if ( v3 ) /*0x6c1dbe*/
  {
    _LN21((char *)v3, 8u, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6c1dcf*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6c1dd5*/
  }
  *a2 = (int *)v8; /*0x6c1de1*/
  return 1; /*0x6c1de5*/
}
