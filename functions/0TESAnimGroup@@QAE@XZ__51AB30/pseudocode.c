// Constructs ref-counted TESAnimGroup state: encoded key/required-note array, zero morph and blend bytes, zero movement vector, and empty parsed-event count/pointer at +0x24/+0x28.
CAS_TESAnimGroup_Decoded *__thiscall TESAnimGroup_ctor(CAS_TESAnimGroup_Decoded *this, unsigned __int16 groupKey)
{
  this->vftable = &NiRefObject::`vftable'; /*0x51ab60*/
  this->refCount = 0; /*0x51ab66*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x51ab69*/
  this->vftable = &TESAnimGroup::`vftable'; /*0x51ab6f*/
  this->requiredNoteTimes = 0; /*0x51ab75*/
  this->morphKey = 0; /*0x51ab78*/
  this->blend = 0; /*0x51ab7b*/
  this->moveX = g_zeroNiPoint3.x; /*0x51ab83*/
  this->moveY = g_zeroNiPoint3.y; /*0x51ab90*/
  this->moveZ = g_zeroNiPoint3.z; /*0x51aba0*/
  TESAnimGroup_InitKeyAndRequiredNotes(this, groupKey); /*0x51aba3*/
  this->events = 0; /*0x51aba8*/
  this->eventCount = 0; /*0x51abab*/
  return this; /*0x51abb0*/
}
