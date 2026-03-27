void __thiscall CellMopp::~CellMopp(CellMopp *this)
{
  int *v2; // edi

  *(_DWORD *)this = &CellMopp::`vftable';
  --dword_B36588;
  sub_532EF0((int)this);
  sub_477EF0((_WORD *)this + 4);
  *((_DWORD *)this + 2) = &NiTArray<NiPointer<bhkRigidBody>>::`vftable';
  v2 = *((int **)this + 3);
  if ( v2 )
  {
    _LN21(v2, 4u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF));
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
