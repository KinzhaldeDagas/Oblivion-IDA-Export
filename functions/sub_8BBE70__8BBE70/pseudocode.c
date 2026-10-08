int **__thiscall sub_8BBE70(int **this, char *Args)
{
  int *v3; // edi
  int v4; // ebx
  unsigned int v5; // eax
  size_t v7; // [esp-Ch] [ebp-41Ch]
  char Dest[1024]; // [esp+Ch] [ebp-404h] BYREF

  HIDWORD(v7) = "%u"; /*0x8bbe8d*/
  LODWORD(v7) = 0x400; /*0x8bbe98*/
  sub_8B1730(Dest, v7, Args); /*0x8bbe9e*/
  v3 = *(this + 2); /*0x8bbea3*/
  v4 = *v3; /*0x8bbea6*/
  v5 = sub_8B1860(Dest); /*0x8bbead*/
  (*(void (__thiscall **)(int *, char *, unsigned int))(v4 + 0xC))(v3, Dest, v5); /*0x8bbebd*/
  return this; /*0x8bbec0*/
}
