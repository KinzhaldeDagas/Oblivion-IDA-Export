int sub_774250()
{
  int i; // esi
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  for ( i = dword_B3F700; i; i = *(_DWORD *)(i + 0x2C) )
  {
    v1 = *(int (__thiscall ****)(_DWORD, int))(i + 0x24);
    if ( v1 )
    {
      *(_DWORD *)(i + 0x24) = 0;
      result = (**v1)(v1, 1);
    }
  }
  return result;
}
