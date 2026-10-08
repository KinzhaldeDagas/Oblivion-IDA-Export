// ExtraPackageStartLocation setter: first creation stores selected location FormID, XYZ, and rotZ; updating an extant singleton replaces only location/XYZ and preserves existing rotZ.
BSExtraData *__thiscall sub_41F4C0(ExtraDataList *this, BSExtraDataVtbl *a2, BSExtraDataVtbl *a3, _DWORD *a4, float a5)
{
  BSExtraData *result; // eax
  _BYTE *v7; // eax
  BSExtraData *v8; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_StartLocation); /*0x41f4e6*/
  if ( result ) /*0x41f4ed*/
  {
    if ( a2 ) /*0x41f554*/
      result[1].vtbl = a2; /*0x41f556*/
    else
      result[1].vtbl = a3; /*0x41f55f*/
    *(_DWORD *)&result[1].members.type = *a4; /*0x41f568*/
    result[1].members.next = (BSExtraData *)a4[1]; /*0x41f56e*/
    result[2].vtbl = (BSExtraDataVtbl *)a4[2]; /*0x41f574*/
  }
  else
  {
    v7 = (_BYTE *)FormHeapAlloc(0x20u); /*0x41f4f1*/
    if ( v7 ) /*0x41f507*/
      v8 = (BSExtraData *)ExtraPackageStartLocation_ctor(v7, (int)a2, (int)a3, a4, a5); /*0x41f522*/
    else
      v8 = 0; /*0x41f529*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v8); /*0x41f536*/
  }
  return result; /*0x41f53b*/
}
