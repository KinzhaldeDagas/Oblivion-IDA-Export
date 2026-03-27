CellMopp *__thiscall CellMopp::`scalar deleting destructor'(CellMopp *this, char a2)
{
  CellMopp::~CellMopp(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
