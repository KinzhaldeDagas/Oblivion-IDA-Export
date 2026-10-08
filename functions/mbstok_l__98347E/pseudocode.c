char *__usercall _mbstok_l@<eax>(int a1@<esi>, char *Str, char *Delim, struct localeinfo_struct *a4)
{
  DWORD *v4; // eax

  v4 = _getptd(); /*0x98347e*/
  return _mbstok_s_l(a1, Str, Delim, (char **)v4 + 8, a4); /*0x98349b*/
}
