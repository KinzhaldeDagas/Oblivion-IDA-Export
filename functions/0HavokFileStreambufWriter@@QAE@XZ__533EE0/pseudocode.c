HavokFileStreambufWriter *__thiscall HavokFileStreambufWriter::HavokFileStreambufWriter(
        HavokFileStreambufWriter *this,
        const char *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &HavokFileStreambufWriter::`vftable';
  *((_BYTE *)this + 0xC) = 1;
  v3 = (_DWORD *)FormHeapAlloc(0x154u);
  if ( v3 )
    v4 = BSFile_constr(v3, a2, 1, 0x2800, 0);
  else
    v4 = 0;
  *((_DWORD *)this + 2) = v4;
  return this;
}
