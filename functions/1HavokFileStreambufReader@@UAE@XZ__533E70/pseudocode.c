void __thiscall HavokFileStreambufReader::~HavokFileStreambufReader(HavokFileStreambufReader *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &HavokFileStreambufReader::`vftable'; /*0x533e98*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2); /*0x533e9e*/
  if ( v2 ) /*0x533eab*/
  {
    if ( *((_BYTE *)this + 0xC) ) /*0x533ead*/
      (**v2)(v2, 1); /*0x533eb9*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x533ebb*/
}
