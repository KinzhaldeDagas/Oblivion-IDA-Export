void __thiscall ExtraDataList_ToggleRefractionProperty(ExtraDataList *this, bool enable, float a3)
{
  ExtraRefractionProperty *ExtraData; // eax
  ExtraRefractionProperty *v5; // esi
  ExtraRefractionProperty *v6; // eax
  ExtraRefractionProperty *v7; // eax

  ExtraData = (ExtraRefractionProperty *)BaseExtraList_GetExtraData(this, kExtraData_RefractionProperty);
  v5 = ExtraData;
  if ( enable )
  {
    if ( !ExtraData )
    {
      v6 = (ExtraRefractionProperty *)FormHeapAlloc(0x10u);
      if ( v6 )
        v7 = ExtraRefractionProperty::ExtraRefractionProperty(v6, a3);
      else
        v7 = 0;
      v5 = v7;
      BaseExtraList_AddExtra(this, &v7->super);
    }
    v5->refractionAmount = a3;
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
}
