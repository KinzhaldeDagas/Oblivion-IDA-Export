void __thiscall ExtraCell3D::~ExtraCell3D(ExtraCell3D *this)
{
  UInt32 unk001; // edi
  UInt32 v3; // edi

  this->vtbl = (BSExtraDataVtbl *)&ExtraCell3D::`vftable';
  unk001 = this->unk001;
  if ( unk001 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk001 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk001)(unk001, 1);
    this->unk001 = 0;
  }
  v3 = this->unk001;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v3)(v3, 1);
  }
  this->vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable';
}
