// Verified: clears all 18 pointer slots (0x48 bytes), returns self. No vtable or extra header in this Oblivion allocation.
AVCollectionIndex *__thiscall AVCollection_InitArray(AVCollectionIndex *self)
{
  self->health[0] = 0; /*0x65bca4*/
  self->health[1] = 0; /*0x65bca6*/
  self->health[2] = 0; /*0x65bca9*/
  self->health[3] = 0; /*0x65bcac*/
  self->health[4] = 0; /*0x65bcaf*/
  self->health[5] = 0; /*0x65bcb2*/
  self->health[6] = 0; /*0x65bcb5*/
  self->health[7] = 0; /*0x65bcb8*/
  self->health[8] = 0; /*0x65bcbb*/
  self->health[9] = 0; /*0x65bcbe*/
  self->health[0xA] = 0; /*0x65bcc1*/
  self->health[0xB] = 0; /*0x65bcc4*/
  self->health[0xC] = 0; /*0x65bcc7*/
  self->health[0xD] = 0; /*0x65bcca*/
  self->health[0xE] = 0; /*0x65bccd*/
  self->health[0xF] = 0; /*0x65bcd0*/
  self->health[0x10] = 0; /*0x65bcd3*/
  self->health[0x11] = 0; /*0x65bcd6*/
  return self; /*0x65bcd9*/
}
