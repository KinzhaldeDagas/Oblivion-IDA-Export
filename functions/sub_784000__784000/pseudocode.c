// Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
const OB_stVec_010201A0 *__thiscall OB_stVector_stVec_At_010201A0(
        const OB_stVector16_010201A0 *this,
        unsigned int index)
{
  int v2; // ebx
  void *begin; // eax

  begin = this->begin; /*0x784003*/
  if ( !begin || index >= ((char *)this->end - (char *)begin) / 0x18 ) /*0x784027*/
    _invalid_parameter_noinfo(v2, index, (int)this); /*0x784029*/
  return (const OB_stVec_010201A0 *)((char *)this->begin + 0x18 * index); /*0x784034*/
}
