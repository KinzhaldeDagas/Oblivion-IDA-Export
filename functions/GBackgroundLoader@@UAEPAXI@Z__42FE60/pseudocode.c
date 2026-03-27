BackgroundLoader *__thiscall BackgroundLoader::`scalar deleting destructor'(BackgroundLoader *this, char a2)
{
  BackgroundLoader::~BackgroundLoader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
