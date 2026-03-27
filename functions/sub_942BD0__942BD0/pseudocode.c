int __thiscall sub_942BD0(char **this, int a2)
{
  char *v3; // ebp
  int v4; // esi
  char *v5; // eax
  int v6; // ebx
  char **v8; // [esp+14h] [ebp+4h]

  v3 = *this;
  v4 = (int)(*(this + 2) + 1);
  v5 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC * a2, 0x14);
  *this = v5;
  sub_8B18C0(a2, v5, 0xFF, 4 * a2);
  *(this + 2) = (char *)(a2 - 1);
  v6 = 0;
  *(this + 1) = 0;
  if ( v4 > 0 )
  {
    v8 = (char **)&v3[4 * v4];
    do
    {
      if ( *(_DWORD *)&v3[4 * v6] != 0xFFFFFFFF )
        sub_9429D0(this, *v8, *(_DWORD *)&v3[8 * v4 + 4 * v6]);
      ++v6;
      ++v8;
    }
    while ( v6 < v4 );
  }
  return (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
           dword_BA7D98,
           v3,
           0xC * v4,
           0x14);
}
