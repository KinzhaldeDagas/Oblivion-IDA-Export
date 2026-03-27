char __cdecl sub_480820(_DWORD *a1)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *i; // eax

  if ( !a1 )
    return 0;
  if ( sub_700010(a1, (int)&unk_B3CE30) )
    return 1;
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *(unsigned __int16 *)(v2 + 0xB6);
  v5 = 0;
  if ( !*(_WORD *)(v3 + 0xB6) )
    return 0;
  if ( v4 )
    goto LABEL_9;
  for ( i = 0; !sub_480820(i); i = *(_DWORD **)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) )
  {
    if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 )
      return 0;
LABEL_9:
    ;
  }
  return 1;
}
