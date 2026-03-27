BSExtraDataMembr *__thiscall sub_4D79F0(_BYTE *this)
{
  BSExtraData *StartLocation; // eax

  StartLocation = ExtraDataList::GetStartLocation((ExtraDataList *)(this + 0x44));
  if ( StartLocation )
    return &StartLocation->members;
  else
    return (BSExtraDataMembr *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x174))(this);
}
