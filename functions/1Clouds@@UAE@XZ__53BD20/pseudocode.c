void __thiscall Clouds::~Clouds(Clouds *this)
{
  this->__vftbl = (SkyObjectVtbl *)&Clouds::`vftable'; /*0x53bd48*/
  sub_53B6E0(this); /*0x53bd56*/
  sub_53BBC0(this); /*0x53bd5d*/
  _LN21((char *)&this->unk10, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x53bd74*/
  _LN21((char *)&this->unk08, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x53bd8b*/
  SkyObject::~SkyObject((SkyObject *)this); /*0x53bd9a*/
}
