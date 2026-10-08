ShadowSceneLight *__thiscall ShadowSceneLight::`scalar deleting destructor'(ShadowSceneLight *this, char a2)
{
  ShadowSceneLight::~ShadowSceneLight(this); /*0x7d6373*/
  if ( (a2 & 1) != 0 ) /*0x7d637d*/
    FormHeapFree((unsigned int)this); /*0x7d6380*/
  return this; /*0x7d638a*/
}
