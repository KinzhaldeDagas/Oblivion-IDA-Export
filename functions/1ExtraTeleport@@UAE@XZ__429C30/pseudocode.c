void __thiscall ExtraTeleport::~ExtraTeleport(ExtraTeleport *this)
{
  Concurrency::details::_NonReentrantLock *teleport; // edi

  this->super.vtbl = (BSExtraDataVtbl *)&ExtraTeleport::`vftable';
  teleport = (Concurrency::details::_NonReentrantLock *)this->teleport;
  if ( teleport )
  {
    Concurrency::details::_NonReentrantLock::_Release(teleport);
    FormHeapFree((unsigned int)teleport);
  }
  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable';
}
