char __thiscall sub_6DFA70(char *this, int a2)
{
  char result; // al
  int v4; // esi
  char *i; // edi

  result = sub_6E7270(a2);
  if ( result )
  {
    v4 = 0;
    for ( i = this + 0x38;
          !*(_DWORD *)i || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)i + 0x24))(*(_DWORD *)i, a2);
          i += 4 )
    {
      if ( (unsigned int)++v4 >= 3 )
        return 1;
    }
    return 0;
  }
  return result;
}
