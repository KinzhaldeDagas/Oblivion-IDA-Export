ExtraRefractionProperty *__thiscall ExtraRefractionProperty::ExtraRefractionProperty(
        ExtraRefractionProperty *this,
        float refractionAmount)
{
  this->refractionAmount = refractionAmount;
  this->super.members.type = 0x51;
  this->super.members.next = 0;
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraRefractionProperty::`vftable';
  return this;
}
