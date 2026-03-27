int __thiscall sub_4209D0(ExtraDataList *this, char a2)
{
  int result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 )
    return BaseExtraList_RemoveExtraByType(this, kExtraData_LeveledCreature);
  result = this->members.m_presenceBitfield[6];
  if ( (result & 0x20) == 0 )
  {
    v4 = (_BYTE *)FormHeapAlloc(0xCu);
    if ( v4 )
      v5 = (BSExtraData *)sub_429BF0(v4);
    else
      v5 = 0;
    return BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
