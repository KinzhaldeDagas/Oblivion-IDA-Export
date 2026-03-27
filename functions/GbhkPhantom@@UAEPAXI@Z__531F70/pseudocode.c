bhkPhantom *__thiscall bhkPhantom::`scalar deleting destructor'(bhkPhantom *this, char a2)
{
  bhkPhantom::~bhkPhantom(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
