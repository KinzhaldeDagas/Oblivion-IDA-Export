// Remove ordinary attached-light extra-data type 0x30 from this reference extra-data list.
int __thiscall ExtraDataList_RemoveExtraLight(ExtraDataList *self)
{
  return BaseExtraList_RemoveExtraByType(self, 0x30u); /*0x41f5b7*/
}
