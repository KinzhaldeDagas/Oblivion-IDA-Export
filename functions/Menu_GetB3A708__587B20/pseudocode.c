int __cdecl Menu_GetB3A708(char a1)
{
  int result; // eax
  int v2; // esi

  result = unk_B3A708; /*0x587b46*/
  if ( a1 ) /*0x587b4b*/
  {
    if ( !result ) /*0x587b4f*/
    {
      v2 = FormHeapAlloc(1u); /*0x587b58*/
      if ( v2 ) /*0x587b6b*/
        NiTArray_SetSize((unsigned __int16 *)&Menu_OpenMenuArray, 0x33u); /*0x587b74*/
      else
        v2 = 0; /*0x587b7b*/
      unk_B3A708 = v2; /*0x587b8c*/
      NiTArray_SetSize((unsigned __int16 *)&Menu_OpenMenuArray, 0x33u); /*0x587b92*/
      return unk_B3A708; /*0x587b97*/
    }
  }
  return result; /*0x587b9c*/
}
