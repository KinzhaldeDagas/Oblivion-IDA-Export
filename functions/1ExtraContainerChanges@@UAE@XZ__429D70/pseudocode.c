void __thiscall ExtraContainerChanges::~ExtraContainerChanges(ExtraContainerChanges *this)
{
  ExtraContainerChanges_Data *data; // edi

  this->super.vtbl = (BSExtraDataVtbl *)&ExtraContainerChanges::`vftable'; /*0x429d99*/
  data = this->data; /*0x429d9f*/
  if ( data ) /*0x429dac*/
  {
    ContainerExtraData_destr(data); /*0x429db0*/
    FormHeapFree((unsigned int)data); /*0x429db6*/
  }
  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable'; /*0x429dbe*/
}
