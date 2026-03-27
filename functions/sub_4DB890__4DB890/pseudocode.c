BSExtraData *__thiscall sub_4DB890(char *this, TESForm *a2)
{
  ExtraDataList *v3; // edi
  BSExtraData *result; // eax
  BSExtraData *v5; // esi
  BSExtraDataVtbl *v6; // eax
  BSExtraDataVtbl *v7; // eax

  v3 = (ExtraDataList *)(this + 0x44);
  ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)(this + 0x44), a2);
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0x40))(this, 0x80);
  result = (BSExtraData *)ExtraDataList_GetTeleport(v3);
  v5 = result;
  if ( result )
  {
    result = (BSExtraData *)sub_42B410(result);
    if ( result )
    {
      v6 = sub_42B410(v5);
      ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)&v6[8].CompareTo, 0);
      v7 = sub_42B410(v5);
      return (BSExtraData *)(*((int (__thiscall **)(BSExtraDataVtbl *, int))v7->Destructor + 0x10))(v7, 0x80);
    }
  }
  return result;
}
