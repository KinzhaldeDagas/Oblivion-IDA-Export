int __thiscall TESContainer_GetEntryForForm(_BYTE *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  if ( (*(this + 4) & 1) == 0 ) /*0x469954*/
    return 0; /*0x469954*/
  v2 = this + 8; /*0x469956*/
  if ( !*v2 ) /*0x469959*/
    return 0; /*0x469970*/
  while ( 1 ) /*0x469962*/
  {
    result = *v2; /*0x469962*/
    if ( *(_DWORD *)(*v2 + 4) == a2 ) /*0x469967*/
      break; /*0x469967*/
    v2 = (_DWORD *)v2[1]; /*0x469969*/
    if ( !v2 ) /*0x46996e*/
      return 0; /*0x46996e*/
  }
  return result; /*0x469972*/
}
