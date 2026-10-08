// OBLIVION AUTHORITY (2026-08-30): Initializes raw vector<unsigned short> storage, enforcing the 0x7FFFFFFF element limit and allocating count*2.
bool __thiscall OB_stVectorUShort_Buy_010201A0(OB_stVectorUShort_010201A0 *this, unsigned int count)
{
  unsigned __int16 *v4; // eax

  this->begin = 0; /*0x79526b*/
  this->end = 0; /*0x79526e*/
  this->capacityEnd = 0; /*0x795271*/
  if ( !count ) /*0x795274*/
    return 0; /*0x795276*/
  v4 = (unsigned __int16 *)FormHeapAlloc(2 * count); /*0x79528b*/
  this->capacityEnd = &v4[count]; /*0x795295*/
  this->begin = v4; /*0x795298*/
  this->end = v4; /*0x79529b*/
  return 1; /*0x795278*/
}
