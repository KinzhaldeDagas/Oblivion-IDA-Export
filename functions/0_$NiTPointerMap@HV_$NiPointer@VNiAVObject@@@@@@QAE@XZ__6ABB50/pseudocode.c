NiTPointerMap<int,NiPointer<NiAVObject>> *__thiscall NiTPointerMap<int,NiPointer<NiAVObject>>::NiTPointerMap<int,NiPointer<NiAVObject>>(
        NiTPointerMap<int,NiPointer<NiAVObject>> *this,
        unsigned int a2)
{
  int v3; // eax
  int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,NiPointer<NiAVObject>>::`vftable';
  *((_DWORD *)this + 3) = 0;
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v3;
  _memset(v3, 0, v5);
  *(_DWORD *)this = &NiTPointerMap<int,NiPointer<NiAVObject>>::`vftable';
  return this;
}
