unsigned int __userpurge sub_8BC990@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  size_t v3; // [esp-4h] [ebp-8h]

  LODWORD(v3) = Size; /*0x8bc995*/
  sub_721610(this, v3); /*0x8bc996*/
  return sub_712AE0((unsigned int *)Size); /*0x8bc9a2*/
}
