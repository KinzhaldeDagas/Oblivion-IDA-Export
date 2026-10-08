char __cdecl sub_6C2AB0(float a1, int **a2, unsigned int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char *v9; // eax
  int v11[2]; // [esp+28h] [ebp-24h] BYREF
  int v12[4]; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v13; // [esp+48h] [ebp-4h]

  v3 = *a2; /*0x6c2ae5*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)v11, 0x14u) ) /*0x6c2af4*/
    return 0; /*0x6c2c3f*/
  v4 = *a3 + 1; /*0x6c2b06*/
  v5 = (0x14 * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v11[1] = v6; /*0x6c2b30*/
  v13 = 0; /*0x6c2b36*/
  if ( v6 ) /*0x6c2b3e*/
  {
    v7 = (char *)(v6 + 4); /*0x6c2b4b*/
    *(_DWORD *)v6 = v4; /*0x6c2b51*/
    ArrayConstructor((char *)(v6 + 4), 0x14u, v4, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6c2b53*/
    v8 = v7; /*0x6c2b58*/
  }
  else
  {
    v8 = 0; /*0x6c2b5c*/
  }
  v13 = 0xFFFFFFFF; /*0x6c2b6c*/
  memcpy(v8, v3, 0x14 * v11[0]); /*0x6c2b74*/
  if ( *a3 > v11[0] ) /*0x6c2b84*/
    memcpy(&v8[0x14 * v11[0] + 0x14], &v3[5 * v11[0]], 0x14 * (*a3 - v11[0])); /*0x6c2ba0*/
  sub_6BD1F0(v12, a1, (int)v3, 5, *a3, 0x14); /*0x6c2bbd*/
  v9 = &v8[0x14 * v11[0]]; /*0x6c2bcd*/
  *(float *)v9 = a1; /*0x6c2bd0*/
  *((_DWORD *)v9 + 1) = v12[0]; /*0x6c2bd6*/
  *((_DWORD *)v9 + 2) = v12[1]; /*0x6c2bdd*/
  *((_DWORD *)v9 + 3) = v12[2]; /*0x6c2be4*/
  *((_DWORD *)v9 + 4) = v12[3]; /*0x6c2beb*/
  ++*a3; /*0x6c2bee*/
  if ( v3 ) /*0x6c2bf6*/
  {
    _LN21((char *)v3, 0x14u, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6c2c07*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6c2c0d*/
  }
  *a2 = (int *)v8; /*0x6c2c19*/
  sub_6BD310((int)v8, *a3, 0x14u); /*0x6c2c21*/
  return 1; /*0x6c2c2b*/
}
