int __cdecl sub_5C1060(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // ecx
  int v6; // edx

  result = a1;
  if ( (unsigned int)(a1 + 1) <= 8 )
  {
    v2 = dword_B3B430[0];
    if ( a1 != dword_B3B430[0] )
    {
      byte_B3B420 = 0;
      if ( a1 < 0 || v2 >= 0 )
      {
        dword_B3B438 = dword_B3B434;
        v4 = dword_B3B428;
        dword_B3B434 = v2;
        v5 = Seed;
        dword_B3B42C = v4;
        v6 = v5 - dword_B3B424[0];
        dword_B3B424[0] = v5;
        dword_B3B428 = v6;
        dword_B3B430[0] = a1;
      }
      else
      {
        dword_B3B428 = 0;
        dword_B3B42C = 0;
        v3 = Seed;
        dword_B3B434 = 0xFFFFFFFF;
        dword_B3B438 = 0xFFFFFFFF;
        dword_B3B424[0] = v3;
        dword_B3B430[0] = a1;
      }
    }
  }
  return result;
}
