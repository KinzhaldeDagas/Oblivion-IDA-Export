char __thiscall sub_4DBF90(Actor *this)
{
  BSExtraData *EnableStateChildren; // eax
  BSExtraData *i; // edi
  BSExtraDataVtbl *vtbl; // esi
  char v5; // bl
  bool a2; // [esp+8h] [ebp-4h]

  EnableStateChildren = ExtraDataList_GetEnableStateChildren(&this->members.super.super.baseExtraList); /*0x4dbf98*/
  for ( i = EnableStateChildren; i; i = *(BSExtraData **)&i->members.type ) /*0x4dbfa1*/
  {
    vtbl = i->vtbl; /*0x4dbfa5*/
    if ( i->vtbl ) /*0x4dbfa5*/
    {
      v5 = (this->members.super.super.super.flags & 0x800) != 0; /*0x4dbfb1*/
      a2 = v5; /*0x4dbfb7*/
      if ( ExtraDataList_IsEnableStateInverse((ExtraDataList *)&vtbl[8].CompareTo) ) /*0x4dbfbb*/
      {
        v5 = v5 == 0; /*0x4dbfc6*/
        a2 = v5; /*0x4dbfc9*/
      }
      LOBYTE(EnableStateChildren) = ((int)vtbl[1].Destructor & 0x800) != 0; /*0x4dbfd3*/
      if ( (_BYTE)EnableStateChildren != v5 ) /*0x4dbfd7*/
      {
        TESForm_SetDisabledFlag((TESForm *)vtbl, a2); /*0x4dbfe0*/
        LOBYTE(EnableStateChildren) = sub_4DBF90((Actor *)vtbl); /*0x4dbfe7*/
      }
    }
  }
  return (char)EnableStateChildren; /*0x4dbff5*/
}
