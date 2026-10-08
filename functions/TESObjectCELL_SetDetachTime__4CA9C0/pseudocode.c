int __thiscall TESObjectCELL_SetDetachTime(ExtraDataList *this, BSExtraDataVtbl *detachTime)
{
  if ( sub_45A500(g_TESSaveLoadGame) && detachTime ) /*0x4ca9d9*/
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000); /*0x4ca9d9*/
  ExtraDataList_SetDetachTime(this + 2, (unsigned int)detachTime); /*0x4ca9df*/
  if ( detachTime ) /*0x4ca9e6*/
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000); /*0x4ca9f4*/
  else
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11))(this, 0xE000000); /*0x4caa07*/
}
