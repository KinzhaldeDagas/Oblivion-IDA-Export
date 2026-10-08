int __fastcall sub_8E1280(int a1, int a2, __int16 a3, int a4, const void **a5)
{
  int v5; // eax
  const void *v7; // eax
  _DWORD *v8; // ecx
  int result; // eax
  unsigned int v10; // esi

  v5 = *(_DWORD *)(a4 + 0xC); /*0x8e1285*/
  if ( (v5 & 1) != 0 ) /*0x8e128e*/
  {
    v10 = (v5 & 0xFFFFFFFE) + a1 + 4; /*0x8e12ce*/
    if ( *(_DWORD *)((v5 & 0xFFFFFFFE) + a1 + 8) == (*(_DWORD *)((v5 & 0xFFFFFFFE) + a1 + 0xC) & 0x3FFFFFFF) ) /*0x8e12e0*/
      sub_8A6EE0((const void **)v10, 2); /*0x8e12e5*/
    *(_WORD *)(*(_DWORD *)v10 + 2 * *(_DWORD *)(v10 + 4)) = a3; /*0x8e12f7*/
    result = *(_DWORD *)(v10 + 4) + 1; /*0x8e12fe*/
    *(_DWORD *)(v10 + 4) = result; /*0x8e1300*/
  }
  else
  {
    if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x8e12a1*/
      sub_8A6EE0(a5, 8); /*0x8e12a6*/
    v7 = a5[1]; /*0x8e12ae*/
    v8 = (char *)*a5 + 8 * (_DWORD)v7; /*0x8e12b3*/
    a5[1] = (char *)v7 + 1; /*0x8e12b7*/
    *v8 = *(_DWORD *)(a2 + 0xC); /*0x8e12be*/
    result = *(_DWORD *)(a4 + 0xC); /*0x8e12c0*/
    v8[1] = result; /*0x8e12c4*/
  }
  return result; /*0x8e12bd*/
}
