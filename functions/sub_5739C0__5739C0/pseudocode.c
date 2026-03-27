int __thiscall sub_5739C0(
        float *this,
        int a2,
        float *a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  *a3 = 0.0;
  *a4 = *(this + 0xB);
  if ( !*(_BYTE *)(a2 + LODWORD(a8)) )
    JUMPOUT(0x573BC8);
  if ( !a5 )
    JUMPOUT(0x573BC5);
  if ( a5 > 0 )
    --a5;
  switch ( *(_BYTE *)(a2 + LODWORD(a8)) )
  {
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
      return def_573A25(a2, COERCE_INT(0.0), (int)a4, a5, a6, a7, a8);
    default:
      JUMPOUT(0x573A32);
  }
}
