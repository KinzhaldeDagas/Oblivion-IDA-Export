NiMaterialColorController *__thiscall NiMaterialColorController::`scalar deleting destructor'(
        NiMaterialColorController *this,
        char a2)
{
  *(_DWORD *)this = &NiMaterialColorController::`vftable'; /*0x6dee83*/
  NiPoint3InterpController::~NiPoint3InterpController(this); /*0x6dee89*/
  if ( (a2 & 1) != 0 ) /*0x6dee93*/
    FormHeapFree((unsigned int)this); /*0x6dee96*/
  return this; /*0x6deea0*/
}
