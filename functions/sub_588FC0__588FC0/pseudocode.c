// Verified: splits selector at parentheses, puts parameter text in supplied buffer, converts selector token through TileStringToStringID. GetTileByName uses result 0x138C for sibling.
unsigned int __cdecl Tile::TextToTraitAndParam(const char *text, char *parameter)
{
  int v2; // esi
  int i; // eax
  unsigned __int8 v4; // cl
  unsigned __int8 v6[256]; // [esp+8h] [ebp-104h] BYREF

  if ( !text || !*text || !parameter ) /*0x588ff0*/
    return 0; /*0x58906f*/
  v2 = 0xFFFFFFFF; /*0x588ff3*/
  *parameter = 0; /*0x588ff6*/
  v6[0] = 0; /*0x588ff8*/
  for ( i = 0; i < 0xFF; ++i ) /*0x588ffc*/
  {
    if ( !text[i] ) /*0x589000*/
      break; /*0x589003*/
    parameter[i + 1] = 0; /*0x589005*/
    v4 = text[i]; /*0x589009*/
    v6[i + 1] = 0; /*0x58900f*/
    if ( v4 == 0x28 ) /*0x589013*/
    {
      v2 = 0; /*0x589015*/
    }
    else if ( v4 == 0x29 ) /*0x58901c*/
    {
      i = 0x100; /*0x58901e*/
    }
    else if ( v2 < 0 ) /*0x589027*/
    {
      v6[i] = v4; /*0x589031*/
    }
    else
    {
      parameter[v2++] = v4; /*0x589029*/
    }
  }
  return TileStringToStringID(v6); /*0x58904d*/
}
