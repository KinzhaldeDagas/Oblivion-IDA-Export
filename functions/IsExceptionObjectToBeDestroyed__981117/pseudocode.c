int __cdecl _IsExceptionObjectToBeDestroyed(int a1)
{
  _DWORD *i; // eax

  for ( i = (_DWORD *)_getptd()[0x26]; ; i = (_DWORD *)i[1] ) /*0x98111c*/
  {
    if ( !i ) /*0x981131*/
      return 1; /*0x981134*/
    if ( *i == a1 ) /*0x98112a*/
      break; /*0x98112a*/
  }
  return 0; /*0x981134*/
}
