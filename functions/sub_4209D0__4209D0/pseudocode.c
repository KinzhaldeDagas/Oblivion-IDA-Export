// Oblivion marker toggle: false removes ExtraLeveledCreature (type 0x35); true creates the marker only if absent. No Fallout field layout is assumed.
int __thiscall ExtraDataList_SetLeveledCreatureFlag(ExtraDataList *this, char a2)
{
  int result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 ) /*0x4209f8*/
    return BaseExtraList_RemoveExtraByType(this, kExtraData_LeveledCreature); /*0x420a4c*/
  result = this->members.m_presenceBitfield[6]; /*0x4209fa*/
  if ( (result & 0x20) == 0 ) /*0x420a00*/
  {
    v4 = (_BYTE *)FormHeapAlloc(0xCu); /*0x420a04*/
    if ( v4 ) /*0x420a1a*/
      v5 = (BSExtraData *)ExtraLeveledCreature_ctor(v4); /*0x420a1e*/
    else
      v5 = 0; /*0x420a25*/
    return BaseExtraList_AddExtra(this, v5); /*0x420a32*/
  }
  return result; /*0x420a37*/
}
