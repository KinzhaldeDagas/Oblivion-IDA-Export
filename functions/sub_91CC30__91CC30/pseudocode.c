int __thiscall sub_91CC30(char *this, int *a2)
{
  char *v3; // eax
  char *v4; // eax
  int result; // eax
  int v6; // esi
  char *v7; // ebx

  if ( this )
    v3 = this + 0x28;
  else
    v3 = 0;
  sub_898A30(a2, (int)v3);
  if ( this )
    v4 = this + 0x2C;
  else
    v4 = 0;
  sub_898A80(a2, (int)v4);
  result = a2[0x2F];
  v6 = 0;
  if ( result > 0 )
  {
    v7 = this + 0x28;
    do
    {
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v7 + 8))(v7, *(_DWORD *)(a2[0x2E] + 4 * v6));
      result = a2[0x2F];
      ++v6;
    }
    while ( v6 < result );
  }
  return result;
}
