BackgroundLoader *__thiscall BackgroundLoader::`scalar deleting destructor'(BackgroundLoader *this, char a2)
{
  BackgroundLoader::~BackgroundLoader(this); /*0x42fe63*/
  if ( (a2 & 1) != 0 ) /*0x42fe6d*/
    FormHeapFree((unsigned int)this); /*0x42fe70*/
  return this; /*0x42fe7a*/
}
