int __thiscall sub_52A470(char *this, int a2)
{
  nullsub_returnvVoid_1arg(a2);
  if ( (a2 & 0x10000000) == 0 )
    JUMPOUT(0x52A4E5);
  if ( this == (char *)0xFFFFFFC0 )
    JUMPOUT(0x52A4E1);
  return sub_52A496(0, (_DWORD *)this + 0x10, a2);
}
