// Destroys TESAnimGroup-owned allocations: frees the required-note float array at +0x10 and the parsed 0x10-byte text-key event array at +0x28, then tears down the NiRefObject base.
void __thiscall TESAnimGroup_destructor(TESAnimGroup *this)
{
  void *v2; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &TESAnimGroup::`vftable'; /*0x51abf9*/
  FormHeapFree(*((_DWORD *)this + 4)); /*0x51ac09*/
  v2 = *((void **)this + 0xA); /*0x51ac14*/
  *((_DWORD *)this + 4) = 0; /*0x51ac1a*/
  MemoryHeap_Free_checked(v2); /*0x51ac1d*/
  *((_DWORD *)this + 0xA) = 0; /*0x51ac27*/
  *((_DWORD *)this + 9) = 0; /*0x51ac2a*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x51ac2d*/
  InterlockedDecrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x51ac33*/
}
