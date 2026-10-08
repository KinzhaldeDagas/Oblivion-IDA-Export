HavokFileStreambufWriter *__thiscall HavokFileStreambufWriter::`scalar deleting destructor'(
        HavokFileStreambufWriter *this,
        char a2)
{
  HavokFileStreambufWriter::~HavokFileStreambufWriter(this); /*0x5342b3*/
  if ( (a2 & 1) != 0 ) /*0x5342bd*/
    (*(void (__stdcall **)(HavokFileStreambufWriter *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x5342d2*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x5342d6*/
}
