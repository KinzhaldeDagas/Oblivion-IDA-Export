// Returns ExtraRefractionProperty itself. Fallout only corroborates the class label; Oblivion type behavior is authoritative.
ExtraRefractionProperty *__thiscall ExtraDataList_GetRefractionPropertyExtra(ExtraDataList *this)
{
  return (ExtraRefractionProperty *)BaseExtraList_GetExtraData(this, kExtraData_RefractionProperty); /*0x420fc7*/
}
