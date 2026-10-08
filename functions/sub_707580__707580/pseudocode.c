int __thiscall sub_707580(NiAVObject *this, float applicationTime, char a3)
{
  if ( a3 ) /*0x707588*/
    NiAVObject_UpdatePropertiesAndControllers(this, applicationTime, 1); /*0x707594*/
  this->vtbl->UpdateWorldData(this); /*0x7075a0*/
  return ((int (__thiscall *)(NiAVObject *))this->vtbl->UpdateWorldBound)(this); /*0x7075ab*/
}
