CTreeEngine *__thiscall CTreeEngine::`scalar deleting destructor'(CTreeEngine *this, char a2)
{
  CTreeEngine::~CTreeEngine(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
