ShadowSceneLight *__thiscall ShadowSceneLight::`scalar deleting destructor'(ShadowSceneLight *this, char a2)
{
  ShadowSceneLight::~ShadowSceneLight(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
