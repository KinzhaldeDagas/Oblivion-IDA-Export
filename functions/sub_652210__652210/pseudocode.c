char __userpurge sub_652210@<al>(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
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
  double v15; // st7
  int v16; // eax
  double v17; // st7
  float *v18; // ebp
  float *v19; // eax
  int v20; // edx
  void (__thiscall *v21)(_DWORD *, int); // eax
  int v22; // ecx
  ExtraTeleport *TeleportExtraData; // eax
  _DWORD *v24; // ecx
  int v25; // ebx
  _DWORD *v26; // ebp
  TESObjectCELL *v27; // eax
  int v28; // eax
  TESObjectREFR *v29; // ecx
  _DWORD *v30; // ebp
  int v31; // ebx
  TESObjectCELL *ParentCell; // eax
  int v33; // edx
  void (__thiscall *v34)(_DWORD *, int); // eax
  int v35; // ebx
  _DWORD *v36; // eax
  _DWORD *v37; // ebp
  TESObjectCELL *v38; // eax
  TESForm *v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // ebp
  double v43; // st7
  int v44; // ebx
  TESObjectREFR *v45; // ecx
  TESObjectCELL *v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // ecx
  TESObjectREFR *v50; // ebx
  int v51; // ecx
  int v52; // ecx
  int v53; // eax
  TESObjectREFR *v54; // ecx
  int v55; // eax
  int v56; // esi
  TESWorldSpace *v57; // [esp+2Ch] [ebp-2Ch]
  int v58; // [esp+2Ch] [ebp-2Ch]
  float v59; // [esp+30h] [ebp-28h]
  int v60; // [esp+30h] [ebp-28h]
  TESWorldSpace *v61; // [esp+34h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+34h] [ebp-24h]
  TESWorldSpace *v63; // [esp+34h] [ebp-24h]
  float v64; // [esp+34h] [ebp-24h]
  TESPackage *v65; // [esp+48h] [ebp-10h]
  double v66; // [esp+4Ch] [ebp-Ch] BYREF
  float v67; // [esp+54h] [ebp-4h]

  v7 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(
         a1,
         a4,
         a3,
         a2);
  v8 = LODWORD(GameHour);
  v9 = v7;
  v10 = a1[0xB];
  v65 = (TESPackage *)v9;
  if ( !v10 || (*(_DWORD *)(v10 + 8) & 0x20) != 0 )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x558))(a1, LODWORD(GameHour));
  if ( !a1[0xB] )
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1);
    return 0;
  }
  v12 = (_DWORD *)sub_566D00((char **)v9, v8);
  v13 = v12;
  if ( v12
    && sub_4D74B0(v12)
    && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == TESDataHandler_g_XMarkerHeading
     || (TESForm *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == TESDataHandler_g_XMarker) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 0x484))(a1, v13);
    return 1;
  }
  if ( *(_BYTE *)(v9 + 0x20) == 9 )
  {
    v14 = (float *)sub_566B30((TESPackage *)v9, (int)&v66, (Actor *)v8);
    v15 = sub_4D7E30((float *)a1[0xB], v14);
    GameHour = (float)Double_To_SInt32(v15);
    sub_566DB0((_DWORD *)v9);
    LODWORD(v66) = v16;
    v17 = (double)v16;
    if ( v16 < 0 )
      v17 = v17 + flt_A2FC78;
    a4 = v17 + dbl_A3DDE0;
    a3 = GameHour;
    if ( GameHour > a4 )
      (*(void (__thiscall **)(_DWORD *, int, unsigned int))(*a1 + 0x188))(a1, v8, 0xFFFFFFFF);
  }
  if ( GetTeleportExtraData((_BYTE *)a1[0xB]) )
  {
    v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x174))(v8);
    sub_4D76F0((_BYTE *)a1[0xB]);
    *(float *)&v66 = *v19 - *v18;
    *((float *)&v66 + 1) = v19[1] - v18[1];
    v67 = v19[2] - v18[2];
    a2 = *((float *)&v66 + 1) * *((float *)&v66 + 1);
    GameHour = *(float *)&v66 * *(float *)&v66 + a2 + v67 * v67;
    GameHour = sqrt(GameHour);
    a4 = GameHour;
    a3 = (double)dword_B36B28;
    if ( a3 >= GameHour )
      goto LABEL_52;
  }
  else
  {
    if ( sub_4D74B0((_DWORD *)a1[0xB]) && (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) )
      goto LABEL_52;
    if ( sub_4D74B0((_DWORD *)a1[0xB])
      && !(*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1)
      && sub_4D72C0((TESObjectREFR *)a1[0xB], *((unsigned __int8 *)a1 + 0x124))
      && !*((_BYTE *)a1 + 0xD0) )
    {
      a1[0x48] = 0;
      sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0);
      *((_BYTE *)a1 + 0x136) = 0;
      a1[0x4A] = LODWORD(Vector3_InitValue_);
      v20 = *a1;
      a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
      v21 = *(void (__thiscall **)(_DWORD *, int))(v20 + 0x194);
      a1[0x4C] = LODWORD(dword_B3F9B0);
      *((_BYTE *)a1 + 0x124) = 0x7F;
      v21(a1, v8);
      a1[0xB] = 0;
      return 0;
    }
    if ( sub_5687D0((TESPackage *)v9, v9, a4, (TESObjectREFR *)v8) )
    {
LABEL_52:
      if ( !*((_BYTE *)a1 + 0xD0) )
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x194))(a1, v8);
      if ( *(_BYTE *)(a1[2] + 0x20) == 0x12 )
      {
        v49 = a1[0xD];
        if ( v49 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v49 + 0x2C))(v49) )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x30C))(v8);
            return 0;
          }
        }
      }
      v50 = (TESObjectREFR *)a1[0xB];
      v51 = a1[0xD];
      if ( a6 )
      {
        if ( (!v51 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v51 + 0x2C))(v51))
          && (v65->members.packageFlags & 4) == 0 )
        {
          (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1);
        }
        v52 = a1[0xD];
        if ( !v52 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v52 + 0x2C))(v52) )
        {
          if ( sub_4D74B0((_DWORD *)a1[0xB]) )
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 4
              && (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 9 )
            {
              goto LABEL_68;
            }
            (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1);
            goto LABEL_71;
          }
          v53 = a1[0x11];
          v54 = (TESObjectREFR *)a1[0xB];
          if ( v53 )
          {
            v60 = *(_DWORD *)(v53 + 4);
            v58 = 1;
LABEL_88:
            ActivateRef(v54, a2, a3, a4, (TESObjectREFR *)v8, v58, v60, 1);
            goto LABEL_89;
          }
          if ( !v54->vtbl->IsActor(v54)
            && !ActivateRef((TESObjectREFR *)a1[0xB], a2, a3, a4, (TESObjectREFR *)v8, 1, 0, 1)
            && (v65->members.packageFlags & 4) != 0 )
          {
            (*(void (__thiscall **)(_DWORD *, int, unsigned int))(*a1 + 0x188))(a1, v8, 0xFFFFFFFF);
          }
        }
      }
      else if ( !v51 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v51 + 0x2C))(v51) )
      {
        if ( sub_4D74B0((_DWORD *)a1[0xB]) )
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 4
            && (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) != 9 )
          {
LABEL_68:
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 0x1B4))(a1, v8) )
            {
              (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, v8, 1);
              (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x194))(a1, v8);
              return 1;
            }
            goto LABEL_89;
          }
