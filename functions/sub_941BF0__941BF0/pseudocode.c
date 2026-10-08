int __thiscall sub_941BF0(void *this, int a2, const char *a3, const char *Args)
{
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  sub_8BBF50(v6, a2); /*0x941c00*/
  sub_8BBEE0((int)v6, "\n%s<hkobject", *((const char **)this + 2)); /*0x941c16*/
  if ( Args ) /*0x941c24*/
    sub_8BBEE0((int)v6, " class=\"%s\"", Args); /*0x941c31*/
  if ( a3 ) /*0x941c3f*/
    sub_8BBEE0((int)v6, " name=\"%s\"", a3); /*0x941c4c*/
  sub_8BBEE0((int)v6, ">"); /*0x941c5e*/
  sub_941B90(1, (const void **)this + 2); /*0x941c6b*/
  return sub_8BC000(v6); /*0x941c79*/
}
