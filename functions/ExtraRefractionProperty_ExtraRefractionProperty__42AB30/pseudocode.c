ExtraRefractionProperty *__thiscall ExtraRefractionProperty::ExtraRefractionProperty(
        ExtraRefractionProperty *this,
        float refractionAmount)
{
  this->refractionAmount = refractionAmount; /*0x42ab36*/
  this->super.members.type = 0x51; /*0x42ab39*/
  this->super.members.next = 0; /*0x42ab3d*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraRefractionProperty::`vftable'; /*0x42ab44*/
  return this; /*0x42ab4a*/
}
