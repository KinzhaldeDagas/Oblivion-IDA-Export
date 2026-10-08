unsigned int __userpurge BSFile_DirectWrite@<eax>(
        _DWORD *this@<ecx>,
        FILE *a2@<ebp>,
        int a3@<edi>,
        char *Src,
        size_t Count)
{
  unsigned int result; // eax
  size_t v7; // [esp-4h] [ebp-8h]

  LODWORD(v7) = Count; /*0x43003b*/
  result = NiFile_DirectWrite((int)this, a2, a3, Src, v7); /*0x43003f*/
  *(this + 0x52) += result; /*0x430044*/
  return result; /*0x43004a*/
}
