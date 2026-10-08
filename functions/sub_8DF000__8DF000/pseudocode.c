int (__thiscall ****__thiscall sub_8DF000(
        int (__stdcall ****this)(signed int),
        char a2))(int (__stdcall ***)(signed int), int)
{
  int (__thiscall ****v2)(int (__stdcall ***)(signed int), int); // esi

  v2 = (int (__thiscall ****)(int (__stdcall ***)(signed int), int))(this + 0xFFFFFFFE); /*0x8df021*/
  sub_8DEED0(this + 0xFFFFFFFE); /*0x8df023*/
  if ( (a2 & 1) != 0 ) /*0x8df02d*/
    (*(void (__stdcall **)(int (__thiscall ****)(int (__stdcall ***)(signed int), int), _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8df03f*/
      v2,
      *((unsigned __int16 *)v2 + 2),
      0xC);
  return v2; /*0x8df045*/
}
