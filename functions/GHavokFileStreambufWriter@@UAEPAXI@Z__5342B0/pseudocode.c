HavokFileStreambufWriter *__thiscall HavokFileStreambufWriter::`scalar deleting destructor'(
        HavokFileStreambufWriter *this,
        char a2)
{
  HavokFileStreambufWriter::~HavokFileStreambufWriter(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(HavokFileStreambufWriter *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this;
}
