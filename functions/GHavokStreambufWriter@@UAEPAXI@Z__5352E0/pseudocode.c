HavokStreambufWriter *__thiscall HavokStreambufWriter::`scalar deleting destructor'(
        HavokStreambufWriter *this,
        char a2)
{
  HavokStreambufWriter::~HavokStreambufWriter(this); /*0x5352e3*/
  if ( (a2 & 1) != 0 ) /*0x5352ed*/
    (*(void (__stdcall **)(HavokStreambufWriter *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x535302*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x535306*/
}
