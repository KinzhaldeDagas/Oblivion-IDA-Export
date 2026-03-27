char __cdecl sub_4FCBD0(int a1, _DWORD *a2)
{
  char result; // al

  while ( 1 )
  {
    result = *(_BYTE *)(*a2 + a1);
    if ( result != 9 && result != 0x20 && result != 0x2C )
      break;
    ++*a2;
  }
  return result;
}
