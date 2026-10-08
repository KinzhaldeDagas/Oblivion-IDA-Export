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

  v1 = (TESChildCELL **)FormHeapAlloc(8u); /*0x6745d5*/
  if ( v1 ) /*0x6745df*/
  {
    *v1 = 0; /*0x6745e1*/
    v1[1] = 0; /*0x6745e7*/
    v2 = v1; /*0x6745ee*/
  }
  else
  {
    v2 = 0; /*0x6745f2*/
  }
  for ( i = a1; i; i = (TESObjectREFR **)i[1] ) /*0x6745fb*/
  {
    if ( !*i ) /*0x674600*/
      break; /*0x674604*/
    if ( (*i)->vtbl->IsActor(*i) ) /*0x67460e*/
    {
      v4 = *i; /*0x674614*/
      if ( *i ) /*0x674614*/
      {
        if ( *v2 ) /*0x67461a*/
        {
          v5 = (TESChildCELL **)FormHeapAlloc(8u); /*0x674621*/
          if ( v5 ) /*0x67462b*/
          {
            *v5 = *v2; /*0x67462f*/
            v5[1] = 0; /*0x674631*/
          }
          else
          {
            v5 = 0; /*0x67463a*/
          }
          v5[1] = v2[1]; /*0x67463f*/
          v2[1] = (TESChildCELL *)v5; /*0x674642*/
        }
        *v2 = (TESChildCELL *)v4; /*0x674645*/
      }
    }
  }
  if ( v2 ) /*0x674650*/
  {
    while ( 1 ) /*0x674660*/
    {
      v6 = *v2; /*0x674660*/
      if ( !*v2 ) /*0x674660*/
        break; /*0x674660*/
      if ( v6 != (TESChildCELL *)reference ) /*0x674670*/
      {
        if ( v6[0x16].vtbl ) /*0x674676*/
        {
          if ( ((int)v6[2].vtbl & 0x20) == 0 /*0x6746a8*/
            && ((int)v6[2].vtbl & 0x800) == 0
            && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *, int))v6->vtbl + 0xCD))(v6, 1) )
          {
            v11 = sub_6599B0(v6); /*0x6746b9*/
            GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x6746c7*/
            v7 = GameHour; /*0x6746cb*/
            v13 = GameHour - v11; /*0x6746db*/
            if ( v11 > v7 ) /*0x6746e6*/
              v13 = v7 + dbl_A2F920 - v11; /*0x6746f2*/
            if ( v13 < dbl_A30068 ) /*0x67470b*/
              v13 = 0.0; /*0x67470f*/
            v8 = *((_DWORD *)v6[0x16].vtbl + 2); /*0x674716*/
            if ( (!v8 || *(_BYTE *)(v8 + 0x20) != 2) && !sub_5E3220(v6) /*0x674740*/
              || (PlayerCharacter *)(*(int (__thiscall **)(void *))(*(_DWORD *)v6[0x16].vtbl + 0xCC))(v6[0x16].vtbl) != reference )
            {
              (*((void (__thiscall **)(TESChildCELL *, float))v6->vtbl + 0x70))(v6, COERCE_FLOAT(LODWORD(v13))); /*0x674754*/
            }
          }
        }
      }
      v9 = (TESChildCELL **)v2[1]; /*0x674756*/
      if ( v9 ) /*0x67475b*/
      {
        v2[1] = v9[1]; /*0x674760*/
        *v2 = *v9; /*0x674766*/
        FormHeapFree((unsigned int)v9); /*0x674768*/
      }
      else
      {
        *v2 = 0; /*0x674775*/
      }
    }
  }
  if ( v2[1] ) /*0x674780*/
  {
    do /*0x67479b*/
    {
      vtbl = (TESChildCELL *)v2[1][1].vtbl; /*0x67478a*/
      FormHeapFree((unsigned int)v2[1]); /*0x67478e*/
      v2[1] = vtbl; /*0x674798*/
    }
    while ( vtbl ); /*0x67479b*/
  }
  *v2 = 0; /*0x67479e*/
  FormHeapFree((unsigned int)v2); /*0x6747a4*/
}
