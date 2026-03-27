void __usercall sub_61CE40(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>)
{
  _DWORD **v7; // eax
  int CurrentAction; // eax
  Actor *v9; // edi
  double v10; // st7
  int *v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  float v14; // edx
  int v15; // eax
  bool v16; // al
  int *v17; // eax
  unsigned __int16 v18; // ax
  int v19; // ebx
  void *v20; // ecx
  int v21; // edi
  int *v22; // ebp
  double v23; // st7
  int *v24; // ebp
  int *v25; // ebp
  int *v26; // ebx
  double (__thiscall *v27)(int *); // eax
  int *v28; // ebp
  unsigned __int8 AnimGroup; // al
  double v30; // st6
  int v31; // eax
  const char *v32; // eax
  char *Name; // eax
  int *v34; // edi
  int *v35; // ebx
  int v36; // [esp+Ch] [ebp-28h]
  float v37; // [esp+Ch] [ebp-28h]
  float v38; // [esp+Ch] [ebp-28h]
  float v39; // [esp+Ch] [ebp-28h]
  float FatigueFraction; // [esp+10h] [ebp-24h]
  char v41; // [esp+10h] [ebp-24h]
  float v42; // [esp+10h] [ebp-24h]
  float v43; // [esp+10h] [ebp-24h]
  __int16 v44; // [esp+14h] [ebp-20h]
  const char *v45; // [esp+14h] [ebp-20h]
  float v46; // [esp+14h] [ebp-20h]
  float v49; // [esp+24h] [ebp-10h]
  float v50; // [esp+24h] [ebp-10h]
  float v51; // [esp+24h] [ebp-10h]
  float v52; // [esp+28h] [ebp-Ch]
  int v53; // [esp+28h] [ebp-Ch]
  float v54; // [esp+28h] [ebp-Ch]
  int v55; // [esp+2Ch] [ebp-8h]
  float v56; // [esp+30h] [ebp-4h]
  int *v57; // [esp+30h] [ebp-4h]
  int *v58; // [esp+30h] [ebp-4h]
  float v59; // [esp+30h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h]
  float v61; // [esp+38h] [ebp+4h]

  if ( !(*(unsigned __int8 (__usercall **)@<al>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x25C))(
          *(_DWORD *)(a1 + 0x3C),
          a4)
    && sub_6135F0(a1) )
  {
    v7 = (_DWORD **)sub_6135F0(a1);
    CurrentAction = Actor_GetCurrentAction(v7);
    v9 = *(Actor **)(a1 + 0x3C);
    LOBYTE(v55) = CurrentAction == 2;
    FatigueFraction = Actor_GetFatigueFraction(v9, v55, (int)v9);
    v10 = sub_5E3590(v9);
    v36 = Double_To_SInt32(v10);
    v11 = sub_5E0F50(v9);
    v49 = sub_546A40(v11, v36, FatigueFraction, *(float *)&v55);
    if ( v49 < 0.0 )
      v49 = 0.0;
    v12 = *(_DWORD *)(a1 + 0x70);
    if ( (v12 == 2 || v12 == 4) && (!*(_BYTE *)(a1 + 0x158) || *(_BYTE *)(a1 + 0x159) || *(_BYTE *)(a1 + 0x15B)) )
      v49 = v49 + dbl_A3F3D0;
    if ( v12 < 2 || v12 == 3 )
    {
      if ( *(_BYTE *)(a1 + 0x15A) )
        v49 = v49 + dbl_A492B0;
    }
    if ( *(_DWORD *)(a1 + 0x74) == 2 )
      v49 = v49 + dbl_A3F3E8;
    if ( (v12 < 2 || v12 == 3) && (PlayerCharacter *)sub_6135F0(a1) != TESDataHandler_g_PlayerRef )
    {
      v13 = sub_6135F0(a1);
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x334))(v13, 1) )
        v49 = v49 - fCostant_100;
    }
    if ( v49 < (double)(GetRandomLargeInteger_(0) % 0x64) )
    {
      if ( *(_DWORD *)(a1 + 0x6C) != 1 )
      {
        v34 = sub_5E0F50(*(void **)(a1 + 0x3C));
        v35 = sub_5E0F50(*(void **)(a1 + 0x3C));
        v46 = ((double (__thiscall *)(int *))*(_DWORD *)(*v34 + 0x104))(v34);
        v43 = ((double (__thiscall *)(int *))*(_DWORD *)(*v35 + 0x100))(v35);
        v59 = sub_546B20(v43, v46);
        *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
        *(float *)(a1 + 0xD8) = v59;
        *(float *)(a1 + 0xDC) = flt_A30634;
        sub_6160B0((Actor **)a1);
        sub_619920(a1, 1);
      }
    }
    else
    {
      LOBYTE(v56) = Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 2;
      v50 = sub_615980(a1, (char)v9);
      v52 = sub_615520(a1);
      LOBYTE(v14) = *(_BYTE *)(a1 + 0x159) || *(_BYTE *)(a1 + 0x15A);
      v15 = *(_DWORD *)(a1 + 0x70);
      v16 = v15 == 2 || v15 == 4;
      v44 = *(_WORD *)(a1 + 0x192);
      v41 = v16;
      v37 = v14;
      v17 = sub_5E0F50(*(void **)(a1 + 0x3C));
      v18 = sub_546E10(v17, v56, *(float *)&v55, v50, v52, v37, v41, v44);
      v19 = v18;
      v53 = v18;
      if ( v18 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)) )
      {
        v20 = *(void **)(a1 + 0x3C);
        v21 = 3;
        if ( (v19 & 0xF) == 2 )
        {
          v21 = 4;
          v28 = sub_5E0F50(v20);
          v26 = sub_5E0F50(*(void **)(a1 + 0x3C));
          (*(void (__thiscall **)(int *))(*v28 + 0xFC))(v28);
          v27 = *(double (__thiscall **)(int *))(*v26 + 0xF8);
        }
        else
        {
          if ( (v19 & 0xF) != 4 )
          {
            if ( (v19 & 0xF) == 8 )
            {
              v21 = 6;
              v24 = sub_5E0F50(v20);
              v58 = sub_5E0F50(*(void **)(a1 + 0x3C));
              v42 = ((double (__thiscall *)(int *))*(_DWORD *)(*v24 + 0xEC))(v24);
              v38 = ((double (__thiscall *)(int *))*(_DWORD *)(*v58 + 0xE8))(v58);
            }
            else
            {
              v22 = sub_5E0F50(v20);
              v57 = sub_5E0F50(*(void **)(a1 + 0x3C));
              v42 = ((double (__thiscall *)(int *))*(_DWORD *)(*v22 + 0xF4))(v22);
              v38 = ((double (__thiscall *)(int *))*(_DWORD *)(*v57 + 0xF0))(v57);
            }
            v23 = sub_546B20(v38, v42);
            goto LABEL_42;
          }
          v21 = 5;
          v25 = sub_5E0F50(v20);
          v26 = sub_5E0F50(*(void **)(a1 + 0x3C));
          (*(void (__thiscall **)(int *))(*v25 + 0xEC))(v25);
          v27 = *(double (__thiscall **)(int *))(*v26 + 0xE8);
        }
        v39 = v27(v26);
        v23 = sub_546B20(v39, v50);
        v19 = v53;
LABEL_42:
        v51 = v23;
        AnimGroup = Actor_LoadAnimGroup_(*(TESObjectREFR **)(a1 + 0x3C), v21, 0, 0);
        if ( sub_51AA00(AnimGroup) == v21 )
        {
          v54 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), v21);
          if ( v51 < (double)v54 )
            v51 = v54;
          (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            v19,
            1,
            a3,
            a2);
          v61 = (float)(GetRandomLargeInteger_(0) % 0x64);
          if ( !(_BYTE)retaddr
            || (v30 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36D90), v31 = 0x200, v30 >= v61) )
          {
            v31 = 0x100;
          }
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            v31,
            1);
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0xD8) = v51;
          *(float *)(a1 + 0xDC) = v54;
          sub_619920(a1, 2);
        }
        else if ( byte_B3B908 )
        {
          if ( (v19 & 4) != 0 )
          {
            v32 = "LEFT";
          }
          else if ( (v19 & 8) != 0 )
          {
            v32 = "RIGHT";
          }
          else
          {
            v32 = "FOREWARD";
            if ( (v19 & 1) == 0 )
              v32 = "BACK";
          }
          v45 = v32;
          Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
          Interface_ConsolePrint("%.20s chose to dodge %s but has no corresponding animation", Name, v45);
        }
      }
    }
  }
}
