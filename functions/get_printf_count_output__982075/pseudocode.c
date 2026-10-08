int __cdecl _get_printf_count_output()
{
  return *(_DWORD *)&byte_BA9DCC[0xC] == (__security_cookie | 1); /*0x98208a*/
}
