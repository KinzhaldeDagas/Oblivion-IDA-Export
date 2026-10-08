void __thiscall sub_4D7300(_BYTE *this, unsigned int a2, char a3)
{
  ExtraDataList *v4; // ebp
  BSExtraData *ExtraData; // edi
  _BYTE *v6; // eax
  BSExtraData *v7; // esi

  if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x20 ) /*0x4d7334*/
  {
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 0x400000); /*0x4d7346*/
    v4 = (ExtraDataList *)(this + 0x44); /*0x4d7348*/
    ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x44), kExtraData_UsedMarkers); /*0x4d7354*/
    if ( ExtraData ) /*0x4d7358*/
    {
      sub_4295F0(ExtraData, a2, a3); /*0x4d7366*/
      if ( !ExtraData[1].vtbl ) /*0x4d736b*/
      {
        BaseExtraList_RemoveExtraByPtr((ExtraDataList *)(this + 0x44), (int)ExtraData, 1); /*0x4d7376*/
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x44))(this, 0x400000); /*0x4d7387*/
      }
    }
    else if ( a3 ) /*0x4d7391*/
    {
      v6 = (_BYTE *)FormHeapAlloc(0x10u); /*0x4d7395*/
      v7 = 0; /*0x4d73a1*/
      if ( v6 ) /*0x4d73a9*/
        v7 = (BSExtraData *)sub_42A390(v6); /*0x4d73b2*/
      BaseExtraList_AddExtra(v4, v7); /*0x4d73bf*/
      sub_4295F0(v7, a2, a3); /*0x4d73cc*/
    }
  }
}
