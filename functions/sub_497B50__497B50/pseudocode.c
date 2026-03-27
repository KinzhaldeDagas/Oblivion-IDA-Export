LONG __cdecl sub_497B50(char a1)
{
  LONG result; // eax
  char v2; // bl
  int v3; // eax
  int (__thiscall ***v4)(_DWORD, int); // esi

  sub_7B8530(a1);
  result = dword_B350D8;
  if ( a1 )
  {
    if ( !result )
      return result;
    if ( *(_DWORD *)(result + 4) != 1 )
    {
      v2 = byte_B34D84;
      byte_B34D84 = 0;
      v3 = *(_DWORD *)(result + 4);
      if ( v3 == 2 )
        PrintError("There is 1 object with a smart pointer to the renderer we are trying to release.");
      else
        PrintError("There are %d objects with smart pointers to the renderer we are trying to release.", v3 - 1);
      result = dword_B350D8;
      byte_B34D84 = v2;
    }
  }
  if ( result )
  {
    v4 = (int (__thiscall ***)(_DWORD, int))result;
    result = InterlockedDecrement((volatile LONG *)(result + 4));
    if ( !result )
      result = (**v4)(v4, 1);
    dword_B350D8 = 0;
  }
  return result;
}
