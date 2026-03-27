int __cdecl Menu_GetOpenMenuTile(int a1)
{
  if ( (unsigned int)(a1 - 0x3E9) > 0x32 || (unsigned __int16)word_B1397A <= (unsigned int)(a1 - 0x3E9) )
    return Menu_GetOpenMenuTile_::Return_0();
  else
    return *(_DWORD *)(dword_B13974 + 4 * a1 - 0xFA4);
}
