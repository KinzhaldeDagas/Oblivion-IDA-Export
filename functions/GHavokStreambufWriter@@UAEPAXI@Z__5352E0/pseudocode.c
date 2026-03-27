HavokStreambufWriter *__thiscall HavokStreambufWriter::`scalar deleting destructor'(
        HavokStreambufWriter *this,
        char a2)
{
  HavokStreambufWriter::~HavokStreambufWriter(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(HavokStreambufWriter *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this;
}
