unsigned int __userpurge BSFile_DirectWrite@<eax>(
        _DWORD *this@<ecx>,
        FILE *a2@<ebp>,
        int a3@<edi>,
        char *Src,
        size_t Count)
{
  unsigned int result; // eax
  size_t v7; // [esp-4h] [ebp-8h]

  LODWORD(v7) = Count;
  result = NiFile_DirectWrite((int)this, a2, a3, Src, v7);
  *(this + 0x52) += result;
  return result;
}
