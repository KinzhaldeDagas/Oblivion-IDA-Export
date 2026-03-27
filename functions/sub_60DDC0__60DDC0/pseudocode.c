void __cdecl sub_60DDC0(int a1)
{
  int v1; // eax
  NiObjectNET *v2; // eax
  NiObjectNET *v3; // edi
  _DWORD *v4; // eax
  NiTimeController *v5; // eax
  NiTimeController *v6; // esi

  if ( a1 )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1);
    if ( v1 )
    {
      v2 = (NiObjectNET *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
      v3 = v2;
      if ( v2 )
      {
        v4 = sub_700010(v2, (int)&unk_B3B808);
        if ( v4 )
        {
          *((_WORD *)v4 + 4) |= 8u;
          *((_BYTE *)v4 + 0x3C) = 1;
        }
        else
        {
          v5 = (NiTimeController *)FormHeapAlloc(0x40u);
          v6 = v5;
          if ( v5 )
          {
            NiTimeController::NiTimeController(v5);
            v6->vtbl = (NiTimeControllerVtbl *)&BSDoorHavokController::`vftable';
            LOBYTE(v6[1].vtbl) = 0;
          }
          else
          {
            v6 = 0;
          }
          v6->vtbl->SetTarget(v6, v3);
          v6->members.flags |= 8u;
          LOBYTE(v6[1].vtbl) = 1;
        }
      }
    }
  }
}
