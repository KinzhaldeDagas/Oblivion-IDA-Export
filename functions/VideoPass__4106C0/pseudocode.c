char __thiscall VideoPass(_DWORD *this, char a2, char a3)
{
  char result; // al
  _DWORD *v5; // esi

  result = Input_CheckLoadPumpControls(a2); /*0x4106c8*/
  if ( result )
  {
    if ( !unk_B33424 )
    {
      if ( BinkWait(*this) )
      {
        if ( *(this + 8) != 2 ) /*0x4107f1*/
        {
          Sleep(1u); /*0x4107f9*/
          return 1; /*0x410800*/
        }
      }
      else
      {
        if ( sub_40FCA0(*this, (_DWORD *)*(this + 2), 0) )
          sub_40FEC0("Bink playback: Skipped frame #%i.  Total skipped: %i", *(this + 3), ++*(this + 4));
        BinkNextFrame(*this); /*0x410726*/
        ++*(this + 3); /*0x41072c*/
      }
    }
    v5 = *(_DWORD **)&MEMORY[0xB33E90][0x1248]; /*0x41073d*/
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 0xAC))( /*0x410755*/
      *(this + 1),
      0,
      0,
      1,
      0xFF000000,
      1.0,
      0);
    if ( v5[0x80] != 1 ) /*0x41075e*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0xA4))(*(this + 1)); /*0x41076c*/
    sub_40FA20( /*0x410790*/
      (int *)*(this + 2),
      *((float *)this + 6),
      *((float *)this + 7),
      *((float *)this + 5),
      *((float *)this + 5));
    if ( v5[0x80] != 1 ) /*0x41079f*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0xA8))(*(this + 1)); /*0x4107ad*/
    if ( *(this + 8) != 2 ) /*0x4107b3*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 0x44))( /*0x4107c6*/
        *(this + 1),
        0,
        0,
        0,
        0);
    sub_768960(v5, 0x104); /*0x4107cf*/
    return *(this + 3) < *(_DWORD *)(*this + 8) || a3; /*0x4107e4*/
  }
  return result; /*0x4106d4*/
}
