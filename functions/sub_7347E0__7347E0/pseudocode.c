int __thiscall sub_7347E0(int this, _BYTE *a2, _BYTE *a3)
{
  __int64 v3; // rax

  v3 = *(unsigned __int16 *)(this + 0x10E); /*0x7347e7*/
  if ( (v3 & 0xFFFFFFFE) != 0 ) /*0x7347ee*/
  {
    do /*0x73481e*/
    {
      ++HIDWORD(v3); /*0x734808*/
      *a3 = *a2 - *(_BYTE *)(this + 0x104); /*0x73480b*/
      LODWORD(v3) = *(unsigned __int16 *)(this + 0x10E) >> 1; /*0x734814*/
      ++a2; /*0x734816*/
      ++a3; /*0x734819*/
    }
    while ( HIDWORD(v3) < (unsigned int)v3 ); /*0x73481e*/
  }
  return v3; /*0x734822*/
}
