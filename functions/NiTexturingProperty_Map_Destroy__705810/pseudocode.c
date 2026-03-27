NiTexturingProperty_Map *__thiscall NiTexturingProperty_Map::Destroy(NiTexturingProperty_Map *this, bool free)
{
  char *unk08; // edi
  void *unk0C; // [esp-4h] [ebp-Ch]

  unk0C = this->unk0C;
  this->vtbl = (NiTexturingProperty_Map_Vtbl *)&NiTexturingProperty::Map::`vftable';
  FormHeapFree((unsigned int)unk0C);
  unk08 = this->unk08;
  if ( unk08 )
  {
    if ( !InterlockedDecrement((volatile LONG *)unk08 + 1) )
      (**(void (__thiscall ***)(char *, int))unk08)(unk08, 1);
  }
  if ( free )
    FormHeapFree((unsigned int)this);
  return this;
}
