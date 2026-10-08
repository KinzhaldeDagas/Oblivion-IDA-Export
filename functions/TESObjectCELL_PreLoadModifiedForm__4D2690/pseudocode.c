TESForm::ModReferenceList *__thiscall TESObjectCELL_PreLoadModifiedForm(ExtraDataList *this, int a2)
{
  TESForm::ModReferenceList *result; // eax
  int (__thiscall *v4)(ExtraDataList *, int); // eax
  _DWORD *v5; // ecx

  nullsub_returnvVoid_1arg(a2); /*0x4d2699*/
  result = (TESForm::ModReferenceList *)g_TESSaveLoadGame->resetSelector; /*0x4d26a3*/
  if ( result == (TESForm::ModReferenceList *)0x1FFFF000 || result == (TESForm::ModReferenceList *)0x7FFFF000 ) /*0x4d26b2*/
    *((_BYTE *)this + 0x25) = 0; /*0x4d26b4*/
  if ( (a2 & 0x10000000) != 0 ) /*0x4d26be*/
  {
    ExtraDataList_SetSeenData(this + 2, 0); /*0x4d26c5*/
    v4 = *((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11); /*0x4d26cc*/
    *((_BYTE *)this + 0x25) &= ~1u; /*0x4d26cf*/
    result = (TESForm::ModReferenceList *)v4(this, 0x16000000); /*0x4d26da*/
  }
  if ( (a2 & 0x8000000) != 0 ) /*0x4d26e2*/
  {
    sub_45A500(g_TESSaveLoadGame); /*0x4d26ea*/
    ExtraDataList_SetDetachTime(this + 2, 0); /*0x4d26f4*/
    result = (TESForm::ModReferenceList *)(*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11))( /*0x4d2705*/
                                            this,
                                            0xE000000);
  }
  if ( (a2 & 0x1000000) != 0 ) /*0x4d270d*/
  {
    v5 = *((_DWORD **)this + 0x11); /*0x4d270f*/
    if ( v5 ) /*0x4d2714*/
      return (TESForm::ModReferenceList *)sub_4E5F10(v5); /*0x4d2716*/
  }
  return result; /*0x4d271b*/
}
