char __userpurge sub_652210@<al>(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double value@<st1>,
        double a4@<st0>,
        float GameHour,
        char a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  char result; // al
  _DWORD *v12; // eax
  _DWORD *v13; // ebp
  float *v14; // eax
  double DistanceToPoint; // st7
  int v16; // eax
  double v17; // st7
  float *v18; // ebp
  NiPoint3 *LinkedTeleportMarkerPosition; // eax
  int v20; // edx
  void (__thiscall *v21)(_DWORD *, int); // eax
  int v22; // ecx
  TeleportData *TeleportData; // eax
  _DWORD *v24; // ecx
  int v25; // ebx
  _DWORD *v26; // ebp
  UInt32 v27; // eax
  int v28; // eax
  TESObjectREFR *v29; // ecx
  _DWORD *v30; // ebp
  int v31; // ebx
  UInt32 DwordAtOffset40; // eax
  int v33; // edx
  void (__thiscall *v34)(_DWORD *, int); // eax
  int v35; // ebx
  NiPoint3 *v36; // ebp
  UInt32 v37; // eax
  TESForm *v38; // ebx
  double v39; // st7
  double v40; // st7
  int v41; // ebp
  double v42; // st7
  int v43; // ebx
  TESObjectREFR *v44; // ecx
  UInt32 v45; // eax
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  TESObjectREFR *v49; // ebx
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  TESObjectREFR *v53; // ecx
  int v54; // eax
  int v55; // esi
  TESWorldSpace *v56; // [esp+2Ch] [ebp-2Ch]
  int v57; // [esp+2Ch] [ebp-2Ch]
  float v58; // [esp+30h] [ebp-28h]
  int v59; // [esp+30h] [ebp-28h]
  TESWorldSpace *v60; // [esp+34h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+34h] [ebp-24h]
  TESWorldSpace *v62; // [esp+34h] [ebp-24h]
  float v63; // [esp+34h] [ebp-24h]
  TESPackage *v64; // [esp+48h] [ebp-10h]
  double v65; // [esp+4Ch] [ebp-Ch] BYREF
  float v66; // [esp+54h] [ebp-4h]

  v7 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x652221*/
         a1,
         a4,
         value,
         a2);
  v8 = LODWORD(GameHour); /*0x652223*/
  v9 = v7; /*0x652227*/
  v10 = a1[0xB]; /*0x652229*/
  v64 = (TESPackage *)v9; /*0x65222e*/
  if ( !v10 || (*(_DWORD *)(v10 + 8) & 0x20) != 0 ) /*0x65223c*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x558))(a1, LODWORD(GameHour)); /*0x652249*/
  if ( !a1[0xB] ) /*0x65224b*/
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1); /*0x65225e*/
    return 0; /*0x652269*/
  }
  v12 = (_DWORD *)sub_566D00((char **)v9, v8); /*0x65226f*/
  v13 = v12; /*0x652274*/
  if ( v12 /*0x6522ad*/
    && sub_4D74B0(v12)
    && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == MEMORY[0xB35EB0]
     || (TESForm *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == MEMORY[0xB35EAC]) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 0x484))(a1, v13); /*0x6522ba*/
    return 1; /*0x6522c5*/
  }
  if ( *(_BYTE *)(v9 + 0x20) == 9 ) /*0x6522cc*/
  {
    v14 = sub_566B30((TESPackage *)v9, (float *)&v65, (Actor *)v8); /*0x6522d6*/
    DistanceToPoint = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)a1[0xB], v14); /*0x6522df*/
    GameHour = (float)Double_To_SInt32(DistanceToPoint); /*0x6522f3*/
    sub_566DB0((_DWORD *)v9); /*0x6522f7*/
    LODWORD(v65) = v16; /*0x6522fe*/
    v17 = (double)v16; /*0x652302*/
    if ( v16 < 0 ) /*0x652306*/
      v17 = v17 + flt_A2FC78; /*0x652308*/
    a4 = v17 + dbl_A3DDE0; /*0x65230e*/
    value = GameHour; /*0x652314*/
    if ( GameHour > a4 ) /*0x65231f*/
      (*(void (__thiscall **)(_DWORD *, int, unsigned int))(*a1 + 0x188))(a1, v8, 0xFFFFFFFF); /*0x65232e*/
  }
  if ( TESObjectREFR_GetTeleportData((TESObjectREFR *)a1[0xB]) ) /*0x652333*/
  {
    v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x174))(v8); /*0x65234b*/
    LinkedTeleportMarkerPosition = TESObjectREFR_GetLinkedTeleportMarkerPosition((TESObjectREFR *)a1[0xB]); /*0x65234d*/
    *(float *)&v65 = LinkedTeleportMarkerPosition->x - *v18; /*0x652357*/
    *((float *)&v65 + 1) = LinkedTeleportMarkerPosition->y - v18[1]; /*0x652361*/
    v66 = LinkedTeleportMarkerPosition->z - v18[2]; /*0x65236b*/
    a2 = *((float *)&v65 + 1) * *((float *)&v65 + 1); /*0x652383*/
    GameHour = *(float *)&v65 * *(float *)&v65 + a2 + v66 * v66; /*0x65238b*/
    GameHour = sqrt(GameHour); /*0x652398*/
    a4 = GameHour; /*0x65239c*/
    value = (double)(int)stru_B36B28.value; /*0x6523a0*/
    if ( value >= GameHour ) /*0x6523ad*/
      goto LABEL_52; /*0x6523ad*/
  }
  else
  {
    if ( sub_4D74B0((_DWORD *)a1[0xB]) && (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) ) /*0x6523ce*/
      goto LABEL_52; /*0x6523ce*/
    if ( sub_4D74B0((_DWORD *)a1[0xB]) /*0x652410*/
      && !(*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1)
      && sub_4D72C0((TESObjectREFR *)a1[0xB], *((unsigned __int8 *)a1 + 0x124))
      && !*((_BYTE *)a1 + 0xD0) )
    {
      a1[0x48] = 0; /*0x652427*/
      sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0); /*0x652431*/
      *((_BYTE *)a1 + 0x136) = 0; /*0x652436*/
      a1[0x4A] = LODWORD(g_zeroNiPoint3.x); /*0x652443*/
      v20 = *a1; /*0x65244b*/
      a1[0x4B] = LODWORD(g_zeroNiPoint3.y); /*0x65244d*/
      v21 = *(void (__thiscall **)(_DWORD *, int))(v20 + 0x194); /*0x652456*/
      a1[0x4C] = LODWORD(g_zeroNiPoint3.z); /*0x65245c*/
      *((_BYTE *)a1 + 0x124) = 0x7F; /*0x652462*/
      v21(a1, v8); /*0x652469*/
      a1[0xB] = 0; /*0x65246b*/
      return 0; /*0x65247b*/
    }
    if ( sub_5687D0((TESPackage *)v9, v9, a4, (TESObjectREFR *)v8) ) /*0x652481*/
    {
LABEL_52:
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x6527ac*/
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x194))(a1, v8); /*0x6527c0*/
      if ( *(_BYTE *)(a1[2] + 0x20) == 0x12 ) /*0x6527c9*/
      {
        v48 = a1[0xD]; /*0x6527cb*/
        if ( v48 ) /*0x6527d0*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v48 + 0x2C))(v48) ) /*0x6527d7*/
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x30C))(v8); /*0x6527e7*/
            return 0; /*0x6527f2*/
          }
        }
      }
      v49 = (TESObjectREFR *)a1[0xB]; /*0x6527fa*/
      v50 = a1[0xD]; /*0x6527fd*/
      if ( a6 ) /*0x652800*/
      {
        if ( (!v50 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v50 + 0x2C))(v50)) /*0x652822*/
          && (v64->members.packageFlags & 4) == 0 )
        {
          (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1); /*0x652831*/
        }
        v51 = a1[0xD]; /*0x652833*/
        if ( !v51 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v51 + 0x2C))(v51) ) /*0x65283f*/
        {
          if ( sub_4D74B0((_DWORD *)a1[0xB]) ) /*0x65284c*/
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 4 /*0x652879*/
              && (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 9 )
            {
              goto LABEL_68; /*0x652879*/
            }
            (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1); /*0x6528c5*/
            goto LABEL_71; /*0x6528c5*/
          }
          v52 = a1[0x11]; /*0x6528e1*/
          v53 = (TESObjectREFR *)a1[0xB]; /*0x6528e6*/
          if ( v52 ) /*0x6528e9*/
          {
            v59 = *(_DWORD *)(v52 + 4); /*0x6528f0*/
            v57 = 1; /*0x6528f1*/
LABEL_88:
            ActivateRef(v53, a2, value, a4, (TESObjectREFR *)v8, v57, v59, 1); /*0x6529a1*/
            goto LABEL_89; /*0x6529a2*/
          }
          if ( !v53->vtbl->IsActor(v53) /*0x65292e*/
            && !ActivateRef((TESObjectREFR *)a1[0xB], a2, value, a4, (TESObjectREFR *)v8, 1, 0, 1)
            && (v64->members.packageFlags & 4) != 0 )
          {
            (*(void (__thiscall **)(_DWORD *, int, unsigned int))(*a1 + 0x188))(a1, v8, 0xFFFFFFFF); /*0x65293d*/
          }
        }
      }
      else if ( !v50 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v50 + 0x2C))(v50) ) /*0x65294a*/
      {
        if ( sub_4D74B0((_DWORD *)a1[0xB]) ) /*0x652953*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 4 /*0x652980*/
            && (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 9 )
          {
LABEL_68:
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 0x1B4))(a1, v8) ) /*0x652886*/
            {
              (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1); /*0x65289d*/
              (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x194))(a1, v8); /*0x6528aa*/
              return 1; /*0x6528b5*/
            }
            goto LABEL_89; /*0x65288a*/
          }
