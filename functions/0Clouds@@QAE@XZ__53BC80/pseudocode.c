Clouds *__thiscall Clouds::Clouds(Clouds *this)
{
  SkyObject::SkyObject((SkyObject *)this);
  this->__vftbl = (SkyObjectVtbl *)&Clouds::`vftable';
  ArrayConstructor(
    &this->unk08,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    &this->unk10,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  sub_53B6E0(this);
  sub_53BBC0(this);
  return this;
}
