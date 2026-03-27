void __thiscall HavokFileStreambufWriter::~HavokFileStreambufWriter(HavokFileStreambufWriter *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &HavokFileStreambufWriter::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 0xC) )
      (**v2)(v2, 1);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
