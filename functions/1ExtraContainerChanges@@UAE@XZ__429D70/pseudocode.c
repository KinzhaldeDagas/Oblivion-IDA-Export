void __thiscall ExtraContainerChanges::~ExtraContainerChanges(ExtraContainerChanges *this)
{
  ExtraContainerChanges_Data *data; // edi

  this->super.vtbl = (BSExtraDataVtbl *)&ExtraContainerChanges::`vftable';
  data = this->data;
  if ( data )
  {
    ContainerExtraData_destr(data);
    FormHeapFree((unsigned int)data);
  }
  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable';
}
