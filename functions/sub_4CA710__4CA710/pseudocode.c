float *__thiscall sub_4CA710(TESObjectCELL *this)
{
  float *result; // eax

  if ( this->members.coordOrLight.coords )
  {
    FormHeapFree((unsigned int)this->members.coordOrLight.coords);
    this->members.coordOrLight.coords = 0;
  }
  if ( (this->members.flags0 & 1) != 0 )
  {
    result = (float *)FormHeapAlloc(0x28u);
    if ( result )
    {
      *result = 0.0;
      result[3] = 0.0;
      result[1] = 0.0;
      result[4] = 0.0;
      result[2] = 0.0;
      result[5] = 0.0;
      result[7] = 1.0;
      result[6] = 0.0;
      result[9] = 0.0;
      result[8] = 0.0;
      this->members.coordOrLight.coords = (CellCoordinates *)result;
      return result;
    }
  }
  else
  {
    result = (float *)FormHeapAlloc(8u);
    if ( result )
    {
      *result = 0.0;
      result[1] = 0.0;
      this->members.coordOrLight.coords = (CellCoordinates *)result;
      return result;
    }
  }
  this->members.coordOrLight.coords = 0;
  return 0;
}
