// Pass231: Updates sky weather side lists/effects before Atmosphere virtual update.
OSGlobals *__fastcall sub_542590(Sky *a1)
{
  UInt32 unk0E0; // esi
  float **v2; // eax
  float **v3; // ebp
  float v4; // ebx
  float *v5; // edi
  float v6; // esi
  _DWORD *v7; // eax
  float **v8; // eax
  float *v9; // edi
  int *v10; // esi
  char v11; // dl
  float **v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  int v16; // esi
  void **v17; // ecx
  UInt32 unk0DC; // eax
  TESWeather *v19; // edi
  int v20; // edx
  int v21; // eax
  void **v22; // edi
  double v23; // st7
  int v24; // eax
  DWORD TickCount; // eax
  int v26; // ecx
  unsigned __int8 v27; // bl
  TESWeather *firstWeather; // eax
  double v29; // st6
  double v30; // st7
  double v31; // st6
  double v32; // rt2
  double v33; // st6
  TESWeather *secondWeather; // eax
  double v35; // rtt
  double v36; // st5
  double v37; // st7
  double v38; // st5
  double weatherPercent; // st5
  double v40; // st5
  double v41; // rt0
  double v42; // st5
  double v43; // rt0
  double v44; // rt1
  double v45; // st6
  double v46; // st5
  double v47; // rt0
  OSGlobals *result; // eax
  UInt32 i; // esi
  int *v50; // [esp+14h] [ebp-18h]
  float v51; // [esp+18h] [ebp-14h]
  float v52; // [esp+18h] [ebp-14h]
  float v53; // [esp+1Ch] [ebp-10h]
  float v54; // [esp+1Ch] [ebp-10h]
  float v55; // [esp+1Ch] [ebp-10h]
  Sky *v56; // [esp+20h] [ebp-Ch]
  float v57; // [esp+24h] [ebp-8h] BYREF
  _DWORD *v58; // [esp+28h] [ebp-4h]

  unk0E0 = a1->unk0E0; /*0x54259d*/
  v56 = a1; /*0x5425a4*/
  v50 = (int *)unk0E0; /*0x5425a8*/
  if ( unk_B3667C ) /*0x542593*/
  {
    v2 = (float **)FormHeapAlloc(8u); /*0x5425b4*/
    if ( v2 ) /*0x5425be*/
    {
      *v2 = 0; /*0x5425c0*/
      v2[1] = 0; /*0x5425c6*/
      v3 = v2; /*0x5425cd*/
    }
    else
    {
      v3 = 0; /*0x5425d1*/
    }
    v4 = 0.0; /*0x5425d3*/
    v57 = 0.0; /*0x5425d7*/
    v58 = 0; /*0x5425db*/
    if ( unk0E0 ) /*0x5425df*/
    {
      do /*0x54267f*/
      {
        v5 = *(float **)unk0E0; /*0x5425e5*/
        if ( !*(_DWORD *)unk0E0 ) /*0x5425e5*/
          break; /*0x5425e9*/
        if ( *((int *)v5 + 3) >= 0 ) /*0x5425f6*/
        {
          if ( *v3 ) /*0x542646*/
          {
            v8 = (float **)FormHeapAlloc(8u); /*0x54264e*/
            if ( v8 ) /*0x542658*/
            {
              *v8 = *v3; /*0x54265d*/
              v8[1] = 0; /*0x54265f*/
            }
            else
            {
              v8 = 0; /*0x542668*/
            }
            v8[1] = v3[1]; /*0x54266d*/
            v3[1] = (float *)v8; /*0x542670*/
          }
          *v3 = v5; /*0x542673*/
        }
        else
        {
          if ( *((_DWORD *)v5 + 2) == 3 ) /*0x5425fc*/
            --unk_B365C0; /*0x5425fe*/
          v6 = *v5; /*0x542605*/
          if ( *(_DWORD *)v5 ) /*0x542605*/
          {
            if ( v4 != 0.0 ) /*0x54260d*/
            {
              v7 = (_DWORD *)FormHeapAlloc(8u); /*0x542611*/
              if ( v7 ) /*0x54261b*/
              {
                *(float *)v7 = v4; /*0x54261d*/
                v7[1] = 0; /*0x54261f*/
              }
              else
              {
                v7 = 0; /*0x542628*/
              }
              v7[1] = v58; /*0x54262e*/
              v58 = v7; /*0x542631*/
            }
            v4 = v6; /*0x542635*/
          }
          FormHeapFree((unsigned int)v5); /*0x542638*/
          unk0E0 = (UInt32)v50; /*0x54263d*/
        }
        unk0E0 = *(_DWORD *)(unk0E0 + 4); /*0x542676*/
        v50 = (int *)unk0E0; /*0x54267b*/
      }
      while ( unk0E0 ); /*0x54267f*/
      v57 = v4; /*0x542685*/
    }
    v9 = &v57; /*0x542689*/
    do /*0x5426e2*/
    {
      v10 = *(int **)v9; /*0x542690*/
      if ( !*(_DWORD *)v9 ) /*0x542690*/
        break; /*0x542694*/
      v9 = *((float **)v9 + 1); /*0x542696*/
      if ( sub_6B73A0(v10) ) /*0x54269b*/
      {
        v11 = 0; /*0x5426a4*/
        v12 = v3; /*0x5426a6*/
        while ( v12 && *v12 ) /*0x5426b0*/
        {
          if ( **(_DWORD **)*v12 == *v10 ) /*0x5426b8*/
            v11 = 1; /*0x5426ba*/
          v12 = (float **)v12[1]; /*0x5426be*/
          if ( v11 ) /*0x5426c1*/
            goto LABEL_37; /*0x5426c1*/
        }
        sub_6B73C0(v10); /*0x5426cb*/
      }
LABEL_37:
      sub_6B73E0(v10); /*0x5426d2*/
      FormHeapFree((unsigned int)v10); /*0x5426d8*/
    }
    while ( v9 ); /*0x5426e2*/
    BSSimpleList_Clear(&v57); /*0x5426e8*/
    BSSimpleList_Clear((_DWORD *)v56->unk0E0); /*0x5426f7*/
    FormHeapFree(v56->unk0E0); /*0x542703*/
    a1 = v56; /*0x542708*/
    v56->unk0E0 = (UInt32)v3; /*0x54270c*/
    v50 = (int *)v3; /*0x542715*/
    unk_B3667C = 0; /*0x542719*/
    unk0E0 = (UInt32)v3; /*0x542720*/
  }
  if ( (a1->Flags0FC & 3) != 0 ) /*0x542729*/
    sub_5403D0(a1, (int)a1->firstWeather); /*0x54272f*/
  if ( unk0E0 ) /*0x542736*/
  {
    v13 = dbl_A3F398; /*0x54273c*/
    v14 = 0.0; /*0x542742*/
    v15 = 1.0; /*0x542744*/
    while ( 1 ) /*0x54274a*/
    {
      v16 = *v50; /*0x54274a*/
      if ( !*v50 ) /*0x54274e*/
        goto LABEL_104; /*0x54274e*/
      v17 = *(void ***)v16; /*0x542754*/
      if ( *(_DWORD *)v16 ) /*0x542754*/
        break; /*0x542754*/
LABEL_103:
      v50 = (int *)v50[1]; /*0x542aed*/
      if ( !v50 ) /*0x542afa*/
        goto LABEL_104; /*0x542afa*/
    }
    unk0DC = v56->unk0DC; /*0x542762*/
    if ( (unk0DC == 3 || unk0DC == 2) /*0x54277f*/
      && ((v19 = *(TESWeather **)(v16 + 4), v20 = (int)v56->firstWeather, v19 == (TESWeather *)v20)
       || v19 == v56->secondWeather) )
    {
      v24 = *(_DWORD *)(v16 + 8); /*0x5427c8*/
      if ( v24 != 3 ) /*0x5427ce*/
      {
        if ( *((_BYTE *)MEMORY[0xB33398]->sound + 0xA5) ) /*0x542940*/
        {
          v23 = v14; /*0x542adb*/
        }
        else
        {
          if ( v24 == 1 ) /*0x542950*/
          {
            LODWORD(v57) = *(unsigned __int8 *)(v20 + 0x4E); /*0x54295a*/
            secondWeather = v56->secondWeather; /*0x54295e*/
            v57 = (double)SLODWORD(v57) * v13 * (dbl_A3F460 - v14) + v14; /*0x542975*/
            if ( secondWeather ) /*0x542979*/
            {
              v35 = v15; /*0x542989*/
              v36 = v13 * (double)*((unsigned __int8 *)secondWeather + 0x4F); /*0x542989*/
              v37 = v35; /*0x542989*/
              v53 = v36 * dbl_A48DD8 + dbl_A30E40; /*0x542997*/
              v38 = v53; /*0x54299b*/
            }
            else
            {
              v37 = v15; /*0x5429a1*/
              v38 = 0.0; /*0x5429a3*/
            }
            v54 = v38; /*0x5429a7*/
            weatherPercent = v56->weatherPercent; /*0x5429ab*/
            if ( v19 == (TESWeather *)v20 ) /*0x5429b1*/
            {
              if ( v57 <= weatherPercent ) /*0x5429c0*/
                v40 = (v56->weatherPercent - v57) / (v37 - v57); /*0x5429d4*/
              else
                v40 = v14; /*0x5429c4*/
              v52 = v40; /*0x5429d6*/
              if ( v54 <= (double)v56->weatherPercent ) /*0x5429ed*/
              {
                v23 = v14; /*0x542a0a*/
              }
              else
              {
                v41 = v14; /*0x5429f7*/
                v14 = v37 - v56->weatherPercent / v54; /*0x5429f7*/
                v23 = v41; /*0x5429f7*/
              }
              v55 = v14; /*0x5429f9*/
            }
            else
            {
              if ( v54 <= weatherPercent ) /*0x542a22*/
                v42 = v14; /*0x542a30*/
              else
                v42 = v37 - v56->weatherPercent / v54; /*0x542a2a*/
              v52 = v42; /*0x542a32*/
              if ( v57 <= (double)v56->weatherPercent ) /*0x542a49*/
              {
                v43 = v14; /*0x542a65*/
                v14 = (v56->weatherPercent - v57) / (v37 - v57); /*0x542a65*/
                v23 = v43; /*0x542a65*/
              }
              else
              {
                v23 = v14; /*0x542a4d*/
              }
              v55 = v14; /*0x542a51*/
            }
          }
          else
          {
            if ( v19 == (TESWeather *)v20 ) /*0x542a71*/
            {
              v52 = v56->weatherPercent; /*0x542a79*/
              v44 = v14; /*0x542a85*/
              v45 = v15 - v52; /*0x542a85*/
              v23 = v44; /*0x542a85*/
            }
            else
            {
              v23 = v14; /*0x542a91*/
              v52 = v15 - v56->weatherPercent; /*0x542a93*/
              v45 = v56->weatherPercent; /*0x542a97*/
            }
            v55 = v45; /*0x542a9d*/
          }
          if ( v19 == (TESWeather *)v20 ) /*0x542aa3*/
            v20 = (int)v56->secondWeather; /*0x542aa5*/
          if ( !sub_5405C0((int **)v56, (int)*v17, v20) || v55 <= (double)v52 ) /*0x542ac6*/
          {
            sub_540600((void ***)v16, v52); /*0x542ad0*/
            v23 = 0.0; /*0x542ad5*/
          }
        }
        goto LABEL_102; /*0x542ad7*/
      }
      if ( !SoundHandle::IsPlaying((int *)v17) ) /*0x5427da*/
      {
        TickCount = GetTickCount(); /*0x5427e3*/
        if ( TickCount > (*(_DWORD *)(v16 + 0xC) & 0x7FFFFFFFu) ) /*0x542803*/
        {
          v26 = *(_DWORD *)(v16 + 4); /*0x542805*/
          *(_DWORD *)(v16 + 0xC) ^= (*(_DWORD *)(v16 + 0xC) ^ (TickCount + 0x1E)) & 0x7FFFFFFF; /*0x542814*/
          v27 = *(_BYTE *)(v26 + 0x52); /*0x542817*/
          if ( !(Game_RandomLargeInteger(0) % ((unsigned __int8)unk_B365C0 * v27)) ) /*0x54282f*/
          {
            firstWeather = v56->firstWeather; /*0x542838*/
            if ( *(TESWeather **)(v16 + 4) == firstWeather ) /*0x54283e*/
            {
              LODWORD(v57) = *((unsigned __int8 *)firstWeather + 0x50); /*0x542844*/
              v23 = 0.0; /*0x54285c*/
              v57 = (dbl_A3F460 - 0.0) * ((double)SLODWORD(v57) * dbl_A3F398) + 0.0; /*0x542862*/
              if ( v57 <= (double)v56->weatherPercent ) /*0x542879*/
                v29 = (v56->weatherPercent - v57) / (1.0 - v57); /*0x54288d*/
              else
                v29 = 0.0; /*0x54287d*/
            }
            else
            {
              LODWORD(v57) = *((unsigned __int8 *)v56->secondWeather + 0x51); /*0x542898*/
              v57 = (double)SLODWORD(v57) * dbl_A3F398 * dbl_A48DD8 + dbl_A30E40; /*0x5428b2*/
              if ( v57 <= (double)v56->weatherPercent ) /*0x5428c9*/
              {
                v31 = 0.0; /*0x5428dd*/
                v30 = 0.0; /*0x5428df*/
              }
              else
              {
                v30 = 1.0 - v56->weatherPercent / v57; /*0x5428d3*/
                v31 = 0.0; /*0x5428d5*/
              }
              v32 = v31; /*0x5428e1*/
              v29 = v30; /*0x5428e1*/
              v23 = v32; /*0x5428e1*/
            }
            v51 = v29; /*0x5428e3*/
            v33 = v51; /*0x5428f1*/
            if ( v51 != 0.0 ) /*0x5428f6*/
            {
              if ( !*((_BYTE *)MEMORY[0xB33398]->sound + 0xA5) ) /*0x542904*/
              {
                sub_540600((void ***)v16, v51); /*0x542915*/
                v23 = 0.0; /*0x54291a*/
                v33 = v51; /*0x54291c*/
              }
              v56->unk0E4 = v33; /*0x542920*/
              v56->unk0E8 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x54292c*/
            }
            goto LABEL_102; /*0x542932*/
          }
        }
      }
    }
    else
    {
      if ( SoundHandle::IsPlaying((int *)v17) ) /*0x542787*/
      {
        v21 = (int)v56->firstWeather; /*0x542790*/
        if ( *(_DWORD *)(v16 + 4) == v21 ) /*0x542796*/
          v21 = (int)v56->secondWeather; /*0x542798*/
        v22 = *(void ***)v16; /*0x54279b*/
        if ( !sub_5405C0((int **)v56, **(_DWORD **)v16, v21) ) /*0x5427a3*/
          sub_6B7240((int *)v22); /*0x5427ae*/
      }
      *(_DWORD *)(v16 + 0xC) |= 0x80000000; /*0x5427b3*/
      unk_B3667C = 1; /*0x5427ba*/
    }
    v23 = 0.0; /*0x5427c1*/
LABEL_102:
    v46 = v23; /*0x542ae1*/
    v13 = dbl_A3F398; /*0x542ae9*/
    v47 = v46; /*0x542aeb*/
    v15 = 1.0; /*0x542aeb*/
    v14 = v47; /*0x542aeb*/
    goto LABEL_103; /*0x542aeb*/
  }
LABEL_104:
  result = MEMORY[0xB33398]; /*0x542b06*/
  if ( *((_BYTE *)MEMORY[0xB33398]->sound + 0xA5) ) /*0x542b0e*/
  {
    for ( i = v56->unk0E0; i; i = *(_DWORD *)(i + 4) ) /*0x542b23*/
    {
      result = *(OSGlobals **)i; /*0x542b25*/
      if ( !*(_DWORD *)i ) /*0x542b25*/
        break; /*0x542b29*/
      result = (OSGlobals *)sub_6B7240(*(int **)&result->quitGame); /*0x542b2d*/
    }
  }
  return result; /*0x542b39*/
}
