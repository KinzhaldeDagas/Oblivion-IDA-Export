// Appends a six-byte empty CHUNK header (four-byte chunk ID plus zero 16-bit payload length) to the global TESForm save buffer.
char *__cdecl sub_46BA10(int a1)
{
  int v1; // esi
  FreeEntry *v2; // eax
  char *v3; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]

  v1 = MEMORY[0xB33C18]; /*0x46ba16*/
  LODWORD(v5) = MEMORY[0xB33C18] + 6; /*0x46ba1b*/
  MEMORY[0xB33C18] = v5; /*0x46ba1c*/
  v2 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, MEMORY[0xB33C14], v5); /*0x46ba2c*/
  MEMORY[0xB33C14] = v2; /*0x46ba35*/
  v3 = (char *)v2 + v1; /*0x46ba3a*/
  *((_WORD *)v3 + 2) = 0; /*0x46ba3c*/
  *(_DWORD *)v3 = a1; /*0x46ba44*/
  *((_WORD *)v3 + 2) = *((_WORD *)v3 + 2); /*0x46ba4a*/
  LODWORD(v6) = 0; /*0x46ba54*/
  return (char *)memcpy((char *)MEMORY[0xB33C14] + v1 + 6, 0, v6); /*0x46ba65*/
}
