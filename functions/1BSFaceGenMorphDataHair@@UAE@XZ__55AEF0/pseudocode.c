void __thiscall BSFaceGenMorphDataHair::~BSFaceGenMorphDataHair(BSFaceGenMorphDataHair *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &BSFaceGenMorphDataHair::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2);
  if ( v2 )
    (**v2)(v2, 1);
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
