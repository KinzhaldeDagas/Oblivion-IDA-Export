int __thiscall sub_8B1060(char **this, int a2)
{
  char *v3; // ebp
  int v4; // edi
  char *v5; // eax
  int v6; // ebx
  unsigned int v7; // eax
  int *v9; // [esp+14h] [ebp+4h]

  v3 = *this;
  v4 = (int)(*(this + 2) + 1);
  v5 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8 * a2, 0x14);
  *this = v5;
  sub_8B18C0(a2, v5, 0, 4 * a2);
  *(this + 2) = (char *)(a2 - 1);
  v6 = 0;
  *(this + 1) = 0;
  if ( v4 > 0 )
  {
    v9 = (int *)&v3[4 * v4];
    do
    {
      v7 = *(_DWORD *)&v3[4 * v6];
      if ( v7 )
        sub_8B0E80(this, v7, *v9);
      ++v6;
      ++v9;
    }
    while ( v6 < v4 );
  }
  return (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v3, 8 * v4, 0x14);
}
