unsigned int __userpurge BSFile_DirectRead@<eax>(
        _DWORD *this@<ecx>,
        FILE *a2@<ebp>,
        int a3@<edi>,
        char *Dst,
        size_t Count)
{
  unsigned int result; // eax
  size_t v7; // [esp-4h] [ebp-18h]

  if ( (dword_B33A00 & 1) == 0 )
  {
    dword_B33A00 |= 1u;
    NiInitalizeCriticalSection((LPCRITICAL_SECTION)&stru_B33980);
    atexit(sub_A17B60);
  }
  if ( !*(this + 7) )
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x18))(this, 0, 0);
  LODWORD(v7) = Count;
  result = NiFile_DirectRead((int)this, a2, a3, Dst, v7);
  *(this + 0x52) += result;
  return result;
}
