// Set/update only ExtraHasNoRumors (0x5A), the actor-local eligibility override. This does not remove or replace an existing ExtraInfoGeneralTopic cache (0x59); disabling the gate can expose the old cache again.
BSExtraData *__thiscall ExtraDataList::SetNoRumors(ExtraDataList *this, bool noRumors)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_HasNoRumors); /*0x420946*/
  if ( result ) /*0x42094d*/
  {
    LOBYTE(result[1].vtbl) = noRumors; /*0x420953*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x42096b*/
    if ( v4 ) /*0x420981*/
      v5 = (BSExtraData *)ExtraHasNoRumors_ctor(v4, noRumors); /*0x42098a*/
    else
      v5 = 0; /*0x420991*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x42099e*/
  }
  return result; /*0x420956*/
}
