// SpeedTreeRT 4.1 source match: leaf texture vector accessor, indexing records with 0x54-byte stride.
OB_SIdvLeafTexture_010201A0 *__thiscall OB_stVectorLeafTexture_At_010201A0(void *this, unsigned int index)
{
  int v2; // ebx
  int v4; // eax

  v4 = *((_DWORD *)this + 1); /*0x78fa43*/
  if ( !v4 || index >= (*((_DWORD *)this + 2) - v4) / 0x54 ) /*0x78fa67*/
    _invalid_parameter_noinfo(v2, index, (int)this); /*0x78fa69*/
  return (OB_SIdvLeafTexture_010201A0 *)(*((_DWORD *)this + 1) + 0x54 * index); /*0x78fa76*/
}
