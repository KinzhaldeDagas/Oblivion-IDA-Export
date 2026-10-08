unsigned int __thiscall BSFile_DirectRead(void *self, void *destination, unsigned int byteCount)
{
  unsigned int result; // eax

  if ( (unk_B33A00 & 1) == 0 ) /*0x4302de*/
  {
    unk_B33A00 |= 1u; /*0x4302e0*/
    NiInitalizeCriticalSection((LPCRITICAL_SECTION)&unk_B33980); /*0x4302f3*/
    atexit(sub_A17B60); /*0x4302fd*/
  }
  if ( !*((_DWORD *)self + 7) ) /*0x43030d*/
    (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)self + 0x18))(self, 0, 0); /*0x43031e*/
  result = NiFile_DirectRead(self, destination, byteCount); /*0x43032c*/
  *((_DWORD *)self + 0x52) += result; /*0x430331*/
  return result; /*0x430337*/
}
