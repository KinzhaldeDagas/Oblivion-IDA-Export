int __cdecl ActiveEffect_Base_LinkAEList(_DWORD *a1, int a2)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i; i = (_DWORD *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*i + 0x18))(*i, a2);
  }
  return result;
}
