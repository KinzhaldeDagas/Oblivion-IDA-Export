//
// [4.1 layers 2026-10-03] Verified cdecl(outStagePointer), returns same pointer. Acquired pooled stage has one ref at +5C; release to 772560 on zero, NOT NiRefObject virtual destructor.
_DWORD *__cdecl sub_772630(_DWORD *a1)
{
  unsigned int *v1; // ecx
  _DWORD *v2; // esi
  int **v3; // edi
  _DWORD *v4; // ebx
  int *v5; // eax
  int v6; // ecx
  _DWORD *result; // eax

  v1 = (unsigned int *)unk_B4275C; /*0x772630*/
  v2 = (_DWORD *)(unk_B4275C + 8); /*0x77263c*/
  v3 = (int **)unk_B4275C; /*0x772640*/
  if ( !*v2 ) /*0x772636*/
  {
    v4 = v1 + 3; /*0x772648*/
    sub_772430(v1, v1[3]); /*0x77264c*/
    *v4 *= 2; /*0x772655*/
  }
  v5 = *v3; /*0x772658*/
  v6 = **v3; /*0x77265a*/
  *v5 = v5[--*v2]; /*0x772666*/
  result = a1; /*0x772668*/
  *a1 = v6; /*0x77266d*/
  if ( v6 ) /*0x772670*/
  {
    ++*(_DWORD *)(v6 + 0x5C); /*0x772677*/
    *(_BYTE *)(v6 + 0x5B) = 1; /*0x77267a*/
  }
  else
  {
    *(_BYTE *)0x5B = 1; /*0x77267e*/
  }
  return result; /*0x77266c*/
}
