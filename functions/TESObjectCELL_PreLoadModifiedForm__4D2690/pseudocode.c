TESForm::ModReferenceList *__thiscall TESObjectCELL_PreLoadModifiedForm(ExtraDataList *this, int a2)
{
  TESForm::ModReferenceList *result; // eax
  int (__thiscall *v4)(ExtraDataList *, int); // eax
  _DWORD *v5; // ecx

  nullsub_returnvVoid_1arg(a2);
  result = (TESForm::ModReferenceList *)SaveLoad_CurrentSavegame->unk030[5];
  if ( result == (TESForm::ModReferenceList *)0x1FFFF000 || result == (TESForm::ModReferenceList *)0x7FFFF000 )
    *((_BYTE *)this + 0x25) = 0;
  if ( (a2 & 0x10000000) != 0 )
  {
    sub_420B70(this + 2, 0);
    v4 = *((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11);
    *((_BYTE *)this + 0x25) &= ~1u;
    result = (TESForm::ModReferenceList *)v4(this, 0x16000000);
  }
  if ( (a2 & 0x8000000) != 0 )
  {
    sub_45A500(SaveLoad_CurrentSavegame);
    ExtraDataList__SetDetachTime(this + 2, 0);
    result = (TESForm::ModReferenceList *)(*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11))(
                                            this,
                                            0xE000000);
  }
  if ( (a2 & 0x1000000) != 0 )
  {
    v5 = *((_DWORD **)this + 0x11);
    if ( v5 )
      return (TESForm::ModReferenceList *)sub_4E5F10(v5);
  }
  return result;
}
