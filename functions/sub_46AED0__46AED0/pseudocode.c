// Expands an existing record CHUNK by up to 0xFFFF bytes: increases its 16-bit length, grows the global TESForm save buffer, and leaves the appended range ready for the caller to fill.
char __stdcall sub_46AED0(int a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // ax
  size_t v4; // [esp-4h] [ebp-8h]

  v2 = *(_WORD *)(a1 + 4); /*0x46aed9*/
  if ( !v2 && !a2 || a2 + v2 > 0xFFFF ) /*0x46aef7*/
    return 0; /*0x46aef9*/
  *(_WORD *)(a1 + 4) = a2 + v2; /*0x46af01*/
  LODWORD(v4) = a2 + MEMORY[0xB33C18]; /*0x46af0c*/
  MEMORY[0xB33C18] = v4; /*0x46af0d*/
  MEMORY[0xB33C14] = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, MEMORY[0xB33C14], v4); /*0x46af22*/
  return 1; /*0x46aefb*/
}
