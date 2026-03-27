TESPackage *__userpurge sub_601790@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        float a5,
        int a6)
{
  float *v7; // edi
  float *v8; // eax
  ActorAnimData *v9; // ebx
  TESPackage *result; // eax
  double v11; // st7
  signed int v12; // ecx
  double v13; // st7
  LowProcess *vtbl; // ecx
  int *v15; // ebx
  int OpenMenuTile; // ebx
  LowProcess *v17; // ecx
  bool v18; // zf
  int v19; // ebx
  LowProcess *v20; // ebp
  int v21; // eax
  int v22; // ebp
  UInt32 GetChildCell; // eax
  UInt32 v24; // eax
  TESPackage *v25; // eax
  TESObjectCELL *ParentCell; // eax
  float v27; // [esp+28h] [ebp-38h]
  int v28; // [esp+2Ch] [ebp-34h]
  int v29; // [esp+34h] [ebp-2Ch]
  char v30; // [esp+42h] [ebp-1Eh]
  char v31; // [esp+43h] [ebp-1Dh]
  TESPackage *CopyFromBase; // [esp+44h] [ebp-1Ch]
  float v33; // [esp+48h] [ebp-18h]
  float v34; // [esp+48h] [ebp-18h]
  float v35; // [esp+4Ch] [ebp-14h]
  ActorAnimData *v36; // [esp+4Ch] [ebp-14h]
  float v37; // [esp+50h] [ebp-10h]
  float v38; // [esp+50h] [ebp-10h]
  float v39[3]; // [esp+54h] [ebp-Ch] BYREF

  v7 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetPos)(
                  a1,
                  st7_0,
                  a3,
                  a2);
  v8 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
  v35 = v8[1] - v7[1];
  v33 = v8[2] - v7[2];
  v39[0] = *v8 - *v7;
  v39[1] = v35;
  v39[2] = v33;
  v34 = sub_683CB0(v39);
  v9 = a1->vtbl->GetAnimData(a1);
  result = (TESPackage *)a1[1].vtbl->super.super.CopyFromBase;
  v36 = v9;
  CopyFromBase = 0;
  if ( result )
  {
    if ( result->members.type == 0x12 )
      CopyFromBase = (TESPackage *)a1[1].vtbl->super.super.CopyFromBase;
  }
  v31 = 0;
  if ( v9 )
  {
    v37 = ((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1) - v34;
    v38 = fabs(v37);
    v11 = v38;
    if ( v38 <= (double)*(float *)&SrcStr || a1->vtbl->GetSleepState(a1) )
    {
      if ( a1[1].vtbl )
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0xB1))(
          a1[1].vtbl,
          0x30,
          0);
      v31 = 1;
    }
    else
    {
      v11 = v34;
      sub_685530((Actor *)a1, v34, 1);
    }
    v30 = 0;
    if ( *(float *)&a6 != 0.0 )
    {
      if ( !a1[1].vtbl )
        goto LABEL_19;
      LOWORD(v12) = *(_WORD *)(a6 + 4);
      if ( (_WORD)v12 == 0xFFFF )
        v12 = strlen(*(const char **)a6);
      else
        v12 = (unsigned __int16)v12;
      v7 = *(float **)(a6 + 8);
      Actor::InitDialogue(
        (Actor *)a1,
        *(char **)(a6 + 0x10),
        (int **)&a6,
        (int)v7,
        *(_DWORD *)(a6 + 0xC),
        v12,
        1,
        1,
        0,
        1);
      *(float *)&a6 = v11;
      (*((void (__stdcall **)(int))a1[1].vtbl->super.super.InitializeComponent + 0x83))(a6);
      v30 = 1;
      sub_475440(v9, 1, 0);
    }
    if ( a1[1].vtbl )
      (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl);
