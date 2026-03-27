unsigned int __userpurge sub_8BC990@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  size_t v3; // [esp-4h] [ebp-8h]

  LODWORD(v3) = Size;
  sub_721610(this, v3);
  return sub_712AE0((unsigned int *)Size);
}
