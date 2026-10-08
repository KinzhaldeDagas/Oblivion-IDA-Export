NiStream *__thiscall NiStream::NiStream(NiStream *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebp
  unsigned int v6; // [esp-8h] [ebp-2Ch]

  *(_DWORD *)this = &NiStream::`vftable'; /*0x713a5b*/
  *((_DWORD *)this + 1) = 0xB; /*0x713a63*/
  *((_BYTE *)this + 8) = 0; /*0x713a6a*/
  *((_BYTE *)this + 0x48) = 0; /*0x713a6d*/
  *((_BYTE *)this + 0x88) = 0; /*0x713a70*/
  *((_DWORD *)this + 0x32) = &NiTArray<NiObjectGroup *>::`vftable'; /*0x713a7b*/
  *((_WORD *)this + 0x68) = 0; /*0x713a85*/
  *((_WORD *)this + 0x6B) = 1; /*0x713a8c*/
  *((_WORD *)this + 0x69) = 0; /*0x713a93*/
  *((_WORD *)this + 0x6A) = 0; /*0x713a9a*/
  *((_DWORD *)this + 0x33) = 0; /*0x713aa1*/
  *((_DWORD *)this + 0x7B) = &NiTLargeArray<NiPointer<NiObject>>::`vftable'; /*0x713ab0*/
  *((_DWORD *)this + 0x7D) = 0; /*0x713ab6*/
  *((_DWORD *)this + 0x80) = 0x400; /*0x713abc*/
  *((_DWORD *)this + 0x7E) = 0; /*0x713ac6*/
  *((_DWORD *)this + 0x7F) = 0; /*0x713acc*/
  *((_DWORD *)this + 0x7C) = 0; /*0x713ad2*/
  *((_DWORD *)this + 0x81) = &NiTLargeArray<NiPointer<NiObject>>::`vftable'; /*0x713ad8*/
  *((_DWORD *)this + 0x83) = 0; /*0x713ade*/
  *((_DWORD *)this + 0x86) = 1; /*0x713ae4*/
  *((_DWORD *)this + 0x84) = 0; /*0x713aea*/
  *((_DWORD *)this + 0x85) = 0; /*0x713af0*/
  *((_DWORD *)this + 0x82) = 0; /*0x713af6*/
  *((_DWORD *)this + 0x89) = 0; /*0x713afc*/
  *((_DWORD *)this + 0x8A) = 0; /*0x713b02*/
  *((_DWORD *)this + 0x8B) = 0; /*0x713b08*/
  *((_DWORD *)this + 0x8D) = 0; /*0x713b0e*/
  *((_DWORD *)this + 0x8E) = 0; /*0x713b14*/
  *((_DWORD *)this + 0x8F) = 0; /*0x713b1a*/
  *((_DWORD *)this + 0x92) = 0x25; /*0x713b27*/
  *((_DWORD *)this + 0x91) = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject const *,unsigned int>::`vftable'; /*0x713b3c*/
  *((_DWORD *)this + 0x94) = 0; /*0x713b46*/
  v2 = FormHeapAlloc(0x94u); /*0x713b51*/
  v6 = 4 * *((_DWORD *)this + 0x92); /*0x713b60*/
  *((_DWORD *)this + 0x93) = v2; /*0x713b63*/
  _memset(v2, 0, v6); /*0x713b69*/
  *((_DWORD *)this + 0x91) = &NiTPointerMap<NiObject const *,unsigned int>::`vftable'; /*0x713b71*/
  *((_DWORD *)this + 0x95) = 0; /*0x713b7b*/
  *((_DWORD *)this + 0x9D) = 0; /*0x713b81*/
  *((_DWORD *)this + 0x9E) = 0; /*0x713b87*/
  *((_DWORD *)this + 0xE0) = 0; /*0x713b8d*/
  *((_BYTE *)this + 0x384) = 0; /*0x713b93*/
  *((_DWORD *)this + 0x87) = 0; /*0x713b99*/
  *((_DWORD *)this + 0x88) = 0; /*0x713b9f*/
  *((_DWORD *)this + 0x36) = dword_B26DF4; /*0x713bab*/
  *((_DWORD *)this + 0x37) = dword_B26DF8; /*0x713bb6*/
  *((_BYTE *)this + 0x1E4) = 1; /*0x713bbc*/
  *((_BYTE *)this + 0x1E5) = 1; /*0x713bc3*/
  *((_BYTE *)this + 0xE0) = 0; /*0x713bca*/
  v3 = *((_DWORD *)this + 0x95); /*0x713bd5*/
  v4 = unk_B3FAC8; /*0x713be0*/
  if ( v3 != unk_B3FAC8 ) /*0x713be4*/
  {
    if ( v3 ) /*0x713be8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x713bee*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x713c04*/
    }
    *((_DWORD *)this + 0x95) = v4; /*0x713c08*/
    if ( v4 ) /*0x713c0e*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x713c14*/
  }
  *((_DWORD *)this + 0x8C) = 0; /*0x713c1a*/
  *((_DWORD *)this + 0x90) = 0; /*0x713c20*/
  *((_DWORD *)this + 0x7A) = sub_711EF0(); /*0x713c2b*/
  *((_DWORD *)this + 0x98) = 0; /*0x713c31*/
  *((_DWORD *)this + 0xE0) = 0; /*0x713c37*/
  *((_BYTE *)this + 0x384) = 0; /*0x713c3d*/
  return this; /*0x713c45*/
}
