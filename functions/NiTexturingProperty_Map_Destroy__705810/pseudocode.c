NiTexturingProperty_Map *__thiscall NiTexturingProperty_Map::Destroy(NiTexturingProperty_Map *this, bool free)
{
  char *unk08; // edi
  void *unk0C; // [esp-4h] [ebp-Ch]

  unk0C = this->unk0C; /*0x705817*/
  this->vtbl = (NiTexturingProperty_Map_Vtbl *)&NiTexturingProperty::Map::`vftable'; /*0x705818*/
  FormHeapFree((unsigned int)unk0C); /*0x70581e*/
  unk08 = this->unk08; /*0x705823*/
  if ( unk08 ) /*0x70582b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)unk08 + 1) ) /*0x705831*/
      (**(void (__thiscall ***)(char *, int))unk08)(unk08, 1); /*0x705847*/
  }
  if ( free ) /*0x705849*/
    FormHeapFree((unsigned int)this); /*0x705851*/
  return this; /*0x705859*/
}
