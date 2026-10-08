char __thiscall sub_42C360(unsigned int *this, int a2, int a3)
{
  int v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // eax

  v3 = *(this + 0x52); /*0x42c368*/
  if ( a3 == 1 ) /*0x42c36e*/
  {
    v4 = *(this + 0x54); /*0x42c3a7*/
    *(this + 0x52) = v3 + a2; /*0x42c3b1*/
    if ( v3 + a2 <= v4 ) /*0x42c3b7*/
      goto LABEL_12; /*0x42c3b7*/
    goto LABEL_11; /*0x42c3b7*/
  }
  v4 = a2; /*0x42c373*/
  if ( a3 != 2 ) /*0x42c377*/
  {
    if ( a2 > *(this + 0x54) ) /*0x42c381*/
      v4 = *(this + 0x54); /*0x42c383*/
LABEL_11:
    *(this + 0x52) = v4; /*0x42c3b9*/
    goto LABEL_12; /*0x42c3b9*/
  }
  if ( a2 < 0 ) /*0x42c389*/
    v4 = -a2; /*0x42c38b*/
  v5 = *(this + 0x54); /*0x42c38d*/
  if ( v4 > v5 ) /*0x42c395*/
    v4 = *(this + 0x54); /*0x42c397*/
  *(this + 0x52) = v5 - v4; /*0x42c39b*/
LABEL_12:
  *(this + 5) += *(this + 0x52) - v3; /*0x42c3bf*/
  v6 = *(this + 5); /*0x42c3ca*/
  if ( v6 > *(this + 4) ) /*0x42c3d1*/
    LOBYTE(v6) = NiFile_Flush((int)this); /*0x42c3d3*/
  return v6; /*0x42c3d0*/
}
