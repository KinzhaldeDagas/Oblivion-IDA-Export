WaterShaderHeightMap *__thiscall WaterShaderHeightMap::`scalar deleting destructor'(
        WaterShaderHeightMap *this,
        char a2)
{
  WaterShaderHeightMap::~WaterShaderHeightMap(this); /*0x7e1103*/
  if ( (a2 & 1) != 0 ) /*0x7e110d*/
    FormHeapFree((unsigned int)this); /*0x7e1110*/
  return this; /*0x7e111a*/
}
