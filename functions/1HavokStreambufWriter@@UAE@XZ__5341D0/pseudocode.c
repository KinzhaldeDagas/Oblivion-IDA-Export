void __thiscall HavokStreambufWriter::~HavokStreambufWriter(HavokStreambufWriter *this)
{
  int v2; // edi
  char *v3; // ebp

  *(_DWORD *)this = &HavokStreambufWriter::`vftable';
  if ( *((_BYTE *)this + 0xC) )
  {
    v2 = dword_B34D90;
    v3 = (char *)(dword_B34D90 + 0x10);
    *(_DWORD *)(v2 + 0xC) = sub_533D30(*((_DWORD *)this + 2), v3);
    *v3 = 0;
    *(_DWORD *)(v2 + 8) = 0;
    *((_BYTE *)this + 0xC) = 0;
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
