int __thiscall sub_8DF050(char *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)(v3 + 0x18) == 1 )
  {
    result = v3 + *(_DWORD *)(v3 + 0x10);
    if ( result )
      return (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 0xFFFFFFFD) + 8))(this + 0xFFFFFFF4, result);
  }
  return result;
}
