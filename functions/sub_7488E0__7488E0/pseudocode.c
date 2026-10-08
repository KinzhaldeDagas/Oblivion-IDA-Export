unsigned int __userpurge sub_7488E0@<eax>(_DWORD *this@<ecx>, void *Dst, size_t Size)
{
  int v4; // ecx
  unsigned int v5; // edi

  v4 = *(this + 4); /*0x7488e3*/
  v5 = Size; /*0x7488ea*/
  if ( (unsigned int)Size > *(this + 5) - v4 ) /*0x7488f2*/
    v5 = *(this + 5) - v4; /*0x7488f4*/
  memcpy(Dst, (const void *)(v4 + *(this + 3)), v5); /*0x748902*/
  *(this + 4) += v5; /*0x748907*/
  return v5; /*0x74890f*/
}
