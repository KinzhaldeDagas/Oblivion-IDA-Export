void __thiscall CellMopp::~CellMopp(CellMopp *this)
{
  char *v2; // edi

  *(_DWORD *)this = &CellMopp::`vftable'; /*0x53344a*/
  --unk_B36588; /*0x533455*/
  sub_532EF0((int)this); /*0x53345f*/
  NiTObjectArray_ClearAndRelease((char *)this + 8); /*0x533469*/
  *((_DWORD *)this + 2) = &NiTArray<NiPointer<bhkRigidBody>>::`vftable'; /*0x53346e*/
  v2 = *((char **)this + 3); /*0x533474*/
  if ( v2 ) /*0x53347e*/
  {
    _LN21(v2, 4u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x53348f*/
    FormHeapFree((unsigned int)(v2 + 0xFFFFFFFC)); /*0x533495*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x5334a2*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x5334a8*/
}
