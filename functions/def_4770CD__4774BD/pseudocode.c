// positive sp value has been detected, the output may be wrong!
void __userpurge def_4770CD(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8,
        int a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        float a22,
        float a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28)
{
  TESObjectREFR *v28; // edi
  TESObjectREFR *v29; // ebx
  float v30; // ecx
  float v31; // edx
  int v32; // eax
  bool v33; // zf
  int v34; // eax
  float v35; // edx
  float v36; // eax
  __int16 v37; // bx
  int v38; // eax
  int v39; // edi
  _DWORD *v40; // ecx
  float *v41; // eax
  double v42; // st7
  double v43; // st7
  double v44; // st5
  unsigned __int16 AnimGroup; // ax
  int v46; // edi
  int v47; // eax
  float *v48; // eax
  double v49; // st7
  _DWORD *v50; // eax
  _DWORD *v51; // ecx
  float *v52; // eax
  float v53; // eax
  float v54; // ecx
  float v55; // edx
  int v56; // ecx
  double v57; // st7
  int v58; // eax
  int v59; // eax
  int v60; // edx
  int v61; // ecx
  int v62; // ecx
  int v63; // eax
  unsigned __int8 v64; // bl
  _DWORD **v65; // edi
  int v66; // eax
  char *v67; // eax
  unsigned __int8 v68; // al
  float *v69; // ecx
  int v70; // edi
  int v71; // eax
  _DWORD **v72; // ecx
  int v73; // edi
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h]
  TESObjectREFR *v75; // [esp+14h] [ebp+4h]
  int v76; // [esp+14h] [ebp+4h]
  int v77; // [esp+18h] [ebp+8h]
  float v78; // [esp+1Ch] [ebp+Ch]
  float v79; // [esp+1Ch] [ebp+Ch]
  int v80; // [esp+1Ch] [ebp+Ch]
  float v81; // [esp+1Ch] [ebp+Ch]

  if ( a1 + 1 < 5 )
    JUMPOUT(0x476FA6);
  v28 = *(TESObjectREFR **)(a2 + 8);
  if ( *(_DWORD *)(a3 + 8) )
  {
    v29 = 0;
    v75 = 0;
    if ( v28 )
    {
      if ( v28->vtbl->IsActor(v28) )
      {
        v29 = v28;
        v75 = v28;
        if ( ((int (__thiscall *)(TESObjectREFR *))v28->vtbl[2].super.Unk_0C)(v28) )
        {
          if ( v28->vtbl->GetSleepState(v28) >= 2 && v28->vtbl->GetSleepState(v28) <= kSitSleep_SittingOut )
            sub_4728C0(a3);
        }
      }
    }
    v30 = *(float *)(a3 + 0x18);
    v31 = *(float *)(a3 + 0x1C);
    a22 = *(float *)(a3 + 0x20);
    v32 = *(_DWORD *)(a3 + 8);
    v33 = *(_WORD *)(v32 + 0xB6) == 0;
    a20 = v30;
    a21 = v31;
    if ( v33 )
      v34 = 0;
    else
      v34 = **(_DWORD **)(v32 + 0xB0);
    v35 = Vector3_InitValue_;
    v78 = *(float *)(v34 + 0x5C);
    v36 = *(&Vector3_InitValue_ + 1);
    a13 = dword_B3F9B0;
    HIBYTE(retaddr) = 0;
    a11 = v35;
    a12 = v36;
    if ( sub_5E05B0(v29) && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v75->vtbl[1].super.CopyFrom)(v75) )
    {
      v37 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v75[1].vtbl->super.super.InitializeComponent + 0xB0))(v75[1].vtbl);
      v38 = *(_DWORD *)(a3 + 0xA0);
      if ( v38 )
      {
        if ( (v37 & 0xF) != 0 )
        {
          v39 = 0;
          if ( (unsigned int)(TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v38 + 0x68)) - 0x28) <= 1
            || (*(_DWORD *)(*(_DWORD *)(a3 + 0xA0) + 0x44) == 2 || *(_DWORD *)(*(_DWORD *)(a3 + 0xA0) + 0x44) == 5)
            && v75 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          {
            HIBYTE(retaddr) = 1;
            if ( (v37 & 0x200) != 0 )
            {
              if ( (v37 & 1) != 0 )
              {
                v39 = 7;
              }
              else if ( (v37 & 2) != 0 )
              {
                v39 = 8;
              }
              else if ( (v37 & 4) != 0 )
              {
                v39 = 9;
              }
              else if ( (v37 & 8) != 0 )
              {
                v39 = 0xA;
              }
            }
            else if ( (v37 & 0xFF00) != 0 )
            {
              if ( (v37 & 1) != 0 )
              {
                v39 = 3;
              }
              else if ( (v37 & 2) != 0 )
              {
                v39 = 4;
              }
              else if ( (v37 & 4) != 0 )
              {
                v39 = 5;
              }
              else if ( (v37 & 8) != 0 )
              {
                v39 = 6;
              }
            }
            if ( v39 == TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(*(_DWORD *)(a3 + 0xA0) + 0x68)) )
            {
              v40 = *(_DWORD **)(*(_DWORD *)(a3 + 0xA0) + 0x68);
              a7 = flt_B33E9C;
              v41 = (float *)sub_51AAB0(v40, &a17);
              v42 = a7;
              a7 = *v41 * a7;
              a8 = v41[1] * v42;
              *(float *)&a9 = v42 * v41[2];
              v43 = flt_B06530;
              a14 = a7 * v43;
              a15 = a8 * v43;
              a16 = v43 * *(float *)&a9;
              v44 = *(float *)(a3 + 0xBC);
              a7 = a14 * v44;
              a11 = a7;
              a8 = a15 * v44;
              a12 = a8;
              *(float *)&a9 = v44 * a16;
              a13 = *(float *)&a9;
            }
            else
            {
              AnimGroup = Actor_LoadAnimGroup_(v75, v39, 0, 0);
              v46 = AnimGroup;
              if ( sub_51AA00(AnimGroup) )
              {
                if ( sub_470960(*(_DWORD **)(a3 + 0x9C), v46, &a7) )
                {
                  v47 = (*(int (__thiscall **)(float, unsigned int))(*(_DWORD *)LODWORD(a7) + 0x10))(
                          COERCE_FLOAT(LODWORD(a7)),
                          0xFFFFFFFF);
                  if ( v47 )
                  {
                    v79 = flt_B33E9C;
                    v48 = (float *)sub_51AAB0(*(_DWORD **)(v47 + 0x68), &a16);
                    a13 = v79 * *v48;
                    a14 = v48[1] * v79;
                    a15 = v79 * v48[2];
                    v49 = flt_B06530;
                    a16 = a13 * v49;
                    a17 = a14 * v49;
                    a18 = v49 * a15;
                    v78 = *(float *)(a3 + 0xBC);
                    a13 = a16 * v78;
                    a10 = a13;
                    a14 = a17 * v78;
                    a11 = a14;
                    a15 = v78 * a18;
                    a12 = a15;
                  }
                }
              }
            }
          }
        }
      }
    }
    v50 = *(_DWORD **)(a3 + 8);
    a7 = *(float *)(a3 + 0x94);
    if ( v50 )
    {
      v50[0x15] = *(_DWORD *)(a3 + 0x18);
      v50[0x16] = *(_DWORD *)(a3 + 0x1C);
      v50[0x17] = *(_DWORD *)(a3 + 0x20);
    }
    sub_47C990(*(_DWORD **)(a3 + 4), a7, *(_DWORD **)(a3 + 8));
    v51 = *(_DWORD **)(a3 + 8);
    if ( v51 )
    {
      if ( a3 != 0xFFFFFFE8 )
      {
        *(_DWORD *)(a3 + 0x18) = v51[0x15];
        *(_DWORD *)(a3 + 0x1C) = v51[0x16];
        *(_DWORD *)(a3 + 0x20) = v51[0x17];
      }
      v52 = (float *)(*(_DWORD *)(a3 + 8) + 0x54);
      *v52 = Vector3_InitValue_;
      v52[1] = *(&Vector3_InitValue_ + 1);
      v52[2] = dword_B3F9B0;
    }
    if ( HIBYTE(retaddr) )
    {
      v53 = a11;
      v54 = a12;
      v55 = a13;
    }
    else
    {
      a17 = *(float *)(a3 + 0x18) - a20;
      v53 = a17;
      a18 = *(float *)(a3 + 0x1C) - a21;
      v54 = a18;
      a19 = *(float *)(a3 + 0x20) - a22;
      v55 = a19;
    }
    *(float *)(a3 + 0xC) = v53;
    *(float *)(a3 + 0x10) = v54;
    v56 = *(_DWORD *)(a2 + 8);
    *(float *)(a3 + 0x14) = v55;
    a7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v56 + 0xEC))(v56);
    v57 = a7;
    *(float *)(a3 + 0xC) = a7 * *(float *)(a3 + 0xC);
    *(float *)(a3 + 0x10) = *(float *)(a3 + 0x10) * v57;
    *(float *)(a3 + 0x14) = v57 * *(float *)(a3 + 0x14);
    v58 = *(_DWORD *)(a3 + 8);
    if ( *(_WORD *)(v58 + 0xB6) )
      v59 = **(_DWORD **)(v58 + 0xB0);
    else
      v59 = 0;
    *(float *)(a3 + 0x14) = *(float *)(v59 + 0x5C) - v78;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a3 + 4) + 0x18) & 1) == 0 )
  {
    v76 = 0;
    v60 = 0;
    do
    {
      if ( *(_BYTE *)(a3 + 0x90) != 5 )
      {
        if ( *(_BYTE *)(a3 + 0x90) == 6 )
        {
          if ( v60 > 0 && v60 <= 3 )
            goto LABEL_89;
LABEL_65:
          v61 = v60;
          if ( v60 == 5 )
          {
            v61 = 0;
          }
          else if ( v60 == 6 )
          {
            v61 = 3;
          }
          v62 = *(_DWORD *)(a3 + 4 * v61 + 0xA0);
          v77 = v62;
          if ( v62 )
          {
            if ( *(&a28 + v60) == v62 )
            {
              v63 = *(_DWORD *)(v62 + 0x44);
              if ( v63 == 1 || v63 == 2 || v63 == 5 )
              {
                if ( !*(_DWORD *)(a3 + 4 * v60 + 0x24) )
                  goto LABEL_85;
                a7 = 0.0;
                v64 = 0;
                v65 = (_DWORD **)(a3 + 0xA0);
                v80 = 5;
                do
                {
                  if ( *v65 )
                  {
                    v66 = *(_DWORD *)(a3 + 4 * v60 + 0x24);
                    if ( v66 )
                    {
                      v67 = *(char **)(v66 + 8);
                      if ( v67 )
                      {
                        v68 = sub_49FD20(*v65, v67);
                        if ( v68 > v64 )
                        {
                          a7 = *(float *)v65;
                          v64 = v68;
                        }
                        v60 = v76;
                      }
                    }
                  }
                  ++v65;
                  --v80;
                }
                while ( v80 );
                if ( a7 != 0.0 && LODWORD(a7) == v77 )
                {
LABEL_85:
                  a7 = sub_49F4A0(v77, *(float *)(a3 + 0x94));
                  v81 = -flt_A7DEB4;
                  if ( v81 != a7 )
                  {
                    v69 = &a23 + v76;
                    if ( *v69 != v81 && *v69 != a7 )
                      sub_51AF70(*(_DWORD *)(a2 + 8), *v69, a7, v77);
                  }
                }
              }
            }
          }
          goto LABEL_89;
        }
        if ( v60 != *(char *)(a3 + 0x90) )
          goto LABEL_65;
      }
LABEL_89:
      v60 = ++v76;
    }
    while ( v76 < 5 );
  }
  v70 = *(_DWORD *)(a3 + 0xCC);
  if ( v70 )
  {
    if ( *(_DWORD *)v70 == 2 )
    {
      v71 = *(_DWORD *)(v70 + 0x10);
      if ( !v71 || !*(_DWORD *)(v71 + 0x44) )
      {
        v72 = *(_DWORD ***)(v70 + 0x28);
        *(_DWORD *)v70 = 3;
        if ( v72 )
        {
          if ( Actor_GetCurrentAction(v72) == 0xB )
            HighPRocess_DoAction_____(*(PlayerCharacter **)(v70 + 0x28), 0xFFFFFFFF, 0);
        }
        v73 = *(_DWORD *)(v70 + 4);
        if ( v73 == 2 || v73 == 3 )
          sub_475440((ActorAnimData *)a3, 1, 0);
      }
    }
  }
  *(_BYTE *)(a3 + 0x90) = 0xFF;
}
