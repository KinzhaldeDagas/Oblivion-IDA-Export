char __cdecl sub_4FCBD0(int a1, _DWORD *a2)
{
  char result; // al

  while ( 1 ) /*0x4fcbe2*/
  {
    result = *(_BYTE *)(*a2 + a1); /*0x4fcbe2*/
    if ( result != 9 && result != 0x20 && result != 0x2C ) /*0x4fcbef*/
      break; /*0x4fcbef*/
    ++*a2; /*0x4fcbf4*/
  }
  return result; /*0x4fcbf8*/
}
