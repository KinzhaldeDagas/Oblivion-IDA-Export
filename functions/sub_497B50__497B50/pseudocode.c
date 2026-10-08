LONG __cdecl sub_497B50(char a1)
{
  LONG result; // eax
  char v2; // bl
  int v3; // eax
  int (__thiscall ***v4)(_DWORD, int); // esi

  sub_7B8530(a1); /*0x497b56*/
  result = *(_DWORD *)&MEMORY[0xB33E90][0x1248]; /*0x497b5b*/
  if ( a1 ) /*0x497b65*/
  {
    if ( !result ) /*0x497b69*/
      return result; /*0x497b69*/
    if ( *(_DWORD *)(result + 4) != 1 ) /*0x497b6f*/
    {
      v2 = MEMORY[0xB33E90][0xEF4]; /*0x497b71*/
      MEMORY[0xB33E90][0xEF4] = 0; /*0x497b77*/
      v3 = *(_DWORD *)(result + 4); /*0x497b7e*/
      if ( v3 == 2 ) /*0x497b84*/
        PrintError("There is 1 object with a smart pointer to the renderer we are trying to release."); /*0x497b8b*/
      else
        PrintError("There are %d objects with smart pointers to the renderer we are trying to release.", v3 - 1); /*0x497b9e*/
      result = *(_DWORD *)&MEMORY[0xB33E90][0x1248]; /*0x497ba6*/
      MEMORY[0xB33E90][0xEF4] = v2; /*0x497bab*/
    }
  }
  if ( result ) /*0x497bb3*/
  {
    v4 = (int (__thiscall ***)(_DWORD, int))result; /*0x497bb6*/
    result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x497bbc*/
    if ( !result ) /*0x497bc4*/
      result = (**v4)(v4, 1); /*0x497bd2*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1248] = 0; /*0x497bd4*/
  }
  return result; /*0x497bdf*/
}