LABEL_71:
          (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x394))(a1, 1); /*0x6528c7*/
          return 1; /*0x6528de*/
        }
        v54 = a1[0x11]; /*0x65298b*/
        v53 = (TESObjectREFR *)a1[0xB]; /*0x652990*/
        if ( v54 ) /*0x652995*/
          v59 = *(_DWORD *)(v54 + 4); /*0x65299a*/
        else
          v59 = 0; /*0x65299d*/
        v57 = 0; /*0x65299f*/
        goto LABEL_88; /*0x65299f*/
      }
LABEL_89:
      if ( v49 ) /*0x6529a9*/
        RunScripts(v49, a2, value, a4); /*0x6529ad*/
      if ( a1[0x11] ) /*0x6529b2*/
        FormHeapFree(a1[0x11]); /*0x6529ba*/
      a1[0x11] = 0; /*0x6529c2*/
      a1[0xB] = 0; /*0x6529c9*/
      v55 = a1[0xD]; /*0x6529d0*/
      return !v55 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v55 + 0x2C))(v55); /*0x6529e6*/
    }
  }
  v22 = a1[0xD]; /*0x65248e*/
  if ( v22 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 0x2C))(v22) ) /*0x65249a*/
    goto LABEL_50; /*0x65249e*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x380))(v8) /*0x6524d4*/
    && ((*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) == 4
     || (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) == 9) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x320))(v8); /*0x6524e0*/
    return 1; /*0x6524eb*/
  }
  if ( !*((_BYTE *)a1 + 0xD0) ) /*0x6524f5*/
    goto LABEL_45; /*0x6524f5*/
  TeleportData = TESObjectREFR_GetTeleportData((TESObjectREFR *)a1[0xB]); /*0x6524fe*/
  v24 = (_DWORD *)a1[0xB]; /*0x652505*/
  if ( TeleportData ) /*0x652508*/
  {
    if ( sub_4D74B0(v24) ) /*0x65255d*/
    {
      v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x174))(v8); /*0x652574*/
      LODWORD(v65) = *(_DWORD *)v28; /*0x652578*/
      v29 = (TESObjectREFR *)a1[0xB]; /*0x652584*/
      v30 = a1 + 0x4A; /*0x652587*/
      HIDWORD(v65) = *(_DWORD *)(v28 + 4); /*0x652590*/
      v66 = *(float *)(v28 + 8); /*0x6525a0*/
      GameHour = 0.0; /*0x6525a4*/
      if ( !sub_4DBAE0(v29, (float *)&v65, 1, 1, (NiPoint3 *)(a1 + 0x4A), (int *)&GameHour) ) /*0x6525af*/
      {
        a1[0x48] = 0; /*0x652605*/
        sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0); /*0x65260b*/
        *((_BYTE *)a1 + 0x136) = 0; /*0x652610*/
        *v30 = LODWORD(g_zeroNiPoint3.x); /*0x65261d*/
        a1[0x4B] = LODWORD(g_zeroNiPoint3.y); /*0x652626*/
        v33 = *a1; /*0x65262e*/
        a1[0x4C] = LODWORD(g_zeroNiPoint3.z); /*0x652630*/
        v34 = *(void (__thiscall **)(_DWORD *, int))(v33 + 0x194); /*0x652633*/
        *((_BYTE *)a1 + 0x124) = 0x7F; /*0x65263c*/
        v34(a1, v8); /*0x652643*/
        a1[0xB] = 0; /*0x652645*/
        return 0; /*0x652651*/
      }
      v31 = *a1; /*0x6525b4*/
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x6525be*/
      DwordAtOffset40 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x6525bf*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v31 + 0x3DC))( /*0x6525e8*/
              a1,
              v8,
              *v30,
              a1[0x4B],
              a1[0x4C],
              DwordAtOffset40,
              WorldSpace) )
        return 0; /*0x6525e8*/
      *((_BYTE *)a1 + 0x124) = LOBYTE(GameHour); /*0x6525f2*/
    }
    else
    {
      v35 = *a1; /*0x652657*/
      v36 = TESObjectREFR_GetLinkedTeleportMarkerPosition((TESObjectREFR *)a1[0xB]); /*0x652661*/
      v62 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x65266b*/
      v37 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x65266c*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v35 + 0x3DC))( /*0x652695*/
              a1,
              v8,
              LODWORD(v36->x),
              LODWORD(v36->y),
              LODWORD(v36->z),
              v37,
              v62) )
        return 0; /*0x652695*/
    }
