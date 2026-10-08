TESPackage *__userpurge sub_601790@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        float a5,
        float a6)
{
  float *v7; // edi
  float *v8; // eax
  ActorAnimData *v9; // ebx
  TESPackage *result; // eax
  double v11; // st7
  signed int v12; // ecx
  double v13; // st7
  TESObjectREFRVtbl *vtbl; // ecx
  UInt32 *v15; // ebx
  int OpenMenuTile; // ebx
  TESObjectREFRVtbl *v17; // ecx
  bool v18; // zf
  int v19; // ebx
  TESObjectREFRVtbl *v20; // ebp
  int v21; // eax
  int v22; // ebp
  TESObjectCELL *(__thiscall *GetChildCell)(TESChildCELL *); // eax
  char *v24; // eax
  int v25; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  float v27; // [esp+28h] [ebp-38h]
  int arg0a; // [esp+2Ch] [ebp-34h]
  int v29; // [esp+34h] [ebp-2Ch]
  char v30; // [esp+42h] [ebp-1Eh]
  char v31; // [esp+43h] [ebp-1Dh]
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // [esp+44h] [ebp-1Ch]
  float v33; // [esp+48h] [ebp-18h]
  float v34; // [esp+48h] [ebp-18h]
  float v35; // [esp+4Ch] [ebp-14h]
  ActorAnimData *v36; // [esp+4Ch] [ebp-14h]
  float v37; // [esp+50h] [ebp-10h]
  float v38; // [esp+50h] [ebp-10h]
  float v39[3]; // [esp+54h] [ebp-Ch] BYREF

  v7 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetPos)( /*0x6017a8*/
                  a1,
                  st7_0,
                  a3,
                  a2);
  v8 = reference->vtbl->super.super.super.GetPos(reference); /*0x6017b2*/
  v35 = v8[1] - v7[1]; /*0x6017ba*/
  v33 = v8[2] - v7[2]; /*0x6017c4*/
  v39[0] = *v8 - *v7; /*0x6017d1*/
  v39[1] = v35; /*0x6017d9*/
  v39[2] = v33; /*0x6017e1*/
  v34 = Vector3_CalculateHeadingRadiansXY(v39); /*0x6017ec*/
  v9 = a1->vtbl->GetAnimData(a1); /*0x601800*/
  result = (TESPackage *)a1[1].vtbl->super.super.CopyFromBase; /*0x601802*/
  v36 = v9; /*0x601807*/
  CopyFromBase = 0; /*0x60180b*/
  if ( result ) /*0x601813*/
  {
    if ( result->members.type == kPackageType_Dialogue ) /*0x601819*/
      CopyFromBase = a1[1].vtbl->super.super.CopyFromBase; /*0x60181b*/
  }
  v31 = 0; /*0x601821*/
  if ( v9 ) /*0x601826*/
  {
    v37 = ((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1) - v34; /*0x60183c*/
    v38 = fabs(v37); /*0x601846*/
    v11 = v38; /*0x60184a*/
    if ( v38 <= (double)*(float *)&SrcStr || a1->vtbl->GetSleepState(a1) ) /*0x601865*/
    {
      if ( a1[1].vtbl ) /*0x601880*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0xB1))( /*0x601895*/
          a1[1].vtbl,
          0x30,
          0);
      v31 = 1; /*0x601897*/
    }
    else
    {
      v11 = v34; /*0x60186b*/
      sub_685530((Actor *)a1, v34, 1); /*0x601876*/
    }
    v30 = 0; /*0x6018a2*/
    if ( a6 != 0.0 ) /*0x6018a7*/
    {
      if ( !a1[1].vtbl ) /*0x6018ad*/
        goto LABEL_19; /*0x6018ad*/
      LOWORD(v12) = *(_WORD *)(LODWORD(a6) + 4); /*0x6018b3*/
      if ( (_WORD)v12 == 0xFFFF ) /*0x6018bc*/
        v12 = strlen(*(const char **)LODWORD(a6)); /*0x6018cc*/
      else
        v12 = (unsigned __int16)v12; /*0x6018d0*/
      v7 = *(float **)(LODWORD(a6) + 8); /*0x6018d6*/
      Actor::InitDialogue( /*0x6018ef*/
        (Actor *)a1,
        *(char **)(LODWORD(a6) + 0x10),
        (int **)&a6,
        (int)v7,
        *(_DWORD *)(LODWORD(a6) + 0xC),
        v12,
        1,
        1,
        0,
        1);
      a6 = v11; /*0x6018f4*/
      (*((void (__stdcall **)(float))a1[1].vtbl->super.super.InitializeComponent + 0x83))(COERCE_FLOAT(LODWORD(a6))); /*0x60190b*/
      v30 = 1; /*0x601913*/
      ActorAnimData_CleanupOrPromoteQueuedIdles(v9, 1, 0); /*0x601918*/
    }
    if ( a1[1].vtbl ) /*0x60191d*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl); /*0x60192e*/
LABEL_19:
    Actor_ProcessAction((Actor *)a1, 1.0, 1.0); /*0x601930*/
    v13 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x601950*/
    ActorAnimData_Update(v9, (Actor *)a1, *(float *)&MEMORY[0xB33E90][0xC], kTerrainLODQuadRayDirectionZ); /*0x60195c*/
    vtbl = a1[1].vtbl; /*0x601961*/
    if ( vtbl ) /*0x601966*/
    {
      v15 = (UInt32 *)(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))vtbl->super.super.InitializeComponent + 0xCF))( /*0x60197c*/
                        vtbl,
                        0);
      if ( a1[1].vtbl ) /*0x601978*/
        v7 = (float *)(*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent /*0x60198e*/
                       + 0x3A))(
                        a1[1].vtbl,
                        a1);
      else
        v7 = 0; /*0x601992*/
      if ( v15 && SoundHandle::IsPlaying(v15) ) /*0x60199f*/
      {
        if ( !v7 ) /*0x6019ae*/
          goto LABEL_50; /*0x6019ae*/
        if ( a1[1].member.childCell.GetChildCell != (TESObjectCELL *(__thiscall *)(TESChildCELL *))7 ) /*0x6019b8*/
          goto LABEL_50; /*0x6019b8*/
        OpenMenuTile = Menu_GetOpenMenuTile(0x40A); /*0x6019cd*/
        v7 = (float *)sub_5E12B0((Actor *)a1); /*0x6019d4*/
        if ( !v7 ) /*0x6019d8*/
          goto LABEL_50; /*0x6019d8*/
        if ( byte_B1206C ) /*0x6019de*/
        {
          v17 = a1[1].vtbl; /*0x6019eb*/
          if ( v17 ) /*0x6019f0*/
          {
            v18 = OpenMenuTile == 0; /*0x6019f2*/
LABEL_31:
            if ( v18 && (*((int (__thiscall **)(TESObjectREFRVtbl *))v17->super.super.InitializeComponent + 0x77))(v17) ) /*0x6019fe*/
              goto LABEL_50; /*0x601a02*/
            goto LABEL_33; /*0x601a02*/
          }
          goto LABEL_33; /*0x6019f0*/
        }
      }
      else
      {
        v22 = Menu_GetOpenMenuTile(0x40A); /*0x601a4f*/
        if ( CopyFromBase ) /*0x601a5a*/
        {
          if ( *((_DWORD *)CopyFromBase + 0x12) ) /*0x601a5c*/
          {
            if ( !v15 ) /*0x601a64*/
            {
              *((_DWORD *)CopyFromBase + 0x12) = 0; /*0x601a6d*/
              ActorAnimData_CleanupOrPromoteQueuedIdles(v36, 1, 0); /*0x601a70*/
            }
          }
        }
        if ( !v7 ) /*0x601a77*/
          goto LABEL_50; /*0x601a77*/
        GetChildCell = a1[1].member.childCell.GetChildCell; /*0x601a79*/
        if ( GetChildCell != (TESObjectCELL *(__thiscall *)(TESChildCELL *))7 ) /*0x601a7f*/
        {
          v24 = (char *)GetChildCell + 0xFFFFFFFF; /*0x601ab7*/
          if ( v24 ) /*0x601aba*/
          {
            if ( v24 == (char *)4 ) /*0x601abf*/
            {
              v13 = *(float *)&a1[1].member.baseForm; /*0x601ac1*/
              (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v7 + 0xC8))( /*0x601aca*/
                v7,
                0xC,
                *(float *)&a1[1].member.baseForm);
            }
          }
          else
          {
            v13 = *(float *)&a1[1].member.baseForm; /*0x601acc*/
            (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v7 + 0xC8))( /*0x601adf*/
              v7,
              8,
              *(float *)&a1[1].member.baseForm);
          }
          goto LABEL_50; /*0x601aca*/
        }
        if ( byte_B1206C ) /*0x601a81*/
        {
          v17 = a1[1].vtbl; /*0x601a8a*/
          if ( v17 ) /*0x601a8f*/
          {
            v18 = v22 == 0; /*0x601a95*/
            goto LABEL_31; /*0x601a97*/
          }
LABEL_33:
          if ( InterfaceManager::IsOpenedMenuDialogue() ) /*0x601a08*/
          {
            v19 = *(_DWORD *)v7; /*0x601a15*/
            v20 = a1[1].vtbl; /*0x601a17*/
            LOBYTE(v21) = Actor::IsTalking((Actor *)a1); /*0x601a1c*/
            arg0a = v21; /*0x601a2c*/
            v13 = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *, PlayerCharacter *))*((_DWORD *)v20->super.super.InitializeComponent + 0x76))( /*0x601a34*/
                    v20,
                    a1,
                    reference);
            v27 = v13; /*0x601a3d*/
            (*(void (__thiscall **)(float *, _DWORD, int))(v19 + 0xD0))(v7, LODWORD(v27), arg0a); /*0x601a40*/
          }
          goto LABEL_50; /*0x601a40*/
        }
      }
      v13 = 0.0; /*0x601a9e*/
      (*(void (__thiscall **)(float *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 0x78))( /*0x601ab3*/
        v7,
        0.0,
        1,
        0,
        0,
        0,
        0);
    }
