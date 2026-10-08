void __thiscall sub_4C4B90(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // [esp-8h] [ebp-Ch]

  *(this + 1) = 0x25; /*0x4c4b9a*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>::`vftable'; /*0x4c4ba7*/
  *(this + 3) = 0; /*0x4c4bad*/
  v2 = FormHeapAlloc(0x94u); /*0x4c4bb9*/
  v3 = 4 * *(this + 1); /*0x4c4bc5*/
  *(this + 2) = v2; /*0x4c4bc9*/
  _memset(v2, 0, v3); /*0x4c4bcc*/
  *this = &NiTPointerMap<unsigned int,TESGrassAreaParam * *>::`vftable'; /*0x4c4bd4*/
}
