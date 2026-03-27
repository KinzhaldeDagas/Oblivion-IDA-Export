char __cdecl sub_67F5D0(TESObjectREFR *a1)
{
  TESObjectCELL **v1; // edi
  char v2; // bl
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraData *p_super; // esi
  int v5; // eax
  _DWORD *v6; // ecx
  TESObjectREFR *v7; // ebp
  TESObjectCELL **v8; // eax
  int v9; // eax
  TESObjectREFR *v10; // esi

  v1 = (TESObjectCELL **)a1;
  v2 = 0;
  if ( a1 )
  {
    TeleportExtraData = GetTeleportExtraData(a1);
    p_super = &TeleportExtraData->super;
    if ( TeleportExtraData )
    {
      if ( sub_42B410(&TeleportExtraData->super) )
      {
        sub_4D8AF0(v1);
        if ( v5 )
        {
          v6 = lowPathWorld_ptr;
          a1 = 0;
          if ( NiTMap_GetAt(v6, v5, &a1) )
          {
            v7 = a1;
            if ( a1 )
            {
              v8 = (TESObjectCELL **)sub_42B410(p_super);
              sub_4D8AF0(v8);
              if ( v9 )
              {
                a1 = 0;
                if ( NiTMap_GetAt(v7, v9, &a1) )
                {
                  v10 = a1;
                  if ( a1 )
                  {
                    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v10) )
                    {
                      if ( sub_680410(&v10->vtbl->super.super.InitializeComponent, (int)v1) )
                        return 1;
                      v10 = *(TESObjectREFR **)&v10->member.super.type;
                      if ( !v10 )
                        return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
