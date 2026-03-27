signed int __cdecl Setting_GetTypeFromName(char *a1)
{
  signed int result; // eax

  result = 9;
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 'S':
      case 's':
        result = 6;
        break;
      case 'a':
        result = 8;
        break;
      case 'b':
        result = 0;
        break;
      case 'c':
        result = 1;
        break;
      case 'f':
        result = 5;
        break;
      case 'h':
        result = 2;
        break;
      case 'i':
        result = 3;
        break;
      case 'r':
        result = 7;
        break;
      case 'u':
        result = 4;
        break;
      default:
        return result;
    }
  }
  return result;
}
