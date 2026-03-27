NiStream *__thiscall NiStream::NiStream(NiStream *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebp
  int v6; // [esp-8h] [ebp-2Ch]

  *(_DWORD *)this = &NiStream::`vftable';
  *((_DWORD *)this + 1) = 0xB;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 0x48) = 0;
  *((_BYTE *)this + 0x88) = 0;
  *((_DWORD *)this + 0x32) = &NiTArray<NiObjectGroup *>::`vftable';
  *((_WORD *)this + 0x68) = 0;
  *((_WORD *)this + 0x6B) = 1;
  *((_WORD *)this + 0x69) = 0;
  *((_WORD *)this + 0x6A) = 0;
  *((_DWORD *)this + 0x33) = 0;
  *((_DWORD *)this + 0x7B) = &NiTLargeArray<NiPointer<NiObject>>::`vftable';
  *((_DWORD *)this + 0x7D) = 0;
  *((_DWORD *)this + 0x80) = 0x400;
  *((_DWORD *)this + 0x7E) = 0;
  *((_DWORD *)this + 0x7F) = 0;
  *((_DWORD *)this + 0x7C) = 0;
  *((_DWORD *)this + 0x81) = &NiTLargeArray<NiPointer<NiObject>>::`vftable';
  *((_DWORD *)this + 0x83) = 0;
  *((_DWORD *)this + 0x86) = 1;
  *((_DWORD *)this + 0x84) = 0;
  *((_DWORD *)this + 0x85) = 0;
  *((_DWORD *)this + 0x82) = 0;
  *((_DWORD *)this + 0x89) = 0;
  *((_DWORD *)this + 0x8A) = 0;
  *((_DWORD *)this + 0x8B) = 0;
  *((_DWORD *)this + 0x8D) = 0;
  *((_DWORD *)this + 0x8E) = 0;
  *((_DWORD *)this + 0x8F) = 0;
  *((_DWORD *)this + 0x92) = 0x25;
  *((_DWORD *)this + 0x91) = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject const *,unsigned int>::`vftable';
  *((_DWORD *)this + 0x94) = 0;
  v2 = FormHeapAlloc(0x94u);
  v6 = 4 * *((_DWORD *)this + 0x92);
  *((_DWORD *)this + 0x93) = v2;
  _memset(v2, 0, v6);
  *((_DWORD *)this + 0x91) = &NiTPointerMap<NiObject const *,unsigned int>::`vftable';
  *((_DWORD *)this + 0x95) = 0;
  *((_DWORD *)this + 0x9D) = 0;
  *((_DWORD *)this + 0x9E) = 0;
  *((_DWORD *)this + 0xE0) = 0;
  *((_BYTE *)this + 0x384) = 0;
  *((_DWORD *)this + 0x87) = 0;
  *((_DWORD *)this + 0x88) = 0;
  *((_DWORD *)this + 0x36) = dword_B26DF4;
  *((_DWORD *)this + 0x37) = dword_B26DF8;
  *((_BYTE *)this + 0x1E4) = 1;
  *((_BYTE *)this + 0x1E5) = 1;
  *((_BYTE *)this + 0xE0) = 0;
  v3 = *((_DWORD *)this + 0x95);
  v4 = dword_B3FAC8;
  if ( v3 != dword_B3FAC8 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *((_DWORD *)this + 0x95) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  *((_DWORD *)this + 0x8C) = 0;
  *((_DWORD *)this + 0x90) = 0;
  *((_DWORD *)this + 0x7A) = sub_711EF0();
  *((_DWORD *)this + 0x98) = 0;
  *((_DWORD *)this + 0xE0) = 0;
  *((_BYTE *)this + 0x384) = 0;
  return this;
}
