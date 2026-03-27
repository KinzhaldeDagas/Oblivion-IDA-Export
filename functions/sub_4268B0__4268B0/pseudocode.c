void __thiscall sub_4268B0(ExtraDataList *this, TESPackage *a2, int a3, BSExtraData *a4, char a5, char a6)
{
  UInt8 type; // al
  BSExtraData *ExtraData; // eax
  _DWORD *v9; // eax
  BSExtraData *v10; // eax
  BSExtraData *v11; // eax

  if ( !a2
    || (!sub_5660A0(a2) || a2->members.type == 1)
    && !sub_5660E0(a2)
    && (type = a2->members.type, type != 0x13)
    && type != 0x11 )
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package);
    if ( a2 )
    {
      if ( ExtraData )
      {
        ExtraData[1].vtbl = (BSExtraDataVtbl *)a2;
        *(_DWORD *)&ExtraData[1].members.type = a3;
        ExtraData[1].members.next = a4;
      }
      else
      {
        v9 = (_DWORD *)FormHeapAlloc(0x1Cu);
        if ( v9 )
          v10 = (BSExtraData *)sub_42A1A0(v9, (int)a2, a3, (int)a4, a5, a6);
        else
          v10 = 0;
        BaseExtraList_AddExtra(this, v10);
      }
    }
    else if ( ExtraData )
    {
      v11 = BaseExtraList_GetExtraData(this, kExtraData_Package);
      if ( v11 )
        BaseExtraList_RemoveExtraByPtr(this, (int)v11, 1);
    }
  }
}
