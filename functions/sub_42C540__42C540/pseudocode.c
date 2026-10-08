unsigned int __userpurge sub_42C540@<eax>(FILE **this@<ecx>, char *Dst, size_t Size)
{
  unsigned int result; // eax
  size_t v5; // [esp-4h] [ebp-8h]

  LODWORD(v5) = Size; /*0x42c54b*/
  result = sub_42C4A0(this, Dst, v5); /*0x42c54f*/
  *(this + 0x52) = (FILE *)((char *)*(this + 0x52) + result); /*0x42c554*/
  return result; /*0x42c55a*/
}
