//
// GPU static-world lifecycle audit 2026-09-27: geometry controllers-only entry forwards to NiAVObject_UpdatePropertiesAndControllers(this,time,1). Resident dependency census must account for property controllers as well as an object controller; traversing this entry alone is not proof that static material data changed.
_DWORD *__thiscall sub_7075F0(_DWORD *this, float a2)
{
  return NiAVObject_UpdatePropertiesAndControllers(this, a2, 1); /*0x7075ff*/
}
