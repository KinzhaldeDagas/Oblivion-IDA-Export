void __cdecl TESObjectREFR::AddToLowPathWorld(TESObjectREFR *a1)
{
  TESForm *v1; // eax
  ExtraTeleport *TeleportExtraData; // eax
  Atmosphere *v3; // eax
  int v4; // esi

  if ( lowPathWorld_ptr )
  {
    if ( a1 )
    {
      v1 = a1->vtbl->GetBaseForm(a1);
      if ( v1->member.type == kFormType_Door && v1 != (TESForm *)TESDataHandler_g_PrisonMarker )
      {
        TeleportExtraData = GetTeleportExtraData(a1);
        if ( TeleportExtraData )
        {
          if ( sub_42B410(&TeleportExtraData->super) )
          {
            if ( !sub_67F5D0(a1) )
            {
              v3 = (Atmosphere *)sub_680A00(a1);
              v4 = (int)v3;
              if ( v3 )
              {
                sub_67FD70(v3);
                BSSimpleList_PushFront(&dword_B3BE18, v4);
              }
            }
          }
        }
      }
    }
  }
}
