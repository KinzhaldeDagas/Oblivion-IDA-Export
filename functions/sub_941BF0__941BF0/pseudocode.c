int __thiscall sub_941BF0(void *this, int a2, const char *a3, const char *Args)
{
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  sub_8BBF50(v6, a2);
  sub_8BBEE0((int)v6, "\n%s<hkobject", *((const char **)this + 2));
  if ( Args )
    sub_8BBEE0((int)v6, " class=\"%s\"", Args);
  if ( a3 )
    sub_8BBEE0((int)v6, " name=\"%s\"", a3);
  sub_8BBEE0((int)v6, ">");
  sub_941B90(1, (const void **)this + 2);
  return sub_8BC000(v6);
}
