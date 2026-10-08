signed int __cdecl Setting_GetTypeFromName(char *a1)
{
  signed int result; // eax

  result = 9; /*0x4a78d6*/
  if ( a1 ) /*0x4a78db*/
  {
    switch ( *a1 ) /*0x4a78ef*/
    {
      case 'S': /*0x4a78ef*/
      case 's': /*0x4a78ef*/
        result = 6; /*0x4a7917*/
        break; /*0x4a791c*/
      case 'a': /*0x4a78ef*/
        result = 8; /*0x4a7923*/
        break; /*0x4a7923*/
      case 'b': /*0x4a78ef*/
        result = 0; /*0x4a78f6*/
        break; /*0x4a78f8*/
      case 'c': /*0x4a78ef*/
        result = 1; /*0x4a78f9*/
        break; /*0x4a78fe*/
      case 'f': /*0x4a78ef*/
        result = 5; /*0x4a78ff*/
        break; /*0x4a7904*/
      case 'h': /*0x4a78ef*/
        result = 2; /*0x4a7905*/
        break; /*0x4a790a*/
      case 'i': /*0x4a78ef*/
        result = 3; /*0x4a790b*/
        break; /*0x4a7910*/
      case 'r': /*0x4a78ef*/
        result = 7; /*0x4a791d*/
        break; /*0x4a7922*/
      case 'u': /*0x4a78ef*/
        result = 4; /*0x4a7911*/
        break; /*0x4a7916*/
      default:
        return result;
    }
  }
  return result; /*0x4a78f8*/
}
