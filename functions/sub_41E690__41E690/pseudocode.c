ExtraLock *__thiscall sub_41E690(ExtraDataList *this)
{
  ExtraLock *ExtraData; // eax

  ExtraData = (ExtraLock *)BaseExtraList_GetExtraData(this, kExtraData_Lock);
  if ( ExtraData )
    return *((ExtraLock **)ExtraData + 3);
  else
    return 0;
}
