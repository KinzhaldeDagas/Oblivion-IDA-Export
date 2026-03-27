_DWORD *__thiscall sub_8DF000(int (__thiscall ****this)(int (__stdcall ***)(signed int), int), char a2)
{
  _DWORD *v2; // esi

  v2 = this + 0xFFFFFFFE;
  sub_8DEED0(this + 0xFFFFFFFE);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      v2,
      *((unsigned __int16 *)v2 + 2),
      0xC);
  return v2;
}
