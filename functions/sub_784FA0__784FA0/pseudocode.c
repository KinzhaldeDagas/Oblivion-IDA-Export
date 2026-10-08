// Oblivion 1.2.0.416: initializes an empty 24-byte-record vector and allocates capacity*0x18 bytes when capacity is nonzero.
bool __thiscall OB_stVector24_Buy_010201A0(OB_stVector24_010201A0 *this, unsigned int capacity)
{
  unsigned __int8 *v4; // eax

  this->begin = 0; /*0x784fab*/
  this->end = 0; /*0x784fae*/
  this->capacityEnd = 0; /*0x784fb1*/
  if ( !capacity ) /*0x784fb4*/
    return 0; /*0x784fb6*/
  v4 = (unsigned __int8 *)FormHeapAlloc(0x18 * capacity); /*0x784fd1*/
  this->capacityEnd = &v4[0x18 * capacity]; /*0x784fdb*/
  this->begin = v4; /*0x784fde*/
  this->end = v4; /*0x784fe1*/
  return 1; /*0x784fb8*/
}
