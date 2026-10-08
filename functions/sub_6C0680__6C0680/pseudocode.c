// Type-3 cubic position boundary insertion: allocate count+1 0x4C-byte records, insert evaluated position with zeroed local parameters, free old array, replace pointer, then recompute type-3 derived coefficients.
char __cdecl NiPosKey_InsertType3Cubic(float a1, void **a2, unsigned int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  int v9; // eax
  char *v10; // eax
  size_t v12; // [esp+10h] [ebp-38h]
  size_t v13; // [esp+10h] [ebp-38h]
  int v14[2]; // [esp+28h] [ebp-20h] BYREF
  int v15[3]; // [esp+30h] [ebp-18h] BYREF
  unsigned int v16; // [esp+44h] [ebp-4h]

  v3 = (int *)*a2; /*0x6c06b5*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)v14, 0x4Cu) ) /*0x6c06c4*/
    return 0; /*0x6c0809*/
  v4 = *a3 + 1; /*0x6c06d6*/
  v5 = (0x4C * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v14[1] = v6; /*0x6c0700*/
  v16 = 0; /*0x6c0706*/
  if ( v6 ) /*0x6c070e*/
  {
    v7 = (char *)(v6 + 4); /*0x6c071b*/
    *(_DWORD *)v6 = v4; /*0x6c0721*/
    ArrayConstructor( /*0x6c0723*/
      (char *)(v6 + 4),
      0x4Cu,
      v4,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v8 = v7; /*0x6c0728*/
  }
  else
  {
    v8 = 0; /*0x6c072c*/
  }
  LODWORD(v12) = 0x4C * v14[0]; /*0x6c0735*/
  v16 = 0xFFFFFFFF; /*0x6c0738*/
  memcpy(v8, v3, v12); /*0x6c0740*/
  if ( *a3 > v14[0] ) /*0x6c0750*/
  {
    LODWORD(v13) = 0x4C * (*a3 - v14[0]); /*0x6c075c*/
    memcpy(&v8[0x4C * v14[0] + 0x4C], &v3[0x13 * v14[0]], v13); /*0x6c0766*/
  }
  NiPosKey_EvaluateClamped(v15, a1, (int)v3, 3, *a3, 0x4Cu); /*0x6c0783*/
  v9 = 0x4C * v14[0]; /*0x6c0790*/
  *(float *)&v8[v9] = a1; /*0x6c0793*/
  v10 = &v8[v9]; /*0x6c079c*/
  *((_DWORD *)v10 + 1) = v15[0]; /*0x6c079e*/
  *((_DWORD *)v10 + 2) = v15[1]; /*0x6c07a5*/
  *((_DWORD *)v10 + 3) = v15[2]; /*0x6c07ac*/
  *((float *)v10 + 4) = 0.0; /*0x6c07af*/
  *((float *)v10 + 5) = 0.0; /*0x6c07b5*/
  *((float *)v10 + 6) = 0.0; /*0x6c07b8*/
  ++*a3; /*0x6c07bb*/
  if ( v3 ) /*0x6c07c0*/
  {
    _LN21((char *)v3, 0x4Cu, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6c07d1*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6c07d7*/
  }
  *a2 = v8; /*0x6c07e3*/
  sub_6C0170((float *)v8, *a3); /*0x6c07eb*/
  return 1; /*0x6c07f5*/
}
