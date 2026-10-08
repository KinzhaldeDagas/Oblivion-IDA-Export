void *__cdecl TESForm_PutCurrentChunkData4(int a1, int a2)
{
  int v2; // esi
  FreeEntry *v3; // eax
  char *v4; // eax
  void *result; // eax
  size_t v6; // [esp-4h] [ebp-8h]

  v2 = MEMORY[0xB33C18]; /*0x46ba86*/
  LODWORD(v6) = MEMORY[0xB33C18] + 0xA; /*0x46ba8b*/
  MEMORY[0xB33C18] = v6; /*0x46ba8c*/
  v3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, MEMORY[0xB33C14], v6); /*0x46ba9c*/
  MEMORY[0xB33C14] = v3; /*0x46baa5*/
  v4 = (char *)v3 + v2; /*0x46baaa*/
  *((_WORD *)v4 + 2) = 4; /*0x46baac*/
  *(_DWORD *)v4 = a1; /*0x46bab4*/
  *((_WORD *)v4 + 2) = *((_WORD *)v4 + 2); /*0x46babe*/
  result = MEMORY[0xB33C14]; /*0x46bac2*/
  *(_DWORD *)((char *)MEMORY[0xB33C14] + v2 + 6) = a2; /*0x46bac7*/
  return result; /*0x46bacb*/
}
