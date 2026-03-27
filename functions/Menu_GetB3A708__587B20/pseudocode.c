int __cdecl Menu_GetB3A708(char a1)
{
  int result; // eax
  int v2; // esi

  result = dword_B3A708;
  if ( a1 )
  {
    if ( !result )
    {
      v2 = FormHeapAlloc(1u);
      if ( v2 )
        NiTArray_SetSize((unsigned __int16 *)&Menu_OpenMenuArray, 0x33u);
      else
        v2 = 0;
      dword_B3A708 = v2;
      NiTArray_SetSize((unsigned __int16 *)&Menu_OpenMenuArray, 0x33u);
      return dword_B3A708;
    }
  }
  return result;
}
