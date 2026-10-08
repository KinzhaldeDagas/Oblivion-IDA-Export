// Verified class constructor, not merely Candidate: base TESPackage ctor, AlarmPackage vtable store, allocates8-byte empty CrimeListNode head at complete+3C. Factory463EC0 allocates40-byte complete object for type0F.
AlarmPackage *__thiscall AlarmPackage_Constructor(AlarmPackage *self)
{
  CrimeListNode *v2; // eax

  TESPackage::TESPackage(&self->base); /*0x606888*/
  self->base.__vftable = &AlarmPackage::`vftable'; /*0x606897*/
  v2 = (CrimeListNode *)FormHeapAlloc(8u); /*0x60689d*/
  if ( v2 ) /*0x6068a7*/
  {
    v2->crime = 0; /*0x6068a9*/
    v2->next = 0; /*0x6068af*/
  }
  else
  {
    v2 = 0; /*0x6068b8*/
  }
  self->crimes = v2; /*0x6068ba*/
  return self; /*0x6068bf*/
}
