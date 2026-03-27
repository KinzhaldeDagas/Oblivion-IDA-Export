void __thiscall sub_775F10(_WORD *this)
{
  unsigned int i; // esi
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // [esp-4h] [ebp-Ch]

  for ( i = 0; i < (unsigned __int16)*(this + 7); ++i )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = *(_DWORD *)(v3 + 4 * i);
    if ( v4 )
    {
      NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>(*(NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int> **)(v3 + 4 * i));
      FormHeapFree(v4);
    }
  }
  v5 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 1) = &NiTArray<NiDX9AdapterDesc *>::`vftable';
  FormHeapFree(v5);
}
