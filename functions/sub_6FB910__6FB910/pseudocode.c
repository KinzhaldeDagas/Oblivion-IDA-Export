int __userpurge sub_6FB910@<eax>(int *this@<ecx>, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-Ch]

  LODWORD(v4) = Size; /*0x6fb916*/
  sub_721610((NiRenderer *)this, v4); /*0x6fb919*/
  sub_709430((char *)this + 0xC, Size); /*0x6fb922*/
  return sub_709430((char *)this + 0x18, Size); /*0x6fb930*/
}
