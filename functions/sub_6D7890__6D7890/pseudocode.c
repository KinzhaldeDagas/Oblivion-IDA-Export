int __thiscall sub_6D7890(const char **this, int a2)
{
  _DWORD *v2; // ebp
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int result; // eax
  unsigned int v6; // esi
  int v7; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2;
  sub_6FE000(this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(v2[0x88] + 8);
  v7 = v2[0x88];
  a2 = 4;
  result = v4(v7, this + 3, 4, &a2, 1);
  v6 = 0;
  if ( *(this + 3) )
  {
    do
      result = sub_6EC760((const char **)&(*(this + 4))[8 * v6++], (signed int)v2);
    while ( v6 < (unsigned int)*(this + 3) );
  }
  return result;
}
