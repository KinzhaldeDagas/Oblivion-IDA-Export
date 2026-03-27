void __thiscall AverageEntry::~AverageEntry(AverageEntry *this)
{
  NiTPointerList<NiPointer<AverageEntry>>::~NiTPointerList<NiPointer<AverageEntry>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x10));
  FormHeapFree(*((_DWORD *)this + 2));
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 6) = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
