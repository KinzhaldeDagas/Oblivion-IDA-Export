void __thiscall Clouds::~Clouds(Clouds *this)
{
  this->__vftbl = (SkyObjectVtbl *)&Clouds::`vftable';
  sub_53B6E0(this);
  sub_53BBC0(this);
  _LN21(&this->unk10, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(&this->unk08, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  SkyObject::~SkyObject((SkyObject *)this);
}
