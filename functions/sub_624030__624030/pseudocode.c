double __userpurge sub_624030@<st0>(int a1@<ecx>, Actor *a2@<edi>, double result@<st0>, char a4)
{
  double v7; // st6
  double v8; // st5
  bool v9; // zf
  TESObjectREFR *v10; // eax
  int *v11; // eax
  int v12; // eax
  TESObjectREFR *v13; // eax
  char v14; // al
  char v15; // al
  int v16; // eax
  TESObjectREFR *v17; // edi
  bool v18; // bl
  TESObjectREFR *v19; // eax
  int DetectionLevel; // eax
  int v21; // eax
  int v22; // eax
  signed int v23; // eax
  TESObjectREFR *v24; // eax
  int *v25; // ecx
  int v26; // ebx
  _DWORD *v27; // edi
  int **v28; // ebp
  int *v29; // edx
  int v30; // eax
  int v31; // [esp+0h] [ebp-18h]
  char v32; // [esp+4h] [ebp-14h]
  char v33; // [esp+8h] [ebp-10h]
  float v34; // [esp+14h] [ebp-4h]
  _DWORD *v35; // [esp+1Ch] [ebp+4h]
  float v36; // [esp+1Ch] [ebp+4h]

  if ( *(_DWORD *)(a1 + 0x3C) && sub_6135F0(a1) )
  {
    v7 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0x140);
    v33 = (char)a2;
    v8 = *(float *)(a1 + 0x144);
    if ( v8 >= v7 && !a4 && *(char *)(a1 + 0x1AC) < 0 )
      goto LABEL_47;
    v9 = *(_BYTE *)(a1 + 0x1AC) == 0;
    if ( *(char *)(a1 + 0x1AC) < 0 )
    {
      *(_BYTE *)(a1 + 0x1AC) = 0;
      v9 = *(_BYTE *)(a1 + 0x1AC) == 0;
    }
    if ( v9 )
    {
      a2 = *(Actor **)(a1 + 0x3C);
      v10 = (TESObjectREFR *)sub_6135F0(a1);
      *(_BYTE *)(a1 + 0x158) = sub_5F2820(a2, result, 0, v10, 0, 0, 0);
    }
    if ( *(_BYTE *)(a1 + 0x1AC) == 1 )
    {
      v7 = flt_A30634;
      a2 = *(Actor **)(a1 + 0x3C);
      v11 = (int *)sub_6135F0(a1);
      *(_BYTE *)(a1 + 0x159) = sub_621170((int *)a2, v11, 1) != 0;
    }
    if ( *(_BYTE *)(a1 + 0x1AC) == 2 )
    {
      if ( a4
        || *(_DWORD *)(a1 + 0x70) == 0xD
        || (v12 = *(_DWORD *)(a1 + 0x6C), v12 != 4) && v12 && *(_DWORD *)(a1 + 0x74) )
      {
        a2 = *(Actor **)(a1 + 0x3C);
        v32 = *(_BYTE *)(a1 + 0x158);
        v13 = (TESObjectREFR *)sub_6135F0(a1);
        *(_BYTE *)(a1 + 0x174) = sub_617590((TESObjectREFR *)a2, v13, v32);
      }
      else
      {
        *(_BYTE *)(a1 + 0x1AC) = 3;
      }
    }
    v14 = *(_BYTE *)(a1 + 0x1AC);
    if ( v14 == 3 || v14 == 4 || v14 == 5 || v14 == 6 )
    {
      do
      {
        v15 = *(_BYTE *)(a1 + 0x1AC);
        if ( v15 >= 7 )
          break;
        result = sub_614550(a1, *(float *)&a2, result, v7, v15 - 3);
        *(_BYTE *)(a1 + 0x1AC) += v16;
      }
      while ( v16 > 0 );
    }
    if ( *(_BYTE *)(a1 + 0x191) )
    {
      if ( *(_BYTE *)(a1 + 0x1AC) != 7 )
      {
LABEL_37:
        if ( (char)++*(_BYTE *)(a1 + 0x1AC) > 7 )
        {
          if ( *(_BYTE *)(a1 + 0x1BD) )
            *(_BYTE *)(a1 + 0x1BD) = 0;
          *(_BYTE *)(a1 + 0x1AC) = 0xFF;
          v24 = (TESObjectREFR *)sub_6135F0(a1);
          if ( Actor_IsPlayer(v24) )
          {
            if ( dword_B3B914 > dword_B14B94 )
              v25 = (int *)&unk_B14BA4;
            else
              v25 = (int *)&unk_B14B9C;
          }
          else
          {
            v25 = (int *)&unk_B14BBC;
            if ( dword_B3B914 > dword_B14BB4 )
              v25 = (int *)&unk_B14BC4;
          }
          v34 = *(float *)GameSetting_GetSafeFloatPointer(v25);
          *(float *)(a1 + 0x140) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0x144) = v34;
          *(float *)(a1 + 0x148) = flt_A30634;
        }
LABEL_47:
        if ( *(float *)(a1 + 0x150) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0x14C) || a4 )
        {
          BSSimpleList_Clear((_DWORD *)(a1 + 0x15C));
          v26 = 0;
          v31 = *(_DWORD *)(a1 + 0x3C);
          *(_DWORD *)(a1 + 0x178) = 0;
          *(_BYTE *)(a1 + 0x17C) = 0;
          v27 = sub_67C880(&dword_B3BDB0, v31, 0);
          v35 = v27;
          if ( !v27 )
            goto LABEL_57;
          do
          {
            v28 = (int **)*v27;
            v29 = *(int **)*v27;
            v27 = (_DWORD *)v27[1];
            if ( sub_614F80(a1, v26, v29) )
            {
              if ( (*(int (__thiscall **)(int *))(**v28 + 0x330))(*v28) )
              {
                v30 = *(_DWORD *)((*(int (__thiscall **)(int *))(**v28 + 0x330))(*v28) + 0x70);
                if ( v30 == 2 || v30 == 4 )
                  ++v26;
              }
            }
          }
          while ( v27 );
          BSSimpleList_Clear(v35);
          FormHeapFree((unsigned int)v35);
          if ( !v26 )
LABEL_57:
            *(_BYTE *)(a1 + 0x15A) = 0;
          v36 = fCombatCollectAlliesTimer;
          *(float *)(a1 + 0x14C) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0x150) = v36;
          *(float *)(a1 + 0x154) = flt_A30634;
        }
        return result;
      }
      *(_BYTE *)(a1 + 0x191) = 0;
    }
    if ( *(_BYTE *)(a1 + 0x1AC) == 7 )
    {
      v17 = *(TESObjectREFR **)(a1 + 0x3C);
      v18 = *(_DWORD *)(a1 + 0x1A8) < iAICombatMinDetection;
      v19 = (TESObjectREFR *)sub_6135F0(a1);
      DetectionLevel = Actor_GetDetectionLevel(
                         v17,
                         (int)v17,
                         v8,
                         v7,
                         result,
                         0,
                         v19,
                         (_BYTE *)(a1 + 0x158),
                         1,
                         0,
                         0,
                         v33);
      *(_DWORD *)(a1 + 0x1A8) = DetectionLevel;
      if ( v18 && DetectionLevel >= iAICombatMinDetection )
      {
        v21 = *(_DWORD *)(a1 + 0x6C);
        if ( v21 == 0xF || v21 == 0xA || v21 == 0xB || v21 == 0xC )
        {
          v22 = TESTopic::GEtTopic(4, 1);
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0xE4) = TESDataHandler_g_PlayerRef;
          result = ((double (__thiscall *)(_DWORD, _DWORD, int, _DWORD, _DWORD, int))*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58)
                                                                                               + 0x1A4))(
                     *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                     *(_DWORD *)(a1 + 0x3C),
                     v22,
                     0,
                     0,
                     1);
          v23 = sub_6239D0(a1, v8, v7, result, 0, 0);
          sub_612DE0(a1, v23);
          sub_61D320(a1);
        }
      }
    }
    goto LABEL_37;
  }
  return result;
}
