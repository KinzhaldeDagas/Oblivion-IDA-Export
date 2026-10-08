void __thiscall sub_775F10(_WORD *this)
{
  unsigned int i; // esi
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // [esp-4h] [ebp-Ch]

  for ( i = 0; i < (unsigned __int16)*(this + 7); ++i ) /*0x775f16*/
  {
    v3 = *((_DWORD *)this + 2); /*0x775f20*/
    v4 = *(_DWORD *)(v3 + 4 * i); /*0x775f23*/
    if ( v4 ) /*0x775f28*/
    {
      NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>(*(NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int> **)(v3 + 4 * i)); /*0x775f2c*/
      FormHeapFree(v4); /*0x775f32*/
    }
  }
  v5 = *((_DWORD *)this + 2); /*0x775f49*/
  *((_DWORD *)this + 1) = &NiTArray<NiDX9AdapterDesc *>::`vftable'; /*0x775f4a*/
  FormHeapFree(v5); /*0x775f51*/
}
