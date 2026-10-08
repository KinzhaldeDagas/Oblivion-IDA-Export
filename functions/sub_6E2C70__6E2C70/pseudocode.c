NiExtraDataController *__thiscall sub_6E2C70(NiExtraDataController *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x13); /*0x6e2c76*/
  *(_DWORD *)this = &NiFloatsExtraDataController::`vftable'; /*0x6e2c77*/
  FormHeapFree(v4); /*0x6e2c7d*/
  NiExtraDataController::~NiExtraDataController(this); /*0x6e2c87*/
  if ( (a2 & 1) != 0 ) /*0x6e2c91*/
    FormHeapFree((unsigned int)this); /*0x6e2c94*/
  return this; /*0x6e2c9e*/
}
