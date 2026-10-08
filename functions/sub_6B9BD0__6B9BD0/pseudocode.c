BSStringT *__thiscall sub_6B9BD0(BSStringT *this, char *a2, int a3)
{
  this->m_data = (char *)&NiRefObject::`vftable'; /*0x6b9c00*/
  *(_DWORD *)&this->m_dataLen = 0; /*0x6b9c06*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x6b9c09*/
  this->m_data = (char *)&AverageEntry::`vftable'; /*0x6b9c12*/
  *((_DWORD *)this + 2) = 0; /*0x6b9c1c*/
  *((_WORD *)this + 6) = 0; /*0x6b9c1e*/
  *((_WORD *)this + 7) = 0; /*0x6b9c22*/
  *((_DWORD *)this + 7) = 0; /*0x6b9c26*/
  *((_DWORD *)this + 5) = 0; /*0x6b9c29*/
  *((_DWORD *)this + 6) = 0; /*0x6b9c2c*/
  *((_DWORD *)this + 4) = &NiTPointerList<NiPointer<AverageEntry>>::`vftable'; /*0x6b9c2f*/
  BSStringT_Set(this + 1, a2, 0); /*0x6b9c41*/
  *((_DWORD *)this + 8) = a3; /*0x6b9c4a*/
  *((_DWORD *)this + 9) = 0; /*0x6b9c4d*/
  return this; /*0x6b9c52*/
}
