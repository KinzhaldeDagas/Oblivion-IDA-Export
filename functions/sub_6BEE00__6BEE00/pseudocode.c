char __cdecl sub_6BEE00(float a1, int **a2, unsigned int *a3)
{
  int *v3; // edi
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char *v9; // eax
  int v11[2]; // [esp+28h] [ebp-24h] BYREF
  int v12[4]; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v13; // [esp+48h] [ebp-4h]

  v3 = *a2; /*0x6bee36*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)v11, 0x14u) ) /*0x6bee45*/
    return 0; /*0x6bef86*/
  v4 = *a3 + 1; /*0x6bee58*/
  v5 = (0x14 * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v11[1] = v6; /*0x6bee82*/
  v13 = 0; /*0x6bee88*/
  if ( v6 ) /*0x6bee90*/
  {
    v7 = (char *)(v6 + 4); /*0x6bee9d*/
    *(_DWORD *)v6 = v4; /*0x6beea3*/
    ArrayConstructor((char *)(v6 + 4), 0x14u, v4, (void (__thiscall *)(char *))sub_6C1F90, Shared_NoOpVirtual_60D0A0); /*0x6beea5*/
    v8 = v7; /*0x6beeaa*/
  }
  else
  {
    v8 = 0; /*0x6beeae*/
  }
  v13 = 0xFFFFFFFF; /*0x6beebe*/
  memcpy(v8, v3, 0x14 * v11[0]); /*0x6beec6*/
  if ( *a3 > v11[0] ) /*0x6beed7*/
    memcpy(&v8[0x14 * v11[0] + 0x14], &v3[5 * v11[0]], 0x14 * (*a3 - v11[0])); /*0x6beef3*/
  sub_6BE280((int)v12, a1, (int)v3, 1, *a3, 0x14); /*0x6bef11*/
  v9 = &v8[0x14 * v11[0]]; /*0x6bef21*/
  *(float *)v9 = a1; /*0x6bef24*/
  *((_DWORD *)v9 + 1) = v12[0]; /*0x6bef2a*/
  *((_DWORD *)v9 + 2) = v12[1]; /*0x6bef31*/
  *((_DWORD *)v9 + 3) = v12[2]; /*0x6bef38*/
  *((_DWORD *)v9 + 4) = v12[3]; /*0x6bef3f*/
  ++*a3; /*0x6bef42*/
  if ( v3 ) /*0x6bef4b*/
  {
    _LN21((char *)v3, 0x14u, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6bef5c*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6bef62*/
  }
  *a2 = (int *)v8; /*0x6bef6e*/
  return 1; /*0x6bef72*/
}
