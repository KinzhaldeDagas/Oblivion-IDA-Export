int __thiscall sub_7C2860(char **this)
{
  int v3[65]; // [esp+4h] [ebp-108h] BYREF

  sub_434710(*(this + 8), (char *)v3);
  return (*((int (__thiscall **)(char **, int *, _DWORD))*(this + 0xA) + 0x15))(this + 0xA, v3, 0);
}
