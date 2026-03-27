void __cdecl RemoveExtraTeleportFromDoorRef(_BYTE *a1)
{
  ExtraTeleport *TeleportExtraData; // esi
  BSExtraDataVtbl *v2; // eax

  if ( a1 )
  {
    TeleportExtraData = GetTeleportExtraData(a1);
    if ( TeleportExtraData )
    {
      sub_67F340(a1);
      v2 = sub_42B410(&TeleportExtraData->super);
      if ( v2 )
        sub_4D76D0(v2);
      sub_4D76D0(a1);
    }
  }
}
