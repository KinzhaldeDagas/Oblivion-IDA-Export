NiKeyframeManager *__thiscall NiKeyframeManager::`scalar deleting destructor'(NiKeyframeManager *this, char a2)
{
  NiKeyframeManager::~NiKeyframeManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
