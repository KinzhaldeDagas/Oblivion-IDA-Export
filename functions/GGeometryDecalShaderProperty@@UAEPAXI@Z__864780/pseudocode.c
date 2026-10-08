BSShaderLightingPropertyLayout_t *__thiscall GeometryDecalShaderProperty::`scalar deleting destructor'(
        BSShaderLightingPropertyLayout_t *this,
        char a2)
{
  this->base.vtbl = &GeometryDecalShaderProperty::`vftable'; /*0x864783*/
  BSShaderLightingProperty::~BSShaderLightingProperty(this); /*0x864789*/
  if ( (a2 & 1) != 0 ) /*0x864793*/
    FormHeapFree((unsigned int)this); /*0x864796*/
  return this; /*0x8647a0*/
}
