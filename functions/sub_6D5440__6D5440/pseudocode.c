bool __thiscall sub_6D5440(NiTimeController *this, float applicationTime)
{
  bool result; // al

  result = NiTimeController_IsUpdateUnchanged(this, applicationTime); /*0x6d544b*/
  if ( !result ) /*0x6d5452*/
    *((_BYTE *)this + 0x54) = 1; /*0x6d5454*/
  return result; /*0x6d5459*/
}
