void __thiscall sub_4DE100(_DWORD *this, BSExtraDataVtbl *a2)
{
  BSExtraDataVtbl *RagDollData; // eax

  RagDollData = a2; /*0x4de100*/
  if ( *(this + 0xF) ) /*0x4de107*/
  {
    if ( a2 || (RagDollData = ExtraDataList_GetRagDollData((ExtraDataList *)(this + 0x11))) != 0 ) /*0x4de11b*/
      sub_497830((unsigned __int8 *)RagDollData, (int)this); /*0x4de120*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 0x198))(this, 0) ) /*0x4de131*/
      (*(void (__thiscall **)(_DWORD *))(*this + 0x164))(this); /*0x4de141*/
  }
  else if ( a2 ) /*0x4de149*/
  {
    sub_424970((ExtraDataList *)(this + 0x11), (const void **)&a2->Destructor); /*0x4de14f*/
  }
}