LABEL_71:
          (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x394))(a1, 1);
          return 1;
        }
        v55 = a1[0x11];
        v54 = (TESObjectREFR *)a1[0xB];
        if ( v55 )
          v60 = *(_DWORD *)(v55 + 4);
        else
          v60 = 0;
        v58 = 0;
        goto LABEL_88;
      }
LABEL_89:
      if ( v50 )
        RunScripts(v50, a2, a3, a4);
      if ( a1[0x11] )
        FormHeapFree(a1[0x11]);
      a1[0x11] = 0;
      a1[0xB] = 0;
      v56 = a1[0xD];
      return !v56 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v56 + 0x2C))(v56);
    }
  }
  v22 = a1[0xD];
  if ( v22 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 0x2C))(v22) )
    goto LABEL_50;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x380))(v8)
    && ((*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) == 4
     || (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) == 9) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x320))(v8);
    return 1;
  }
  if ( !*((_BYTE *)a1 + 0xD0) )
    goto LABEL_45;
  TeleportExtraData = GetTeleportExtraData((_BYTE *)a1[0xB]);
  v24 = (_DWORD *)a1[0xB];
  if ( TeleportExtraData )
  {
    if ( sub_4D74B0(v24) )
    {
      v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x174))(v8);
      LODWORD(v66) = *(_DWORD *)v28;
      v29 = (TESObjectREFR *)a1[0xB];
      v30 = a1 + 0x4A;
      HIDWORD(v66) = *(_DWORD *)(v28 + 4);
      v67 = *(float *)(v28 + 8);
      GameHour = 0.0;
      if ( !sub_4DBAE0(v29, (float *)&v66, 1, 1, (NiPoint3 *)(a1 + 0x4A), &GameHour) )
      {
        a1[0x48] = 0;
        sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0);
        *((_BYTE *)a1 + 0x136) = 0;
        *v30 = LODWORD(Vector3_InitValue_);
        a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
        v33 = *a1;
        a1[0x4C] = LODWORD(dword_B3F9B0);
        v34 = *(void (__thiscall **)(_DWORD *, int))(v33 + 0x194);
        *((_BYTE *)a1 + 0x124) = 0x7F;
        v34(a1, v8);
        a1[0xB] = 0;
        return 0;
      }
      v31 = *a1;
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v31 + 0x3DC))(
              a1,
              v8,
              *v30,
              a1[0x4B],
              a1[0x4C],
              ParentCell,
              WorldSpace) )
        return 0;
      *((_BYTE *)a1 + 0x124) = LOBYTE(GameHour);
    }
    else
    {
      v35 = *a1;
      sub_4D76F0((_BYTE *)a1[0xB]);
      v37 = v36;
      v63 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
      v38 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v35 + 0x3DC))(
              a1,
              v8,
              *v37,
              v37[1],
              v37[2],
              v38,
              v63) )
        return 0;
    }
