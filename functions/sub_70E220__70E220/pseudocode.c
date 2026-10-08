// Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
NiRTTI *__thiscall NiRTTI_Constructor(NiRTTI *this, const char *name, NiRTTI *parent)
{
  this->name = name; /*0x70e22a*/
  this->parent = parent; /*0x70e22c*/
  return this; /*0x70e22f*/
}
