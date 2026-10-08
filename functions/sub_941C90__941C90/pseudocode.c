int __thiscall sub_941C90(const char **this, int a2)
{
  const char **v2; // edi
  int v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this + 2; /*0x941c94*/
  sub_941B90(0xFFFFFFFF, (const void **)this + 2); /*0x941c9a*/
  sub_8BBF50(v4, a2); /*0x941ca8*/
  sub_8BBEE0((int)v4, "\n%s</hkobject>", *v2); /*0x941cba*/
  return sub_8BC000(v4); /*0x941ccb*/
}
