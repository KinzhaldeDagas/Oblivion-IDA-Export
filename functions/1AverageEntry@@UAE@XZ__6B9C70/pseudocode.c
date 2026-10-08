void __thiscall AverageEntry::~AverageEntry(AverageEntry *this)
{
  NiTPointerList<NiPointer<AverageEntry>>::~NiTPointerList<NiPointer<AverageEntry>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x10)); /*0x6b9ca3*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x6b9cac*/
  *((_DWORD *)this + 2) = 0; /*0x6b9cb6*/
  *((_WORD *)this + 7) = 0; /*0x6b9cb9*/
  *((_WORD *)this + 6) = 0; /*0x6b9cbd*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x6b9cc6*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x6b9ccc*/
}
