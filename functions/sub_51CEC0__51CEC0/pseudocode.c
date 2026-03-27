int __thiscall sub_51CEC0(_DWORD *this, unsigned int a2)
{
  int v2; // ebx
  int **v3; // edi
  int *v4; // esi
  int v5; // ecx

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
  v5 = *(this + 0x40);
  if ( !v5 )
    return 0;
  v2 = 0;
  v3 = 0;
  if ( a2 <= 9 )
    v3 = *(int ***)(v5 + 4 * a2);
  for ( ; v3; v3 = (int **)v3[1] )
  {
    if ( !v3[1] && !*v3 )
      break;
    if ( v2 )
      break;
    v4 = *v3;
    if ( **v3 )
    {
      if ( GetRandomLargeInteger_(0) % 0x64 < *((unsigned __int8 *)v4 + 4) )
        v2 = *v4;
    }
  }
  return v2;
}
