void __thiscall TESAnimGroup::~TESAnimGroup(TESAnimGroup *this)
{
  void *v2; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &TESAnimGroup::`vftable';
  FormHeapFree(*((_DWORD *)this + 4));
  v2 = *((void **)this + 0xA);
  *((_DWORD *)this + 4) = 0;
  MemoryHeap_Free_checked(v2);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
