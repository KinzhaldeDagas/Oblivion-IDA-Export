int **__thiscall sub_8BBE00(int **this, char *Args)
{
  int *v3; // edi
  int v4; // ebx
  unsigned int v5; // eax
  size_t v7; // [esp-Ch] [ebp-41Ch]
  char Dest[1024]; // [esp+Ch] [ebp-404h] BYREF

  HIDWORD(v7) = "%i";
  LODWORD(v7) = 0x400;
  sub_8B1730(Dest, v7, Args);
  v3 = *(this + 2);
  v4 = *v3;
  v5 = sub_8B1860(Dest);
  (*(void (__thiscall **)(int *, char *, unsigned int))(v4 + 0xC))(v3, Dest, v5);
  return this;
}
