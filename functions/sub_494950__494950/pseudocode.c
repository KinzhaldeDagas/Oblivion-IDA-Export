int __thiscall sub_494950(_DWORD *this, const char *a2)
{
  char *v3; // eax
  int (__thiscall **v4)(_DWORD *, char *, char *, int); // esi
  char *v5; // eax
  char v7[20000]; // [esp+8h] [ebp-4E24h] BYREF

  if ( byte_B06B15 )
  {
    v3 = sub_4945E0();
    DeleteFileA(v3);
    byte_B06B15 = 0;
  }
  strcpy(v7, a2);
  v4 = (int (__thiscall **)(_DWORD *, char *, char *, int))(*this + 0x28);
  v5 = sub_4945E0();
  return (*v4)(this, v5, v7, 1);
}
