int __userpurge sub_6FB910@<eax>(int *this@<ecx>, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-Ch]

  LODWORD(v4) = Size;
  sub_721610(this, v4);
  sub_709430((char *)this + 0xC, Size);
  return sub_709430((char *)this + 0x18, Size);
}
