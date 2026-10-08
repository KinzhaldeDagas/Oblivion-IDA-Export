CellMopp *__thiscall CellMopp::CellMopp(CellMopp *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x5333ac*/
  *((_DWORD *)this + 1) = 0; /*0x5333b2*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x5333b5*/
  *(_DWORD *)this = &CellMopp::`vftable'; /*0x5333bb*/
  *((_WORD *)this + 0xB) = 1; /*0x5333c6*/
  *((_DWORD *)this + 2) = &NiTArray<NiPointer<bhkRigidBody>>::`vftable'; /*0x5333ca*/
  *((_WORD *)this + 8) = 0; /*0x5333d1*/
  *((_WORD *)this + 9) = 0; /*0x5333d5*/
  *((_WORD *)this + 0xA) = 0; /*0x5333d9*/
  *((_DWORD *)this + 3) = 0; /*0x5333dd*/
  ++unk_B36588; /*0x5333e0*/
  return this; /*0x5333e8*/
}
