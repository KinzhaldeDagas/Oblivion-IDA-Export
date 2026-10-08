NiLightColorController *__thiscall NiLightColorController::`scalar deleting destructor'(
        NiLightColorController *this,
        char a2)
{
  *(_DWORD *)this = &NiLightColorController::`vftable'; /*0x6e0d63*/
  NiPoint3InterpController::~NiPoint3InterpController(this); /*0x6e0d69*/
  if ( (a2 & 1) != 0 ) /*0x6e0d73*/
    FormHeapFree((unsigned int)this); /*0x6e0d76*/
  return this; /*0x6e0d80*/
}
