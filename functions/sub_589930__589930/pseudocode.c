// Recursively searches a Tile subtree by the localized child name. RaceSexMenu uses this beneath the selected category tile to resolve controls such as Hair > Length.
Tile *__thiscall Tile_FindDescendantByName(Tile *this, const char *name)
{
  _DWORD *v2; // esi
  const unsigned __int8 **v3; // edi
  Tile *result; // eax

  v2 = *((_DWORD **)this + 0xD);                // Immediately dereference this to read the child list; Tile_FindDescendantByName does not accept a null root. /*0x589932*/
  if ( !v2 ) /*0x589938*/
    return 0; /*0x589969*/
  while ( 1 ) /*0x589940*/
  {
    v3 = (const unsigned __int8 **)v2[2]; /*0x589940*/
    v2 = (_DWORD *)*v2; /*0x589949*/
    if ( !_mbscmp(v3[2], (const unsigned __int8 *)name) ) /*0x58994d*/
      break;                                    // Compare this descendant's localized Tile name; recurse through children until a match is found. /*0x58994d*/
    result = Tile_FindDescendantByName((Tile *)v3, name); /*0x58995c*/
    if ( result ) /*0x589963*/
      return result; /*0x589963*/
    if ( !v2 ) /*0x589967*/
      return 0; /*0x589967*/
  }
  return (Tile *)v3; /*0x58996b*/
}
