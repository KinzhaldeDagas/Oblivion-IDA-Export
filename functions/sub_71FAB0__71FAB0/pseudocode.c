// Initialize one 8-byte shared-normal entry to an empty count and null UInt16 index list.
NiSharedNormalArrayEntry *__thiscall NiSharedNormalArrayEntry_Construct(NiSharedNormalArrayEntry *self)
{
  self->count = 0; /*0x71fab2*/
  self->indices = 0; /*0x71fab7*/
  return self; /*0x71fabe*/
}
