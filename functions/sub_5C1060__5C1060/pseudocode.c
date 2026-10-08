int __cdecl sub_5C1060(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // ecx
  int v6; // edx

  result = a1; /*0x5c1060*/
  if ( (unsigned int)(a1 + 1) <= 8 ) /*0x5c106a*/
  {
    v2 = *(_DWORD *)&byte_B3B418[0x18]; /*0x5c1070*/
    if ( a1 != *(_DWORD *)&byte_B3B418[0x18] ) /*0x5c1078*/
    {
      byte_B3B418[8] = 0; /*0x5c107e*/
      if ( a1 < 0 || v2 >= 0 ) /*0x5c1088*/
      {
        *(_DWORD *)&byte_B3B418[0x20] = *(_DWORD *)&byte_B3B418[0x1C]; /*0x5c10bd*/
        v4 = *(_DWORD *)&byte_B3B418[0x10]; /*0x5c10c3*/
        *(_DWORD *)&byte_B3B418[0x1C] = v2; /*0x5c10c9*/
        v5 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5c10cf*/
        *(_DWORD *)&byte_B3B418[0x14] = v4; /*0x5c10d5*/
        v6 = v5 - *(_DWORD *)&byte_B3B418[0xC]; /*0x5c10dd*/
        *(_DWORD *)&byte_B3B418[0xC] = v5; /*0x5c10e3*/
        *(_DWORD *)&byte_B3B418[0x10] = v6; /*0x5c10e9*/
        *(_DWORD *)&byte_B3B418[0x18] = a1; /*0x5c10ef*/
      }
      else
      {
        *(_DWORD *)&byte_B3B418[0x10] = 0; /*0x5c108d*/
        *(_DWORD *)&byte_B3B418[0x14] = 0; /*0x5c1093*/
        v3 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5c1099*/
        *(_DWORD *)&byte_B3B418[0x1C] = 0xFFFFFFFF; /*0x5c109f*/
        *(_DWORD *)&byte_B3B418[0x20] = 0xFFFFFFFF; /*0x5c10a5*/
        *(_DWORD *)&byte_B3B418[0xC] = v3; /*0x5c10ab*/
        *(_DWORD *)&byte_B3B418[0x18] = a1; /*0x5c10b1*/
      }
    }
  }
  return result; /*0x5c10b6*/
}
