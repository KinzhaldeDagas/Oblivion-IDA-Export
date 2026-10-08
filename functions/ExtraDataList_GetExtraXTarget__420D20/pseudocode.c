// Returns the TESObjectREFR target stored by ExtraXTarget (type 0x4D), or null.
void **__thiscall ExtraDataList_GetXTarget(ExtraDataList *this)
{
  ExtraDataXTarget *ExtraData; // eax

  ExtraData = (ExtraDataXTarget *)BaseExtraList_GetExtraData(this, kExtraData_XTarget); /*0x420d22*/
  if ( ExtraData ) /*0x420d29*/
    return (void **)ExtraData->xtarget; /*0x420d2b*/
  else
    return 0; /*0x420d2f*/
}
