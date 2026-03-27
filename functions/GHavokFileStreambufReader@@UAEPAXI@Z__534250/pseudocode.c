HavokFileStreambufReader *__thiscall HavokFileStreambufReader::`scalar deleting destructor'(
        HavokFileStreambufReader *this,
        char a2)
{
  HavokFileStreambufReader::~HavokFileStreambufReader(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(HavokFileStreambufReader *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this;
}
