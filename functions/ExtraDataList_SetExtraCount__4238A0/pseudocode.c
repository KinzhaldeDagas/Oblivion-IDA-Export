BSExtraData *__thiscall ExtraDataList_SetExtraCount(ExtraDataList *this, int a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Count); /*0x4238c6*/
  if ( (unsigned __int16)a2 < 2u ) /*0x4238d2*/
    return (BSExtraData *)ExtraDataList_SetExtraCount_::Remove_Destroy((int)result, this, a2); /*0x4238d2*/
  if ( !result ) /*0x4238dc*/
    return (BSExtraData *)ExtraDataList_SetExtraCount_::CreateNewExtraCount(a2, a2); /*0x4238dc*/
  LOWORD(result[1].vtbl) = a2; /*0x4238de*/
  return result; /*0x4238e2*/
}
