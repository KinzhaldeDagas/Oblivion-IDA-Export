// ArrowProjectile constructor/initializer: constructs MobileObject state, installs projectile vtables, allocates HighProcess, clears collision/transfer flags, increments the live-projectile count, and returns this.
ArrowProjectile *__thiscall ArrowProjectile_Initialize(ArrowProjectile *this)
{
  HighProcess *v2; // eax
  HighProcess *v3; // eax

  MobilObject_constr((TESObjectREFR *)this); /*0x60790b*/
  this->super.super.super.flags |= 0x200000u; /*0x607910*/
  this->super.vtbl = (MobileObjectVtbl *)&ArrowProjectile::`vftable'{for `ArrowProjectile'}; /*0x607922*/
  this->super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&ArrowProjectile::`vftable'{for `TESChildCell'}; /*0x607928*/
  v2 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x60792f*/
  if ( v2 ) /*0x607942*/
    v3 = HighProcess::HighProcess(v2); /*0x607946*/
  else
    v3 = 0; /*0x60794d*/
  this->super.process = v3; /*0x60794f*/
  this->unk05C = 0; /*0x607952*/
  LOBYTE(this->unk094) = 0; /*0x607955*/
  this->unk098 = 0; /*0x60795b*/
  BYTE1(this->unk094) = 0;                      // Initialize ArrowProjectile byte +0x95 to zero. Actor-hit inventory transfer changes it to one. /*0x607961*/
  HIBYTE(this->unk094) = 0; /*0x607967*/
  ++g_liveArrowProjectileCount; /*0x60796d*/
  return this; /*0x607976*/
}
