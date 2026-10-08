Clouds *__thiscall Clouds::Clouds(Clouds *this)
{
  SkyObject::SkyObject((SkyObject *)this); /*0x53bca8*/
  this->__vftbl = (SkyObjectVtbl *)&Clouds::`vftable'; /*0x53bcc7*/
  ArrayConstructor( /*0x53bccd*/
    (char *)&this->unk08,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x53bce9*/
    (char *)&this->unk10,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  sub_53B6E0(this); /*0x53bcf5*/
  sub_53BBC0(this); /*0x53bcfc*/
  return this; /*0x53bd03*/
}
