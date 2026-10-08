CellMopp *__thiscall CellMopp::`scalar deleting destructor'(CellMopp *this, char a2)
{
  CellMopp::~CellMopp(this); /*0x5334d3*/
  if ( (a2 & 1) != 0 ) /*0x5334dd*/
    FormHeapFree((unsigned int)this); /*0x5334e0*/
  return this; /*0x5334ea*/
}
