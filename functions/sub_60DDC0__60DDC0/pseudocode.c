void __cdecl sub_60DDC0(int a1)
{
  int v1; // eax
  NiObjectNET *v2; // eax
  NiObjectNET *v3; // edi
  _DWORD *v4; // eax
  NiTimeController *v5; // eax
  NiTimeController *v6; // esi

  if ( a1 ) /*0x60dde8*/
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1); /*0x60ddf6*/
    if ( v1 ) /*0x60ddfa*/
    {
      v2 = (NiObjectNET *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1); /*0x60de07*/
      v3 = v2; /*0x60de09*/
      if ( v2 ) /*0x60de0d*/
      {
        v4 = sub_700010(v2, (int)&stru_B3B808); /*0x60de16*/
        if ( v4 ) /*0x60de1d*/
        {
          *((_WORD *)v4 + 4) |= 8u; /*0x60de1f*/
          *((_BYTE *)v4 + 0x3C) = 1; /*0x60de24*/
        }
        else
        {
          v5 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x60de3c*/
          v6 = v5; /*0x60de41*/
          if ( v5 ) /*0x60de54*/
          {
            NiTimeController::NiTimeController(v5); /*0x60de58*/
            v6->vtbl = (NiTimeControllerVtbl *)&BSDoorHavokController::`vftable'; /*0x60de5d*/
            LOBYTE(v6[1].vtbl) = 0; /*0x60de63*/
          }
          else
          {
            v6 = 0; /*0x60de69*/
          }
          v6->vtbl->SetTarget(v6, v3); /*0x60de7b*/
          v6->members.flags |= 8u; /*0x60de7d*/
          LOBYTE(v6[1].vtbl) = 1; /*0x60de82*/
        }
      }
    }
  }
}
