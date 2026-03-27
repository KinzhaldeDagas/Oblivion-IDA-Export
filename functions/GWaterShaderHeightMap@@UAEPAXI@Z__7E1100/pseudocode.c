WaterShaderHeightMap *__thiscall WaterShaderHeightMap::`scalar deleting destructor'(
        WaterShaderHeightMap *this,
        char a2)
{
  WaterShaderHeightMap::~WaterShaderHeightMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
