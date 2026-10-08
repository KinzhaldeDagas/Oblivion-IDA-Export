int __thiscall sub_897510(_BYTE *this)
{
  int result; // eax

  result = unk_BA7A8C; /*0x897510*/
  if ( unk_BA7A8C != 3 ) /*0x89751b*/
  {
    if ( (*(this + 0xC) & 0x40) != 0 ) /*0x897526*/
    {
      if ( result != 2 ) /*0x89752b*/
      {
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x6C))(this); /*0x897534*/
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x68))(this); /*0x89753d*/
        *((_WORD *)this + 6) &= ~0x40u; /*0x89753f*/
      }
    }
    else if ( (*(this + 0xC) & 1) != 0 ) /*0x89754b*/
    {
      result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x74))(this); /*0x897554*/
      if ( (_BYTE)result ) /*0x897558*/
      {
        if ( unk_BA7A8C != 2 ) /*0x897561*/
          return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x68))(this); /*0x89756b*/
      }
      else if ( unk_BA7A8C != 1 ) /*0x897574*/
      {
        return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x64))(this); /*0x89757e*/
      }
    }
  }
  return result; /*0x897545*/
}
