void __thiscall sub_4240C0(ExtraDataList *this, Ni2DBuffer *a2)
{
  BSExtraData *ExtraData; // eax
  ExtraHavok *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Havok); /*0x4240e6*/
  if ( a2 ) /*0x4240f1*/
  {
    if ( ExtraData ) /*0x4240f5*/
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&ExtraData[1], a2); /*0x424145*/
    }
    else
    {
      v4 = (ExtraHavok *)FormHeapAlloc(0x14u); /*0x4240f9*/
      if ( v4 ) /*0x42410f*/
        v5 = (BSExtraData *)ExtraHavok::ExtraHavok(v4, (int)a2); /*0x424114*/
      else
        v5 = 0; /*0x42411b*/
      BaseExtraList_AddExtra(this, v5); /*0x424128*/
    }
  }
  else if ( ExtraData ) /*0x424160*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x424167*/
  }
}
