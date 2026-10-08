int __cdecl sub_5479F0(int a1, unsigned int *a2, unsigned int *a3, int *a4, unsigned int *a5)
{
  unsigned int v5; // ebp
  int i; // esi
  int v7; // edx
  int result; // eax
  unsigned int v9; // [esp+10h] [ebp-10h]
  unsigned int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v9 = 0xFFFFFFFF; /*0x5479fc*/
  v10 = 0xFFFFFFFF; /*0x547a00*/
  v11 = 0xFFFFFFFF; /*0x547a04*/
  v12 = 0xFFFFFFFF; /*0x547a08*/
  v5 = Game_RandomLargeInteger(0); /*0x547a18*/
  for ( i = 4; i > 0; --i ) /*0x547a1a*/
  {
    v7 = Game_RandomLargeInteger(a1 << i) % i; /*0x547a2d*/
    while ( *(&v9 + v7) != 0xFFFFFFFF ) /*0x547a36*/
    {
      if ( v7 < 3 ) /*0x547a3b*/
        ++v7; /*0x547a3d*/
    }
    *(&v9 + v7) = i; /*0x547a46*/
  }
  Game_RandomLargeInteger(v5); /*0x547a52*/
  *a2 = v9; /*0x547a63*/
  *a3 = v10; /*0x547a70*/
  result = v11; /*0x547a72*/
  *a4 = v11; /*0x547a7c*/
  *a5 = v12; /*0x547a83*/
  return result; /*0x547a7a*/
}
