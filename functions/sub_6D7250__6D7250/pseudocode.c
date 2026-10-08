NiPoint3InterpController *__thiscall sub_6D7250(NiPoint3InterpController *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x15); /*0x6d7256*/
  *(_DWORD *)this = &NiTextureTransformController::`vftable'; /*0x6d7257*/
  FormHeapFree(v4); /*0x6d725d*/
  *((_DWORD *)this + 0x15) = 0; /*0x6d7267*/
  NiPoint3InterpController::~NiPoint3InterpController(this); /*0x6d726e*/
  if ( (a2 & 1) != 0 ) /*0x6d7278*/
    FormHeapFree((unsigned int)this); /*0x6d727b*/
  return this; /*0x6d7285*/
}
