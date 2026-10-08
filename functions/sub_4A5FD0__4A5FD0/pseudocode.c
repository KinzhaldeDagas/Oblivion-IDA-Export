TESRegionGrassObjectList *__thiscall TESRegionGrassObjectList_ctor(
        TESRegionGrassObjectList *self,
        unsigned __int8 ownsObjectMemory)
{
  self->head = 0; /*0x4a5fd8*/
  self->tail = 0; /*0x4a5fdb*/
  self->vtable = TESRegionGrassObjectList::`vftable'; /*0x4a5fde*/
  self->ownsObjects = ownsObjectMemory; /*0x4a5fe4*/
  self->count = 0; /*0x4a5fe7*/
  return self; /*0x4a5fea*/
}
