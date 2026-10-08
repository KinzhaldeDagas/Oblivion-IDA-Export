float *__thiscall sub_4CA710(TESObjectCELL *this)
{
  float *result; // eax

  if ( this->members.coordOrLight.coords ) /*0x4ca714*/
  {
    FormHeapFree((unsigned int)this->members.coordOrLight.coords); /*0x4ca71e*/
    this->members.coordOrLight.coords = 0; /*0x4ca726*/
  }
  if ( (this->members.flags0 & 1) != 0 ) /*0x4ca72d*/
  {
    result = (float *)FormHeapAlloc(0x28u); /*0x4ca731*/
    if ( result ) /*0x4ca73b*/
    {
      *result = 0.0; /*0x4ca73f*/
      result[3] = 0.0; /*0x4ca741*/
      result[1] = 0.0; /*0x4ca744*/
      result[4] = 0.0; /*0x4ca747*/
      result[2] = 0.0; /*0x4ca74a*/
      result[5] = 0.0; /*0x4ca74f*/
      result[7] = 1.0; /*0x4ca752*/
      result[6] = 0.0; /*0x4ca755*/
      result[9] = 0.0; /*0x4ca758*/
      result[8] = 0.0; /*0x4ca75b*/
      this->members.coordOrLight.coords = (CellCoordinates *)result; /*0x4ca75e*/
      return result; /*0x4ca763*/
    }
  }
  else
  {
    result = (float *)FormHeapAlloc(8u); /*0x4ca766*/
    if ( result ) /*0x4ca770*/
    {
      *result = 0.0; /*0x4ca772*/
      result[1] = 0.0; /*0x4ca774*/
      this->members.coordOrLight.coords = (CellCoordinates *)result; /*0x4ca777*/
      return result; /*0x4ca77c*/
    }
  }
  this->members.coordOrLight.coords = 0; /*0x4ca77f*/
  return 0; /*0x4ca761*/
}
