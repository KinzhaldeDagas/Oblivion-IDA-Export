NiMaterialColorController *__thiscall NiMaterialColorController::`scalar deleting destructor'(
        NiMaterialColorController *this,
        char a2)
{
  *(_DWORD *)this = &NiMaterialColorController::`vftable';
  NiPoint3InterpController::~NiPoint3InterpController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
