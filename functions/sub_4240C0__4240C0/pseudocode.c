void __thiscall sub_4240C0(ExtraDataList *this, Ni2DBuffer *a2)
{
  BSExtraData *ExtraData; // eax
  ExtraHavok *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Havok);
  if ( a2 )
  {
    if ( ExtraData )
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&ExtraData[1], a2);
    }
    else
    {
      v4 = (ExtraHavok *)FormHeapAlloc(0x14u);
      if ( v4 )
        v5 = (BSExtraData *)ExtraHavok::ExtraHavok(v4, (int)a2);
      else
        v5 = 0;
      BaseExtraList_AddExtra(this, v5);
    }
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
}
