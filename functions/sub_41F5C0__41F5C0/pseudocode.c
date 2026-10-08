// Remove spell-effect attached-light extra-data type 0x49 from this reference extra-data list.
int __thiscall ExtraDataList_RemoveSpellEffectLight(ExtraDataList *self)
{
  return BaseExtraList_RemoveExtraByType(self, 0x49u); /*0x41f5c7*/
}
