void __thiscall sub_41F2F0(ExtraDataList *this)
{
  _BYTE *v2; // eax
  BSExtraData *v3; // eax

  if ( (this->members.m_presenceBitfield[0xA] & 1) == 0 )
  {
    v2 = (_BYTE *)FormHeapAlloc(0xCu);
    if ( v2 )
      v3 = (BSExtraData *)sub_42A010(v2);
    else
      v3 = 0;
    BaseExtraList_AddExtra(this, v3);
  }
}
