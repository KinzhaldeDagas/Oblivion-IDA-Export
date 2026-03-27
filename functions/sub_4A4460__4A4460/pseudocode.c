int __thiscall sub_4A4460(int *this, int a2)
{
  int *v2; // edi
  int v3; // esi

  v2 = this;
  if ( !this )
    return 0;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(*v2) == a2 )
        break;
    }
    v2 = (int *)v2[1];
    if ( !v2 )
      return 0;
  }
  return v3;
}
