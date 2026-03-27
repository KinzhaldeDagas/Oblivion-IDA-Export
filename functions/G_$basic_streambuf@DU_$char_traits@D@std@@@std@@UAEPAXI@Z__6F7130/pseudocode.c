int **__thiscall std::streambuf::`scalar deleting destructor'(int **this, char a2)
{
  std::streambuf::~streambuf<char,std::char_traits<char>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
