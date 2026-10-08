// Verified Oblivion NonActorMagicTarget destructor runs MagicTarget_destr on subobject +0x0C and restores the BSExtraData vtable; no list removal appears in this function. Fallout's corresponding destructor explicitly removes all active-effect list entries first. This is a lifecycle difference; list ownership/cleanup responsibility in Oblivion remains Unknown pending all caller paths.
void __thiscall NonActorMagicTarget::~NonActorMagicTarget(NonActorMagicTarget *this)
{
  MagicTarget *p_magicTarget; // ecx

  p_magicTarget = 0; /*0x6a33b8*/
  if ( this ) /*0x6a33c0*/
    p_magicTarget = &this->magicTarget; /*0x6a33c2*/
  MagicTarget_destr(p_magicTarget); /*0x6a33c5*/
  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable'; /*0x6a33ca*/
}
