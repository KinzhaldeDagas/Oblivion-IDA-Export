ExtraTeleport *__thiscall ExtraDataList::SetTeleportData(ExtraDataList *this, TeleportData *a2)
{
  ExtraTeleport *result; // eax
  ExtraTeleport *v4; // esi
  TeleportData *teleport; // edi
  ExtraTeleport *v6; // eax

  result = (ExtraTeleport *)BaseExtraList_GetExtraData(this, kExtraData_Teleport);
  v4 = result;
  if ( result )
  {
    if ( a2 )
    {
      teleport = result->teleport;
      if ( teleport )
      {
        Concurrency::details::_NonReentrantLock::_Release((Concurrency::details::_NonReentrantLock *)result->teleport);
        FormHeapFree((unsigned int)teleport);
      }
      v4->teleport = a2;
    }
    else
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)result, 1);
    }
  }
  else
  {
    if ( !a2 )
      return result;
    v6 = (ExtraTeleport *)FormHeapAlloc(0x10u);
    if ( v6 )
      v4 = ExtraTeleport::ExtraTeleport(v6, a2);
    else
      v4 = 0;
    BaseExtraList_AddExtra(this, &v4->super);
  }
  return v4;
}
