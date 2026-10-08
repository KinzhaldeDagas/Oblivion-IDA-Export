void __thiscall ExtraTeleport::~ExtraTeleport(ExtraTeleport *this)
{
  Concurrency::details::_NonReentrantLock *teleport; // edi

  this->super.vtbl = (BSExtraDataVtbl *)&ExtraTeleport::`vftable'; /*0x429c59*/
  teleport = (Concurrency::details::_NonReentrantLock *)this->teleport; /*0x429c5f*/
  if ( teleport ) /*0x429c6c*/
  {
    Concurrency::details::_NonReentrantLock::_Release(teleport); /*0x429c70*/
    FormHeapFree((unsigned int)teleport); /*0x429c76*/
  }
  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable'; /*0x429c7e*/
}
