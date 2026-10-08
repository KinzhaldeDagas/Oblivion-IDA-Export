// MiddleLowProcess constructor: derives from LowProcess and installs MiddleLowProcess vtable; no currentPackage or movementFlags storage.
MiddleLowProcess *__thiscall MiddleLowProcess::MiddleLowProcess(MiddleLowProcess *this)
{
  LowProcess::LowProcess(this); /*0x6586b8*/
  this->__vftable = (MiddleLowProcess_vtbl *)&MiddleLowProcess::`vftable'; /*0x6586cb*/
  AVCollection_Constr(&this->maxAVModifiers); /*0x6586d1*/
  return this; /*0x6586d8*/
}
