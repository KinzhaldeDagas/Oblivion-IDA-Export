ExtraTeleport *__thiscall ExtraDataList::SetTeleportData(ExtraDataList *this, TeleportData *a2)
{
  ExtraTeleport *result; // eax
  ExtraTeleport *v4; // esi
  TeleportData *teleport; // edi
  ExtraTeleport *v6; // eax

  result = (ExtraTeleport *)BaseExtraList_GetExtraData(this, kExtraData_Teleport); /*0x4234f7*/
  v4 = result; /*0x423500*/
  if ( result ) /*0x423504*/
  {
    if ( a2 ) /*0x423508*/
    {
      teleport = result->teleport; /*0x423516*/
      if ( teleport ) /*0x42351b*/
      {
        Concurrency::details::_NonReentrantLock::_Release((Concurrency::details::_NonReentrantLock *)result->teleport); /*0x42351f*/
        FormHeapFree((unsigned int)teleport); /*0x423525*/
      }
      v4->teleport = a2; /*0x42352d*/
    }
    else
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)result, 1); /*0x42350f*/
    }
  }
  else
  {
    if ( !a2 ) /*0x423534*/
      return result; /*0x423534*/
    v6 = (ExtraTeleport *)FormHeapAlloc(0x10u); /*0x423538*/
    if ( v6 ) /*0x42354e*/
      v4 = ExtraTeleport::ExtraTeleport(v6, a2); /*0x423558*/
    else
      v4 = 0; /*0x42355c*/
    BaseExtraList_AddExtra(this, &v4->super); /*0x423569*/
  }
  return v4; /*0x423570*/
}
