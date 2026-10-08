// Type-5 step position boundary insertion: reject duplicate time, allocate count+1 0x10-byte records, insert the clamped/held evaluated position in sorted order, free old array, and replace pointer.
char __cdecl NiPosKey_InsertType5Step(float a1, void **a2, unsigned int *a3)
{
  int *v3; // edi
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char *v9; // eax
  size_t v11; // [esp+10h] [ebp-38h]
  size_t v12; // [esp+10h] [ebp-38h]
  int v13[2]; // [esp+28h] [ebp-20h] BYREF
  int v14[3]; // [esp+30h] [ebp-18h] BYREF
  unsigned int v15; // [esp+44h] [ebp-4h]

  v3 = (int *)*a2; /*0x6c27c6*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)v13, 0x10u) ) /*0x6c27d5*/
    return 0; /*0x6c2904*/
  v4 = *a3 + 1; /*0x6c27e8*/
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v13[1] = v6; /*0x6c2812*/
  v15 = 0; /*0x6c2818*/
  if ( v6 ) /*0x6c2820*/
  {
    v7 = (char *)(v6 + 4); /*0x6c282d*/
    *(_DWORD *)v6 = v4; /*0x6c2833*/
    ArrayConstructor( /*0x6c2835*/
      (char *)(v6 + 4),
      0x10u,
      v4,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v8 = v7; /*0x6c283a*/
  }
  else
  {
    v8 = 0; /*0x6c283e*/
  }
  LODWORD(v11) = 0x10 * v13[0]; /*0x6c2847*/
  v15 = 0xFFFFFFFF; /*0x6c284a*/
  memcpy(v8, v3, v11); /*0x6c2852*/
  if ( *a3 > v13[0] ) /*0x6c2863*/
  {
    LODWORD(v12) = 0x10 * (*a3 - v13[0]); /*0x6c286f*/
    memcpy(&v8[0x10 * v13[0] + 0x10], &v3[4 * v13[0]], v12); /*0x6c2879*/
  }
  NiPosKey_EvaluateClamped(v14, a1, (int)v3, 5, *a3, 0x10u); /*0x6c2897*/
  v9 = &v8[0x10 * v13[0]]; /*0x6c28a7*/
  *(float *)v9 = a1; /*0x6c28a9*/
  *((_DWORD *)v9 + 1) = v14[0]; /*0x6c28af*/
  *((_DWORD *)v9 + 2) = v14[1]; /*0x6c28b6*/
  *((_DWORD *)v9 + 3) = v14[2]; /*0x6c28bd*/
  ++*a3; /*0x6c28c0*/
  if ( v3 ) /*0x6c28c9*/
  {
    _LN21((char *)v3, 0x10u, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6c28da*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6c28e0*/
  }
  *a2 = v8; /*0x6c28ec*/
  return 1; /*0x6c28f0*/
}
