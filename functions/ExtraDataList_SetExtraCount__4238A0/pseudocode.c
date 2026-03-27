BSExtraData *__thiscall ExtraDataList_SetExtraCount(ExtraDataList *this, int a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Count);
  if ( (unsigned __int16)a2 < 2u )
    return (BSExtraData *)ExtraDataList_SetExtraCount_::Remove_Destroy((int)result, this, a2);
  if ( !result )
    return (BSExtraData *)ExtraDataList_SetExtraCount_::CreateNewExtraCount(a2, a2);
  LOWORD(result[1].vtbl) = a2;
  return result;
}
