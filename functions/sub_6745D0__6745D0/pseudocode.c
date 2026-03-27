void __stdcall sub_6745D0(TESObjectREFR **a1)
{
  TESChildCELL **v1; // eax
  TESChildCELL **v2; // esi
  TESObjectREFR **i; // ebx
  TESObjectREFR *v4; // edi
  TESChildCELL **v5; // eax
  TESChildCELL *v6; // edi
  double v7; // st7
  int v8; // eax
  TESChildCELL **v9; // eax
  TESChildCELL *vtbl; // edi
  float v11; // [esp+14h] [ebp-4h]
  float GameHour; // [esp+1Ch] [ebp+4h]
  float v13; // [esp+1Ch] [ebp+4h]

  v1 = (TESChildCELL **)FormHeapAlloc(8u);
  if ( v1 )
  {
    *v1 = 0;
    v1[1] = 0;
    v2 = v1;
  }
  else
  {
    v2 = 0;
  }
  for ( i = a1; i; i = (TESObjectREFR **)i[1] )
  {
    if ( !*i )
      break;
    if ( (*i)->vtbl->IsActor(*i) )
    {
      v4 = *i;
      if ( *i )
      {
        if ( *v2 )
        {
          v5 = (TESChildCELL **)FormHeapAlloc(8u);
          if ( v5 )
          {
            *v5 = *v2;
            v5[1] = 0;
          }
          else
          {
            v5 = 0;
          }
          v5[1] = v2[1];
          v2[1] = (TESChildCELL *)v5;
        }
        *v2 = (TESChildCELL *)v4;
      }
    }
  }
  if ( v2 )
  {
    while ( 1 )
    {
      v6 = *v2;
      if ( !*v2 )
        break;
      if ( v6 != (TESChildCELL *)TESDataHandler_g_PlayerRef )
      {
        if ( v6[0x16].vtbl )
        {
          if ( ((int)v6[2].vtbl & 0x20) == 0
            && ((int)v6[2].vtbl & 0x800) == 0
            && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *, int))v6->vtbl + 0xCD))(v6, 1) )
          {
            v11 = sub_6599B0(v6);
            GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
            v7 = GameHour;
            v13 = GameHour - v11;
            if ( v11 > v7 )
              v13 = v7 + dbl_A2F920 - v11;
            if ( v13 < dbl_A30068 )
              v13 = 0.0;
            v8 = *((_DWORD *)v6[0x16].vtbl + 2);
            if ( (!v8 || *(_BYTE *)(v8 + 0x20) != 2) && !sub_5E3220(v6)
              || (PlayerCharacter *)(*(int (__thiscall **)(void *))(*(_DWORD *)v6[0x16].vtbl + 0xCC))(v6[0x16].vtbl) != TESDataHandler_g_PlayerRef )
            {
              (*((void (__thiscall **)(TESChildCELL *, float))v6->vtbl + 0x70))(v6, COERCE_FLOAT(LODWORD(v13)));
            }
          }
        }
      }
      v9 = (TESChildCELL **)v2[1];
      if ( v9 )
      {
        v2[1] = v9[1];
        *v2 = *v9;
        FormHeapFree((unsigned int)v9);
      }
      else
      {
        *v2 = 0;
      }
    }
  }
  if ( v2[1] )
  {
    do
    {
      vtbl = (TESChildCELL *)v2[1][1].vtbl;
      FormHeapFree((unsigned int)v2[1]);
      v2[1] = vtbl;
    }
    while ( vtbl );
  }
  *v2 = 0;
  FormHeapFree((unsigned int)v2);
}
