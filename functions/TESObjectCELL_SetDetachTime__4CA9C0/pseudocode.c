int __thiscall TESObjectCELL_SetDetachTime(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  if ( sub_45A500(SaveLoad_CurrentSavegame) && a2 )
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000);
  ExtraDataList__SetDetachTime(this + 2, a2);
  if ( a2 )
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000);
  else
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11))(this, 0xE000000);
}
