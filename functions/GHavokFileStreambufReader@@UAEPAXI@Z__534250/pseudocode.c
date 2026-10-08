HavokFileStreambufReader *__thiscall HavokFileStreambufReader::`scalar deleting destructor'(
        HavokFileStreambufReader *this,
        char a2)
{
  HavokFileStreambufReader::~HavokFileStreambufReader(this); /*0x534253*/
  if ( (a2 & 1) != 0 ) /*0x53425d*/
    (*(void (__stdcall **)(HavokFileStreambufReader *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x534272*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x534276*/
}
