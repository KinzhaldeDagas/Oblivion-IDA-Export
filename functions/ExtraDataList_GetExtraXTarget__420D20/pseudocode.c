void **__thiscall ExtraDataList::GetExtraXTarget(ExtraDataList *this)
{
  ExtraDataXTarget *ExtraData; // eax

  ExtraData = (ExtraDataXTarget *)BaseExtraList_GetExtraData(this, kExtraData_XTarget);
  if ( ExtraData )
    return (void **)ExtraData->xtarget;
  else
    return 0;
}
