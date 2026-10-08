void __thiscall BSFaceGenModel::~BSFaceGenModel(BSFaceGenModel *this)
{
  unsigned int *v2; // edi
  unsigned int v3; // edi

  *(_DWORD *)this = &BSFaceGenModel::`vftable'; /*0x559f79*/
  v2 = *((unsigned int **)this + 2); /*0x559f7f*/
  if ( v2 ) /*0x559f8c*/
  {
    sub_559CE0(v2); /*0x559f90*/
    FormHeapFree((unsigned int)v2); /*0x559f96*/
  }
  v3 = *((_DWORD *)this + 3); /*0x559f9e*/
  if ( v3 ) /*0x559fa3*/
  {
    sub_559E90(*((unsigned int **)this + 3)); /*0x559fa7*/
    FormHeapFree(v3); /*0x559fad*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x559fba*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x559fc0*/
}
