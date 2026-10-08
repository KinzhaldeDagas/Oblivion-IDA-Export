// Construct a 20-byte linked pool block for shared-normal UInt16 index lists.
NiSharedNormalIndexPoolBlock *__thiscall NiSharedNormalIndexPoolBlock_Construct(
        NiSharedNormalIndexPoolBlock *self,
        unsigned int capacity)
{
  unsigned __int16 *v3; // eax

  v3 = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)capacity >> 0x1F != 0 ? 0xFFFFFFFF : 2 * capacity);
  self->capacity = capacity; /*0x71fae3*/
  self->remaining = capacity; /*0x71fae6*/
  self->begin = v3; /*0x71fae9*/
  self->cursor = v3; /*0x71faeb*/
  self->next = 0; /*0x71faef*/
  return self; /*0x71faee*/
}
