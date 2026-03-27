BSExtraData *__thiscall sub_4DB900(char *this)
{
  ExtraDataList *v2; // esi
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *v5; // eax
  BSExtraDataVtbl *v6; // eax
  BSExtraDataVtbl *v7; // eax
  BSExtraDataVtbl *v8; // eax

  v2 = (ExtraDataList *)(this + 0x44);
  ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)(this + 0x44), 0);
  sub_423720(v2, 0);
  sub_4237E0(v2, (BSExtraDataVtbl *)0xFFFFFFFF);
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0x40))(this, 0x380);
  result = (BSExtraData *)ExtraDataList_GetTeleport(v2);
  v4 = result;
  if ( result )
  {
    result = (BSExtraData *)sub_42B410(result);
    if ( result )
    {
      v5 = sub_42B410(v4);
      ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)&v5[8].CompareTo, 0);
      v6 = sub_42B410(v4);
      sub_423720((ExtraDataList *)&v6[8].CompareTo, 0);
      v7 = sub_42B410(v4);
      sub_4237E0((ExtraDataList *)&v7[8].CompareTo, (BSExtraDataVtbl *)0xFFFFFFFF);
      v8 = sub_42B410(v4);
      return (BSExtraData *)(*((void *(__thiscall **)(BSExtraDataVtbl *, int))v8->Destructor + 0x10))(v8, 0x380);
    }
  }
  return result;
}
