int __thiscall sub_8B14B0(char **this, int a2)
{
  char *v3; // ebp
  int v4; // edi
  char *v5; // eax
  int v6; // ebx
  int *v8; // [esp+14h] [ebp+4h]

  v3 = *this;
  v4 = (int)(*(this + 2) + 1);
  v5 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10 * a2, 0x14);
  *this = v5;
  sub_8B18C0(a2, v5, 0, 8 * a2);
  *(this + 2) = (char *)(a2 - 1);
  v6 = 0;
  *(this + 1) = 0;
  if ( v4 > 0 )
  {
    v8 = (int *)&v3[8 * v4];
    do
    {
      if ( *(_QWORD *)&v3[8 * v6] )
        sub_8B1170(this, *(_QWORD *)&v3[8 * v6], *v8, v8[1]);
      ++v6;
      v8 += 2;
    }
    while ( v6 < v4 );
  }
  return (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
           dword_BA7D98,
           v3,
           0x10 * v4,
           0x14);
}
