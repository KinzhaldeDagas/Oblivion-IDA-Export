ExtraWaterHeight *__thiscall ExtraWaterHeight::ExtraWaterHeight(ExtraWaterHeight *this, float a2)
{
  this->waterHeight = a2;
  this->super.members.type = 4;
  this->super.members.next = 0;
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraWaterHeight::`vftable';
  return this;
}
