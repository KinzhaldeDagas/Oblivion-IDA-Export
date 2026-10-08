char __cdecl sub_6C1810(float a1, int **a2, unsigned int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  float *v9; // eax
  int v11; // [esp+28h] [ebp-14h] BYREF
  float v12; // [esp+2Ch] [ebp-10h]
  unsigned int v13; // [esp+38h] [ebp-4h]

  v3 = *a2; /*0x6c1845*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)&v11, 0x1Cu) ) /*0x6c1854*/
    return 0; /*0x6c19ac*/
  v4 = *a3 + 1; /*0x6c1866*/
  v5 = (0x1C * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v12 = *(float *)&v6; /*0x6c1890*/
  v13 = 0; /*0x6c1896*/
  if ( v6 ) /*0x6c189e*/
  {
    v7 = (char *)(v6 + 4); /*0x6c18ab*/
    *(_DWORD *)v6 = v4; /*0x6c18b1*/
    ArrayConstructor( /*0x6c18b3*/
      (char *)(v6 + 4),
      0x1Cu,
      v4,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v8 = v7; /*0x6c18b8*/
  }
  else
  {
    v8 = 0; /*0x6c18bc*/
  }
  v13 = 0xFFFFFFFF; /*0x6c18d2*/
  memcpy(v8, v3, 0x1C * v11); /*0x6c18da*/
  if ( *a3 > v11 ) /*0x6c18ea*/
    memcpy(&v8[0x1C * v11 + 0x1C], &v3[7 * v11], 0x1C * (*a3 - v11)); /*0x6c1912*/
  v12 = sub_6BB4D0(a1, (float *)v3, 3, *(float *)a3, 0x1C); /*0x6c1933*/
  v9 = (float *)&v8[0x1C * v11]; /*0x6c1944*/
  *v9 = a1; /*0x6c1947*/
  v9[1] = v12; /*0x6c1950*/
  v9[2] = 0.0; /*0x6c1955*/
  v9[3] = 0.0; /*0x6c1958*/
  v9[4] = 0.0; /*0x6c195b*/
  ++*a3; /*0x6c195e*/
  if ( v3 ) /*0x6c1963*/
  {
    _LN21((char *)v3, 0x1Cu, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6c1974*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6c197a*/
  }
  *a2 = (int *)v8; /*0x6c1986*/
  sub_6C1650((float *)v8, *a3); /*0x6c198e*/
  return 1; /*0x6c1998*/
}
