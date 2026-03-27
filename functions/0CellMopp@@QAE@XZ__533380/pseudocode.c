CellMopp *__thiscall CellMopp::CellMopp(CellMopp *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &CellMopp::`vftable';
  *((_WORD *)this + 0xB) = 1;
  *((_DWORD *)this + 2) = &NiTArray<NiPointer<bhkRigidBody>>::`vftable';
  *((_WORD *)this + 8) = 0;
  *((_WORD *)this + 9) = 0;
  *((_WORD *)this + 0xA) = 0;
  *((_DWORD *)this + 3) = 0;
  ++dword_B36588;
  return this;
}