LABEL_19:
    Actor_ProcessAction((Actor *)a1, a2, a3, 1.0, 1.0, 1.0);
    v13 = flt_B33E9C;
    sub_476D10((AnimSequenceSingle *)v9, (int)v7, a2, a3, v13, (int)a1, flt_B33E9C, flt_A30634);
    vtbl = (LowProcess *)a1[1].vtbl;
    if ( vtbl )
    {
      v15 = (int *)((int (__thiscall *)(LowProcess *, _DWORD))vtbl->GetUnk220Element)(vtbl, 0);
      if ( a1[1].vtbl )
        v7 = (float *)(*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent
                       + 0x3A))(
                        a1[1].vtbl,
                        a1);
      else
        v7 = 0;
      if ( v15 && sub_6B7260(v15) )
      {
        if ( !v7 )
          goto LABEL_50;
        if ( a1[1].member.childCell.GetChildCell != (TESObjectCELL *(__thiscall *)(TESChildCELL *))7 )
          goto LABEL_50;
        OpenMenuTile = Menu_GetOpenMenuTile(0x40A);
        v7 = (float *)sub_5E12B0((Actor *)a1);
        if ( !v7 )
          goto LABEL_50;
        if ( byte_B1206C )
        {
          v17 = (LowProcess *)a1[1].vtbl;
          if ( v17 )
          {
            v18 = OpenMenuTile == 0;
LABEL_31:
            if ( v18 && ((int (__thiscall *)(LowProcess *))v17->Unk_76)(v17) )
              goto LABEL_50;
            goto LABEL_33;
          }
          goto LABEL_33;
        }
      }
      else
      {
        v22 = Menu_GetOpenMenuTile(0x40A);
        if ( CopyFromBase )
        {
          if ( CopyFromBase[1].members.super.refID )
          {
            if ( !v15 )
            {
              CopyFromBase[1].members.super.refID = 0;
              sub_475440(v36, 1, 0);
            }
          }
        }
        if ( !v7 )
          goto LABEL_50;
        GetChildCell = (UInt32)a1[1].member.childCell.GetChildCell;
        if ( GetChildCell != 7 )
        {
          v24 = GetChildCell - 1;
          if ( v24 )
          {
            if ( v24 == 4 )
            {
              v13 = *(float *)&a1[1].member.baseForm;
              (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v7 + 0xC8))(
                v7,
                0xC,
                *(float *)&a1[1].member.baseForm);
            }
          }
          else
          {
            v13 = *(float *)&a1[1].member.baseForm;
            (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v7 + 0xC8))(
              v7,
              8,
              *(float *)&a1[1].member.baseForm);
          }
          goto LABEL_50;
        }
        if ( byte_B1206C )
        {
          v17 = (LowProcess *)a1[1].vtbl;
          if ( v17 )
          {
            v18 = v22 == 0;
            goto LABEL_31;
          }
LABEL_33:
          if ( InterfaceManager::IsOpenedMenuDialogue() )
          {
            v19 = *(_DWORD *)v7;
            v20 = (LowProcess *)a1[1].vtbl;
            LOBYTE(v21) = Actor::IsTalking((Actor *)a1);
            v28 = v21;
            v13 = ((double (__thiscall *)(LowProcess *, TESObjectREFR *, PlayerCharacter *))v20->Unk_75)(
                    v20,
                    a1,
                    TESDataHandler_g_PlayerRef);
            v27 = v13;
            (*(void (__thiscall **)(float *, _DWORD, int))(v19 + 0xD0))(v7, LODWORD(v27), v28);
          }
          goto LABEL_50;
        }
      }
      v13 = 0.0;
      (*(void (__thiscall **)(float *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 0x78))(
        v7,
        0.0,
        1,
        0,
        0,
        0,
        0);
    }
LABEL_50:
    sub_6AE860((int)OSGlobals->sound, (int)v7, a2, a3, v13, 1, COERCE_FLOAT(1), v29);
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl[1].super.Unk_20)(a1, LODWORD(a5));
    if ( v30 )
    {
      if ( CopyFromBase )
        CopyFromBase[1].members.super.refID = (UInt32)a1;
    }
    v25 = (TESPackage *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl);
    if ( v31 )
    {
      if ( v25 )
      {
        if ( v25->members.type == 0x12 && sub_472EA0(v36) )
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent
           + 0x12))(
            a1[1].vtbl,
            a1);
      }
    }
    ParentCell = TESObjectREFR_GetParentCell(a1);
    if ( ParentCell )
      sub_4CB6C0(ParentCell);
    return ((TESPackage *(__thiscall *)(TESObjectREFR *))a1->vtbl->Unk_3F)(a1);
  }
  return result;
}
