int __cdecl sub_5479F0(int a1, unsigned int *a2, unsigned int *a3, int *a4, unsigned int *a5)
{
  unsigned int RandomLargeInteger; // ebp
  int i; // esi
  int v7; // edx
  int result; // eax
  unsigned int v9; // [esp+10h] [ebp-10h]
  unsigned int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v9 = 0xFFFFFFFF;
  v10 = 0xFFFFFFFF;
  v11 = 0xFFFFFFFF;
  v12 = 0xFFFFFFFF;
  RandomLargeInteger = GetRandomLargeInteger_(0);
  for ( i = 4; i > 0; --i )
  {
    v7 = GetRandomLargeInteger_(a1 << i) % i;
    while ( *(&v9 + v7) != 0xFFFFFFFF )
    {
      if ( v7 < 3 )
        ++v7;
    }
    *(&v9 + v7) = i;
  }
  GetRandomLargeInteger_(RandomLargeInteger);
  *a2 = v9;
  *a3 = v10;
  result = v11;
  *a4 = v11;
  *a5 = v12;
  return result;
}
