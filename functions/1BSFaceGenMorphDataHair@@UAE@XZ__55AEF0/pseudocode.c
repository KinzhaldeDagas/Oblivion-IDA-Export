void __thiscall BSFaceGenMorphDataHair::~BSFaceGenMorphDataHair(BSFaceGenMorphDataHair *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &BSFaceGenMorphDataHair::`vftable'; /*0x55af18*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2); /*0x55af1e*/
  if ( v2 ) /*0x55af2b*/
    (**v2)(v2, 1); /*0x55af33*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x55af3a*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x55af40*/
}
