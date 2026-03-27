int __thiscall TESContainer_GetEntryForForm(_BYTE *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  if ( (*(this + 4) & 1) == 0 )
    return 0;
  v2 = this + 8;
  if ( !*v2 )
    return 0;
  while ( 1 )
  {
    result = *v2;
    if ( *(_DWORD *)(*v2 + 4) == a2 )
      break;
    v2 = (_DWORD *)v2[1];
    if ( !v2 )
      return 0;
  }
  return result;
}
