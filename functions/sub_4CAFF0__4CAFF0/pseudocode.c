BSExtraData *__thiscall sub_4CAFF0(ExtraDataList *this, _DWORD *a2, _DWORD *a3)
{
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    return 0;
  else
    return sub_41F9F0(this + 2, a2, a3);
}
