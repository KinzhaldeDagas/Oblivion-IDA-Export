NiPoint3InterpController *__thiscall sub_6D7250(NiPoint3InterpController *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x15);
  *(_DWORD *)this = &NiTextureTransformController::`vftable';
  FormHeapFree(v4);
  *((_DWORD *)this + 0x15) = 0;
  NiPoint3InterpController::~NiPoint3InterpController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
