int __thiscall sub_941B00(_DWORD *this, int Args, char *a3, int a4)
{
  signed int v5; // esi
  int v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_8BBF50(v7, Args);
  sub_8BBEE0((int)v7, "\n%s<hkrawdata size=\"%i\"><![CDATA[\n", (const char *)*(this + 2), a4);
  v5 = sub_9414C0(Args, a3, a4);
  sub_8BBEE0((int)v7, "\n]]></hkrawdata>");
  sub_8BC000(v7);
  return v5;
}
