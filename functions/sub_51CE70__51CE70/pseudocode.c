CHAR *__thiscall sub_51CE70(_DWORD *this, unsigned int a2)
{
  CHAR *v2; // ebx
  unsigned __int8 **v3; // eax
  unsigned __int8 **i; // edi
  unsigned __int8 *v5; // esi
  CHAR *v6; // eax
  int v7; // ecx

  if ( (*(this + 0xA) & 0x100) == 0 )
  {
    while ( (*(this + 0xA) & 0x100) == 0 )
    {
      this = (_DWORD *)*(this + 0x40);
      if ( !this )
        break;
      if ( (*(this + 0xA) & 0x100) != 0 )
        goto LABEL_5;
    }
    return 0;
  }
LABEL_5:
  if ( (*(this + 0xA) & 0x100) == 0 )
    return 0;
  v7 = *(this + 0x40);
  if ( !v7 )
    return 0;
  v2 = 0;
  v3 = 0;
  if ( a2 <= 9 )
    v3 = *(unsigned __int8 ***)(v7 + 4 * a2);
  for ( i = v3; i; i = (unsigned __int8 **)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    if ( v2 )
      break;
    v5 = *i;
    if ( *(_DWORD *)*i )
    {
      if ( GetRandomLargeInteger_(0) % 0x64 < v5[4] )
      {
        v6 = *(CHAR **)(*(_DWORD *)v5 + 0x28);
        if ( !v6 )
          v6 = EmptyString;
        v2 = v6;
      }
    }
  }
  return v2;
}
