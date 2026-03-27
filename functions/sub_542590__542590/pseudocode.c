OSGlobals *__fastcall sub_542590(Sky *a1)
{
  UInt32 unk0E0; // esi
  float **v5; // eax
  float **v6; // ebp
  float v7; // ebx
  float *v8; // edi
  float v9; // esi
  _DWORD *v10; // eax
  float **v11; // eax
  float *v12; // edi
  int *v13; // esi
  char v14; // dl
  float **v15; // eax
  double v16; // st4
  double v17; // st3
  double v18; // st2
  int v19; // esi
  void **v20; // ecx
  UInt32 unk0DC; // eax
  TESWeather *v22; // edi
  int v23; // edx
  int v24; // eax
  void **v25; // edi
  double v26; // st4
  int v27; // eax
  DWORD TickCount; // eax
  int v29; // ecx
  unsigned __int8 v30; // bl
  TESWeather *firstWeather; // eax
  double v32; // st3
  double v33; // st4
  double v34; // st3
  double v35; // rt2
  double v36; // st3
  TESWeather *secondWeather; // eax
  double v38; // rtt
  double v39; // st2
  double v40; // st4
  double v41; // st2
  double weatherPercent; // st2
  double v43; // st2
  double v44; // rt0
  double v45; // st2
  double v46; // rt0
  double v47; // rt1
  double v48; // st3
  double v49; // st2
  double v50; // rt0
  OSGlobals *result; // eax
  UInt32 i; // esi
  int *v53; // [esp+14h] [ebp-18h]
  float v54; // [esp+18h] [ebp-14h]
  float v55; // [esp+18h] [ebp-14h]
  float v56; // [esp+1Ch] [ebp-10h]
  float v57; // [esp+1Ch] [ebp-10h]
  float v58; // [esp+1Ch] [ebp-10h]
  Sky *v59; // [esp+20h] [ebp-Ch]
  float v60; // [esp+24h] [ebp-8h] BYREF
  _DWORD *v61; // [esp+28h] [ebp-4h]

  unk0E0 = a1->unk0E0;
  v59 = a1;
  v53 = (int *)unk0E0;
  if ( byte_B3667C )
  {
    v5 = (float **)FormHeapAlloc(8u);
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    v7 = 0.0;
    v60 = 0.0;
    v61 = 0;
    if ( unk0E0 )
    {
      do
      {
        v8 = *(float **)unk0E0;
        if ( !*(_DWORD *)unk0E0 )
          break;
        if ( *((int *)v8 + 3) >= 0 )
        {
          if ( *v6 )
          {
            v11 = (float **)FormHeapAlloc(8u);
            if ( v11 )
            {
              *v11 = *v6;
              v11[1] = 0;
            }
            else
            {
              v11 = 0;
            }
            v11[1] = v6[1];
            v6[1] = (float *)v11;
          }
          *v6 = v8;
        }
        else
        {
          if ( *((_DWORD *)v8 + 2) == 3 )
            --byte_B365C0;
          v9 = *v8;
          if ( *(_DWORD *)v8 )
          {
            if ( v7 != 0.0 )
            {
              v10 = (_DWORD *)FormHeapAlloc(8u);
              if ( v10 )
              {
                *(float *)v10 = v7;
                v10[1] = 0;
              }
              else
              {
                v10 = 0;
              }
              v10[1] = v61;
              v61 = v10;
            }
            v7 = v9;
          }
          FormHeapFree((unsigned int)v8);
          unk0E0 = (UInt32)v53;
        }
        unk0E0 = *(_DWORD *)(unk0E0 + 4);
        v53 = (int *)unk0E0;
      }
      while ( unk0E0 );
      v60 = v7;
    }
    v12 = &v60;
    do
    {
      v13 = *(int **)v12;
      if ( !*(_DWORD *)v12 )
        break;
      v12 = *((float **)v12 + 1);
      if ( sub_6B73A0(v13) )
      {
        v14 = 0;
        v15 = v6;
        while ( v15 && *v15 )
        {
          if ( **(_DWORD **)*v15 == *v13 )
            v14 = 1;
          v15 = (float **)v15[1];
          if ( v14 )
            goto LABEL_37;
        }
        sub_6B73C0(v13);
      }
LABEL_37:
      sub_6B73E0(v13);
      FormHeapFree((unsigned int)v13);
    }
    while ( v12 );
    BSSimpleList_Clear(&v60);
    BSSimpleList_Clear((_DWORD *)v59->unk0E0);
    FormHeapFree(v59->unk0E0);
    a1 = v59;
    v59->unk0E0 = (UInt32)v6;
    v53 = (int *)v6;
    byte_B3667C = 0;
    unk0E0 = (UInt32)v6;
  }
  if ( (a1->Flags0FC & 3) != 0 )
    sub_5403D0(a1, (int)a1->firstWeather);
  if ( unk0E0 )
  {
    v16 = dbl_A3F398;
    v17 = 0.0;
    v18 = 1.0;
    while ( 1 )
    {
      v19 = *v53;
      if ( !*v53 )
        goto LABEL_104;
      v20 = *(void ***)v19;
      if ( *(_DWORD *)v19 )
        break;
LABEL_103:
      v53 = (int *)v53[1];
      if ( !v53 )
        goto LABEL_104;
    }
    unk0DC = v59->unk0DC;
    if ( (unk0DC == 3 || unk0DC == 2)
      && ((v22 = *(TESWeather **)(v19 + 4), v23 = (int)v59->firstWeather, v22 == (TESWeather *)v23)
       || v22 == v59->secondWeather) )
    {
      v27 = *(_DWORD *)(v19 + 8);
      if ( v27 != 3 )
      {
        if ( *((_BYTE *)OSGlobals->sound + 0xA5) )
        {
          v26 = v17;
        }
        else
        {
          if ( v27 == 1 )
          {
            LODWORD(v60) = *(unsigned __int8 *)(v23 + 0x4E);
            secondWeather = v59->secondWeather;
            v60 = (double)SLODWORD(v60) * v16 * (dbl_A3F460 - v17) + v17;
            if ( secondWeather )
            {
              v38 = v18;
              v39 = v16 * (double)*((unsigned __int8 *)secondWeather + 0x4F);
              v40 = v38;
              v56 = v39 * dbl_A48DD8 + dbl_A30E40;
              v41 = v56;
            }
            else
            {
              v40 = v18;
              v41 = 0.0;
            }
            v57 = v41;
            weatherPercent = v59->weatherPercent;
            if ( v22 == (TESWeather *)v23 )
            {
              if ( v60 <= weatherPercent )
                v43 = (v59->weatherPercent - v60) / (v40 - v60);
              else
                v43 = v17;
              v55 = v43;
              if ( v57 <= (double)v59->weatherPercent )
              {
                v26 = v17;
              }
              else
              {
                v44 = v17;
                v17 = v40 - v59->weatherPercent / v57;
                v26 = v44;
              }
              v58 = v17;
            }
            else
            {
              if ( v57 <= weatherPercent )
                v45 = v17;
              else
                v45 = v40 - v59->weatherPercent / v57;
              v55 = v45;
              if ( v60 <= (double)v59->weatherPercent )
              {
                v46 = v17;
                v17 = (v59->weatherPercent - v60) / (v40 - v60);
                v26 = v46;
              }
              else
              {
                v26 = v17;
              }
              v58 = v17;
            }
          }
          else
          {
            if ( v22 == (TESWeather *)v23 )
            {
              v55 = v59->weatherPercent;
              v47 = v17;
              v48 = v18 - v55;
              v26 = v47;
            }
            else
            {
              v26 = v17;
              v55 = v18 - v59->weatherPercent;
              v48 = v59->weatherPercent;
            }
            v58 = v48;
          }
          if ( v22 == (TESWeather *)v23 )
            v23 = (int)v59->secondWeather;
          if ( !sub_5405C0((int **)v59, (int)*v20, v23) || v58 <= (double)v55 )
          {
            sub_540600((void ***)v19, v55);
            v26 = 0.0;
          }
        }
        goto LABEL_102;
      }
      if ( !sub_6B7260((int *)v20) )
      {
        TickCount = GetTickCount();
        if ( TickCount > (*(_DWORD *)(v19 + 0xC) & 0x7FFFFFFFu) )
        {
          v29 = *(_DWORD *)(v19 + 4);
          *(_DWORD *)(v19 + 0xC) ^= (*(_DWORD *)(v19 + 0xC) ^ (TickCount + 0x1E)) & 0x7FFFFFFF;
          v30 = *(_BYTE *)(v29 + 0x52);
          if ( !(GetRandomLargeInteger_(0) % ((unsigned __int8)byte_B365C0 * v30)) )
          {
            firstWeather = v59->firstWeather;
            if ( *(TESWeather **)(v19 + 4) == firstWeather )
            {
              LODWORD(v60) = *((unsigned __int8 *)firstWeather + 0x50);
              v26 = 0.0;
              v60 = (dbl_A3F460 - 0.0) * ((double)SLODWORD(v60) * dbl_A3F398) + 0.0;
              if ( v60 <= (double)v59->weatherPercent )
                v32 = (v59->weatherPercent - v60) / (1.0 - v60);
              else
                v32 = 0.0;
            }
            else
            {
              LODWORD(v60) = *((unsigned __int8 *)v59->secondWeather + 0x51);
              v60 = (double)SLODWORD(v60) * dbl_A3F398 * dbl_A48DD8 + dbl_A30E40;
              if ( v60 <= (double)v59->weatherPercent )
              {
                v34 = 0.0;
                v33 = 0.0;
              }
              else
              {
                v33 = 1.0 - v59->weatherPercent / v60;
                v34 = 0.0;
              }
              v35 = v34;
              v32 = v33;
              v26 = v35;
            }
            v54 = v32;
            v36 = v54;
            if ( v54 != 0.0 )
            {
              if ( !*((_BYTE *)OSGlobals->sound + 0xA5) )
              {
                sub_540600((void ***)v19, v54);
                v26 = 0.0;
                v36 = v54;
              }
              v59->unk0E4 = v36;
              v59->unk0E8 = Seed;
            }
            goto LABEL_102;
          }
        }
      }
    }
    else
    {
      if ( sub_6B7260((int *)v20) )
      {
        v24 = (int)v59->firstWeather;
        if ( *(_DWORD *)(v19 + 4) == v24 )
          v24 = (int)v59->secondWeather;
        v25 = *(void ***)v19;
        if ( !sub_5405C0((int **)v59, **(_DWORD **)v19, v24) )
          sub_6B7240((int *)v25);
      }
      *(_DWORD *)(v19 + 0xC) |= 0x80000000;
      byte_B3667C = 1;
    }
    v26 = 0.0;
LABEL_102:
    v49 = v26;
    v16 = dbl_A3F398;
    v50 = v49;
    v18 = 1.0;
    v17 = v50;
    goto LABEL_103;
  }
LABEL_104:
  result = OSGlobals;
  if ( *((_BYTE *)OSGlobals->sound + 0xA5) )
  {
    for ( i = v59->unk0E0; i; i = *(_DWORD *)(i + 4) )
    {
      result = *(OSGlobals **)i;
      if ( !*(_DWORD *)i )
        break;
      result = (OSGlobals *)sub_6B7240(*(int **)&result->quitGame);
    }
  }
  return result;
}
