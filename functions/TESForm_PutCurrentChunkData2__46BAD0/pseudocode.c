void *__cdecl TESForm_PutCurrentChunkData2(int a1, __int16 a2)
{
  int v2; // esi
  FreeEntry *v3; // eax
  char *v4; // eax
  void *result; // eax
  size_t v6; // [esp-4h] [ebp-8h]

  v2 = *(_DWORD *)&word_B33C0E[5]; /*0x46bad6*/
  LODWORD(v6) = *(_DWORD *)&word_B33C0E[5] + 8; /*0x46badb*/
  *(_DWORD *)&word_B33C0E[5] = v6; /*0x46badc*/
  v3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, *(void **)&word_B33C0E[3], v6); /*0x46baec*/
  *(_DWORD *)&word_B33C0E[3] = v3; /*0x46baf5*/
  v4 = (char *)v3 + v2; /*0x46bafa*/
  *((_WORD *)v4 + 2) = 2; /*0x46bafc*/
  *(_DWORD *)v4 = a1; /*0x46bb04*/
  *((_WORD *)v4 + 2) = *((_WORD *)v4 + 2); /*0x46bb0f*/
  result = *(void **)&word_B33C0E[3]; /*0x46bb13*/
  *(_WORD *)(*(_DWORD *)&word_B33C0E[3] + v2 + 6) = a2; /*0x46bb18*/
  return result; /*0x46bb1d*/
}
