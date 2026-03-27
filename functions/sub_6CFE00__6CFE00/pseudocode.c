int __thiscall sub_6CFE00(_WORD *this, float a2, float a3)
{
  int i; // esi
  int result; // eax

  for ( i = 0; (unsigned __int16)i < *(this + 0x22); ++i )
    result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(*((_DWORD *)this + 0xF)
                                                                    + 0x30 * (unsigned __int16)i)
                                                        + 0x84))(
               0x30 * (unsigned __int16)i + *((_DWORD *)this + 0xF),
               LODWORD(a2),
               LODWORD(a3));
  return result;
}
