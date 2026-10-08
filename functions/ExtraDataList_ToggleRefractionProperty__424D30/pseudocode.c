void __thiscall ExtraDataList_ToggleRefractionProperty(ExtraDataList *this, bool enable, float a3)
{
  ExtraRefractionProperty *ExtraData; // eax
  ExtraRefractionProperty *v5; // esi
  ExtraRefractionProperty *v6; // eax
  ExtraRefractionProperty *v7; // eax

  ExtraData = (ExtraRefractionProperty *)BaseExtraList_GetExtraData(this, kExtraData_RefractionProperty); /*0x424d56*/
  v5 = ExtraData; /*0x424d60*/
  if ( enable ) /*0x424d62*/
  {
    if ( !ExtraData ) /*0x424d66*/
    {
      v6 = (ExtraRefractionProperty *)FormHeapAlloc(0x10u); /*0x424d6a*/
      if ( v6 ) /*0x424d7c*/
        v7 = ExtraRefractionProperty::ExtraRefractionProperty(v6, a3); /*0x424d88*/
      else
        v7 = 0; /*0x424d8f*/
      v5 = v7; /*0x424d9c*/
      BaseExtraList_AddExtra(this, &v7->super); /*0x424d9e*/
    }
    v5->refractionAmount = a3; /*0x424da7*/
  }
  else if ( ExtraData ) /*0x424dc0*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x424dc7*/
  }
}
