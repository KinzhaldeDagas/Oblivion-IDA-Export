// Oblivion scalar deleting destructor for Lighting30ShaderProperty. Runs the exact class destructor and frees the object through FormHeapFree when deleteFlags bit 0 is set.
Lighting30ShaderProperty *__thiscall Lighting30ShaderProperty_DeletingDestructor(
        Lighting30ShaderProperty *this,
        unsigned int deleteFlags)
{
  Lighting30ShaderProperty_Destructor(this); /*0x863703*/
  if ( (deleteFlags & 1) != 0 ) /*0x86370d*/
    FormHeapFree((unsigned int)this); /*0x863710*/
  return this; /*0x86371a*/
}
