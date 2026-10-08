char __cdecl sub_6C1010(float a1, int **a2, unsigned int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char *v9; // eax
  int v10; // edx
  int v12[2]; // [esp+28h] [ebp-24h] BYREF
  int v13[4]; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v14; // [esp+48h] [ebp-4h]

  v3 = *a2; /*0x6c1045*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)v12, 0x40u) ) /*0x6c1054*/
    return 0; /*0x6c119f*/
  v4 = *a3 + 1; /*0x6c1066*/
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1A != 0 ? 0xFFFFFFFF : v4 << 6;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v12[1] = v6; /*0x6c1090*/
  v14 = 0; /*0x6c1096*/
  if ( v6 ) /*0x6c109e*/
  {
    v7 = (char *)(v6 + 4); /*0x6c10ab*/
    *(_DWORD *)v6 = v4; /*0x6c10b1*/
    ArrayConstructor((char *)(v6 + 4), 0x40u, v4, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6c10b3*/
    v8 = v7; /*0x6c10b8*/
  }
  else
  {
    v8 = 0; /*0x6c10bc*/
  }
  v14 = 0xFFFFFFFF; /*0x6c10c8*/
  memcpy(v8, v3, v12[0] << 6); /*0x6c10d0*/
  if ( *a3 > v12[0] ) /*0x6c10e0*/
    memcpy(&v8[0x40 * v12[0] + 0x40], &v3[0x10 * v12[0]], (*a3 - v12[0]) << 6); /*0x6c10f6*/
  sub_6BD1F0(v13, a1, (int)v3, 3, *a3, 0x40); /*0x6c1113*/
  v9 = &v8[0x40 * v12[0]]; /*0x6c1123*/
  *(float *)v9 = a1; /*0x6c1125*/
  *((_DWORD *)v9 + 1) = v13[0]; /*0x6c112d*/
  *((_DWORD *)v9 + 2) = v13[1]; /*0x6c1134*/
  *((_DWORD *)v9 + 3) = v13[2]; /*0x6c113b*/
  v10 = v13[3]; /*0x6c113e*/
  *((float *)v9 + 5) = 0.0; /*0x6c1142*/
  *((float *)v9 + 6) = 0.0; /*0x6c1145*/
  *((_DWORD *)v9 + 4) = v10; /*0x6c1148*/
  *((float *)v9 + 7) = 0.0; /*0x6c114b*/
  ++*a3; /*0x6c114e*/
  if ( v3 ) /*0x6c1156*/
  {
    _LN21((char *)v3, 0x40u, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6c1167*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6c116d*/
  }
  *a2 = (int *)v8; /*0x6c1179*/
  sub_6C0EC0((float *)v8, *a3, 0x40u); /*0x6c1181*/
  return 1; /*0x6c118b*/
}
