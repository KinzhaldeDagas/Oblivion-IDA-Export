void __thiscall sub_4D7300(_BYTE *this, unsigned int a2, char a3)
{
  ExtraDataList *v4; // ebp
  BSExtraData *ExtraData; // edi
  _BYTE *v6; // eax
  BSExtraData *v7; // esi

  if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x20 )
  {
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 0x400000);
    v4 = (ExtraDataList *)(this + 0x44);
    ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x44), kExtraData_UsedMarkers);
    if ( ExtraData )
    {
      sub_4295F0(ExtraData, a2, a3);
      if ( !ExtraData[1].vtbl )
      {
        BaseExtraList_RemoveExtraByPtr((ExtraDataList *)(this + 0x44), (int)ExtraData, 1);
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x44))(this, 0x400000);
      }
    }
    else if ( a3 )
    {
      v6 = (_BYTE *)FormHeapAlloc(0x10u);
      v7 = 0;
      if ( v6 )
        v7 = (BSExtraData *)sub_42A390(v6);
      BaseExtraList_AddExtra(v4, v7);
      sub_4295F0(v7, a2, a3);
    }
  }
}
