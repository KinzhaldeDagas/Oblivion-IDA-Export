void __thiscall HavokFileStreambufWriter::~HavokFileStreambufWriter(HavokFileStreambufWriter *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &HavokFileStreambufWriter::`vftable'; /*0x533f98*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2); /*0x533f9e*/
  if ( v2 ) /*0x533fab*/
  {
    if ( *((_BYTE *)this + 0xC) ) /*0x533fad*/
      (**v2)(v2, 1); /*0x533fb9*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x533fbb*/
}
