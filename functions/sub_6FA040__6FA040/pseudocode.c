int __cdecl sub_6FA040(char *a1, unsigned __int8 a2)
{
  int v2; // esi
  int v4; // ebx

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
    do
    {
      v2 = tolower(*a1++) + 0x1003F * v2;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
