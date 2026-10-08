// Loads NiTimeController state. For stream versions >= 0x0A010068, reads and smart-assigns the serialized interpolator reference at +0x3C; older formats leave concrete controllers to migrate legacy data.
_DWORD *__thiscall NiSingleInterpController_LoadBinary(int *this, _DWORD *a2)
{
  _DWORD *result; // eax
  Ni2DBuffer *v4; // eax

  result = (_DWORD *)NiInterpController_LoadBinary((NiRenderer *)this, (signed int)a2); /*0x6ce329*/
  if ( a2[0x36] >= 0xA010068u ) /*0x6ce338*/
  {
    v4 = (Ni2DBuffer *)sub_712A90(a2); /*0x6ce33c*/
    return NiSmartPointer_Set__((Ni2DBuffer **)this + 0xF, v4); /*0x6ce345*/
  }
  return result; /*0x6ce34a*/
}
