char __thiscall sub_6DFA70(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // esi
  char *i; // edi

  result = sub_6E7270(this, a2); /*0x6dfa79*/
  if ( result ) /*0x6dfa80*/
  {
    v4 = 0; /*0x6dfa88*/
    for ( i = (char *)this + 0x38; /*0x6dfa8a*/
          !*(_DWORD *)i || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)i + 0x24))(*(_DWORD *)i, a2);
          i += 4 )
    {
      if ( (unsigned int)++v4 >= 3 ) /*0x6dfaab*/
        return 1; /*0x6dfab2*/
    }
    return 0; /*0x6dfab7*/
  }
  return result; /*0x6dfa82*/
}
