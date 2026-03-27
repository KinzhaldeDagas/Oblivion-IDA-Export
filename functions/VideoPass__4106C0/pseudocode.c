char __thiscall VideoPass(_DWORD *this, char a2, char a3)
{
  char result; // al
  _DWORD *v8; // esi

  result = sub_410390(a2);
  if ( result )
  {
    if ( !byte_B33424 )
    {
      if ( BinkWait(*this) )
      {
        if ( *(this + 8) != 2 )
        {
          Sleep(1u);
          return 1;
        }
      }
      else
      {
        if ( sub_40FCA0(*this, (_DWORD *)*(this + 2), 0) )
          sub_40FEC0("Bink playback: Skipped frame #%i.  Total skipped: %i", *(this + 3), ++*(this + 4));
        BinkNextFrame(*this);
        ++*(this + 3);
      }
    }
    v8 = (_DWORD *)dword_B350D8;
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 0xAC))(
      *(this + 1),
      0,
      0,
      1,
      0xFF000000,
      1.0,
      0);
    if ( v8[0x80] != 1 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0xA4))(*(this + 1));
    sub_40FA20(
      (int *)*(this + 2),
      *((float *)this + 6),
      *((float *)this + 7),
      *((float *)this + 5),
      *((float *)this + 5));
    if ( v8[0x80] != 1 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0xA8))(*(this + 1));
    if ( *(this + 8) != 2 )
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 0x44))(
        *(this + 1),
        0,
        0,
        0,
        0);
    sub_768960(v8, 0x104);
    return *(this + 3) < *(_DWORD *)(*this + 8) || a3;
  }
  return result;
}
