void *__thiscall std::filebuf::`scalar deleting destructor'(void *this, char a2)
{
  std::filebuf::~filebuf<char,std::char_traits<char>>((int)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