LABEL_44:
    if ( !*((_BYTE *)a1 + 0xD0) ) /*0x65269b*/
    {
LABEL_45:
      v38 = TESForm_LookupByFormID(0x3Au); /*0x6526a8*/
      GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x6526be*/
      v65 = GameHour; /*0x6526c8*/
      v39 = sub_6599B0((TESChildCELL *)v8); /*0x6526cc*/
      if ( v39 > v65 ) /*0x6526da*/
        GameHour = GameHour + dbl_A2F920; /*0x6526e6*/
      v65 = GameHour; /*0x6526f0*/
      v40 = sub_6599B0((TESChildCELL *)v8); /*0x6526f4*/
      v41 = a1[0xB]; /*0x652701*/
      *(float *)&v65 = v65 - v40; /*0x652706*/
      v42 = *(float *)&v38[1].member.refID; /*0x65270b*/
      v43 = *a1; /*0x65270e*/
      GameHour = v42; /*0x652710*/
      v63 = sub_5677B0(v64, v42, (TESObjectREFR *)v8, 2); /*0x65271c*/
      v44 = (TESObjectREFR *)a1[0xB]; /*0x652720*/
      GameHour = dbl_A2F938 / GameHour * *(float *)&v65; /*0x652731*/
      a4 = GameHour; /*0x652735*/
      v58 = GameHour; /*0x652739*/
      v56 = TESObjectREFR_GetWorldSpace(v44); /*0x652744*/
      v45 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x652745*/
      v46 = (*(int (__thiscall **)(int, UInt32, TESWorldSpace *, _DWORD, _DWORD))(*(_DWORD *)v41 + 0x174))( /*0x652756*/
              v41,
              v45,
              v56,
              LODWORD(v58),
              LODWORD(v63));
      (*(void (__thiscall **)(_DWORD *, int, int))(v43 + 0x418))(a1, v8, v46); /*0x652762*/
      if ( Actor::GetProcessLevel((Actor *)v8) != 1 || MobileObject_GetProcessLevel((MobileObject *)v8) != 1 ) /*0x65277e*/
        return 0; /*0x65277e*/
      if ( sub_5687D0(v64, v43, a4, (TESObjectREFR *)v8) ) /*0x652789*/
        goto LABEL_52; /*0x652790*/
    }
LABEL_50:
    v47 = a1[0xD]; /*0x652792*/
    if ( v47 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v47 + 0x2C))(v47) ) /*0x6527a2*/
      goto LABEL_52; /*0x6527a6*/
    return 0; /*0x6529ef*/
  }
  v25 = *a1; /*0x652512*/
  v26 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v24 + 0x174))(v24); /*0x652519*/
  v60 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x652523*/
  v27 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x652524*/
  result = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v25 + 0x3DC))( /*0x652549*/
             a1,
             v8,
             *v26,
             v26[1],
             v26[2],
             v27,
             v60);
  if ( result ) /*0x65254d*/
    goto LABEL_44; /*0x65254d*/
  return result; /*0x652262*/
}
