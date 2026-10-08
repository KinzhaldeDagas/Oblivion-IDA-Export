void __thiscall sub_65D880(TESObjectREFR *this, TravelPath *a2, TESObjectREFR *a3)
{
  const NiPoint3 *v5; // eax
  TESObjectCELL *DwordAtOffset40; // [esp-Ch] [ebp-14h]
  TESWorldSpace *WorldSpace; // [esp-8h] [ebp-10h]

  if ( a2 ) /*0x65d88c*/
  {
    if ( a3 ) /*0x65d895*/
    {
      TravelPath_ClearNodes(a2); /*0x65d899*/
      WorldSpace = TESObjectREFR_GetWorldSpace(a3); /*0x65d8a5*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x65d8ad*/
      v5 = (const NiPoint3 *)a3->vtbl->GetPos(a3); /*0x65d8b8*/
      TravelPath_BuildToDestination(a2, this, v5, DwordAtOffset40, WorldSpace); /*0x65d8be*/
    }
  }
}