LABEL_50:
    sub_6AE860((int)MEMORY[0xB33398]->sound, (int)v7, a2, a3, v13, 1, COERCE_FLOAT(1), v29); /*0x601ae2*/
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl[1].super.Unk_20)(a1, LODWORD(a5)); /*0x601b06*/
    if ( v30 ) /*0x601b0d*/
    {
      if ( CopyFromBase ) /*0x601b15*/
        *((_DWORD *)CopyFromBase + 0x12) = a1; /*0x601b17*/
    }
    v25 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl); /*0x601b25*/
    if ( v31 ) /*0x601b2c*/
    {
      if ( v25 ) /*0x601b30*/
      {
        if ( *(_BYTE *)(v25 + 0x20) == 0x12 && ActorAnimData_IsIdleInactive(v36) ) /*0x601b3c*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent /*0x601b4e*/
           + 0x12))(
            a1[1].vtbl,
            a1);
      }
    }
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x601b52*/
    if ( DwordAtOffset40 ) /*0x601b59*/
      TESObjectCELL_UpdateAttachedReferenceLights(DwordAtOffset40); /*0x601b5d*/
    return ((TESPackage *(__thiscall *)(TESObjectREFR *))a1->vtbl->Unk_3F)(a1); /*0x601b6c*/
  }
  return result; /*0x601b6e*/
}
