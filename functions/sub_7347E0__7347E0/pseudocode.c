int __thiscall sub_7347E0(int this, _BYTE *a2, _BYTE *a3)
{
  __int64 v3; // rax

  v3 = *(unsigned __int16 *)(this + 0x10E);
  if ( (v3 & 0xFFFFFFFE) != 0 )
  {
    do
    {
      ++HIDWORD(v3);
      *a3 = *a2 - *(_BYTE *)(this + 0x104);
      LODWORD(v3) = *(unsigned __int16 *)(this + 0x10E) >> 1;
      ++a2;
      ++a3;
    }
    while ( HIDWORD(v3) < (unsigned int)v3 );
  }
  return v3;
}
