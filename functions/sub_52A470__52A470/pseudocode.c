int __thiscall sub_52A470(char *this, int a2)
{
  nullsub_returnvVoid_1arg(a2); /*0x52a47f*/
  if ( (a2 & 0x10000000) == 0 ) /*0x52a48c*/
    JUMPOUT(0x52A4E5); /*0x52a4e5*/
  if ( this == (char *)0xFFFFFFC0 ) /*0x52a494*/
    JUMPOUT(0x52A4E1); /*0x52a4e1*/
  return sub_52A496(0, (_DWORD *)this + 0x10, a2);
}
