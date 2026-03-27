bhkAabbPhantom *__thiscall bhkAabbPhantom::`scalar deleting destructor'(bhkAabbPhantom *this, char a2)
{
  bhkAabbPhantom::~bhkAabbPhantom(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