LABEL_44:
    if ( !*((_BYTE *)a1 + 0xD0) )
    {
LABEL_45:
      v39 = TESForm_LookupByFormID(0x3Au);
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      v66 = GameHour;
      v40 = sub_6599B0((TESChildCELL *)v8);
      if ( v40 > v66 )
        GameHour = GameHour + dbl_A2F920;
      v66 = GameHour;
      v41 = sub_6599B0((TESChildCELL *)v8);
      v42 = a1[0xB];
      *(float *)&v66 = v66 - v41;
      v43 = *(float *)&v39[1].member.refID;
      v44 = *a1;
      GameHour = v43;
      v64 = sub_5677B0(v65, v43, (TESObjectREFR *)v8, 2);
      v45 = (TESObjectREFR *)a1[0xB];
      GameHour = dbl_A2F938 / GameHour * *(float *)&v66;
      a4 = GameHour;
      v59 = GameHour;
      v57 = TESObjectREFR_GetWorldSpace(v45);
      v46 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
      v47 = (*(int (__thiscall **)(int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(*(_DWORD *)v42 + 0x174))(
              v42,
              v46,
              v57,
              LODWORD(v59),
              LODWORD(v64));
      (*(void (__thiscall **)(_DWORD *, int, int))(v44 + 0x418))(a1, v8, v47);
      if ( Actor::GetProcessLevel((Actor *)v8) != 1 || MobileObject_GetProcessLevel((MobileObject *)v8) != 1 )
        return 0;
      if ( sub_5687D0(v65, v44, a4, (TESObjectREFR *)v8) )
        goto LABEL_52;
    }
LABEL_50:
    v48 = a1[0xD];
    if ( v48 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v48 + 0x2C))(v48) )
      goto LABEL_52;
    return 0;
  }
  v25 = *a1;
  v26 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v24 + 0x174))(v24);
  v61 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
  v27 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
  result = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v25 + 0x3DC))(
             a1,
             v8,
             *v26,
             v26[1],
             v26[2],
             v27,
             v61);
  if ( result )
    goto LABEL_44;
  return result;
}
