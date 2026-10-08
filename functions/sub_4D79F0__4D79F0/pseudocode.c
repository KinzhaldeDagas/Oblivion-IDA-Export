BSExtraDataMembr *__thiscall sub_4D79F0(_BYTE *this)
{
  BSExtraData *StartLocation; // eax

  StartLocation = ExtraDataList::GetStartLocation((ExtraDataList *)(this + 0x44)); /*0x4d79f6*/
  if ( StartLocation ) /*0x4d79fd*/
    return &StartLocation->members; /*0x4d79ff*/
  else
    return (*(BSExtraDataMembr *(__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x174))(this); /*0x4d7a0f*/
}
