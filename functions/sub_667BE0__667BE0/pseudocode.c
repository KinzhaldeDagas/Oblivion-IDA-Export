volatile LONG *__usercall sub_667BE0@<eax>(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st3>)
{
  BSExtraDataVtbl *v6; // eax
  float *v7; // esi
  NiNode *v8; // eax
  NiAVObject *v9; // ebx
  NiAVObject *v10; // edi
  int v11; // eax
  bool v12; // zf
  double v13; // st7
  int v14; // eax
  int *v15; // eax
  int *v16; // eax
  ActorAnimData *v17; // eax
  ActorAnimData *v18; // eax
  char v19; // al
  volatile LONG *NiNode; // eax
  volatile LONG *v21; // esi
  char *v22; // eax
  int *v23; // ebx
  int v24; // edi
  int v25; // eax
  int v26; // edi
  BSExtraDataVtbl *AnimData; // eax
  int (__thiscall *v28)(volatile LONG *, const char *); // edx
  int v29; // eax
  void *v30; // eax
  CHAR *FormModelPAth; // eax
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v33; // ebx
  _DWORD *v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // edi
  _DWORD *v38; // eax
  char v40; // [esp+3Fh] [ebp-6Dh]
  float *v41; // [esp+40h] [ebp-6Ch]
  float v42; // [esp+44h] [ebp-68h]
  float v43; // [esp+44h] [ebp-68h]
  _DWORD v44[4]; // [esp+48h] [ebp-64h] BYREF
  float v45[9]; // [esp+58h] [ebp-54h] BYREF
  float v46[9]; // [esp+7Ch] [ebp-30h] BYREF
  int v47; // [esp+A8h] [ebp-4h]

  v6 = (BSExtraDataVtbl *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x170))(
                            a1,
                            a4,
                            a3,
                            st5_0);
  if ( (SaveLoad_CurrentSavegame->flags & 2) == 0 )
  {
    sub_5227A0(v6, st5_0, a3, a4, (TESObjectREFR *)a1, 1, 1, 0, 0);
    sub_6670C0((Actor *)a1);
  }
  v7 = (float *)sub_439EB0((int *)ModelLoaderPtr, *(const char **)dword_B36BB8, 1, (void *)3, 1);
  v41 = v7;
  v8 = (NiNode *)FormHeapAlloc(0xDCu);
  v9 = 0;
  v47 = 0;
  if ( v8 )
    v9 = (NiAVObject *)NiNode::NiNode(v8, 0);
  v9->members.m_flags |= 0x40u;
  v10 = *(NiAVObject **)(a1 + 0x5D0);
  v47 = 0xFFFFFFFF;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->members) )
        v10->vtbl->super.super.Destructor((NiRefObject *)v10, 1);
    }
    *(_DWORD *)(a1 + 0x5D0) = v9;
    InterlockedIncrement((volatile LONG *)&v9->members);
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a1 + 0x5D0), "Player1stPerson");
  ((void (__thiscall *)(NiAVObject *, float *, int))v9->vtbl[1].super.super.Destructor)(v9, v7, 1);
  CameraP1 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 0x5D0) + 0x58))(
               *(_DWORD *)(a1 + 0x5D0),
               "Camera01");
  v11 = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a1 + 0x5D0) + 0x58))(*(_DWORD *)(a1 + 0x5D0), off_A738A4);
  v12 = CameraP1 == 0;
  Camera1PBiped = v11;
  if ( v12 )
    sub_404EC0("Missing 'Camera01' on '%s'.", *(const char **)dword_B36BB8);
  if ( !Camera1PBiped )
    sub_404EC0("Missing 'Bip' on '%s'.", *(const char **)dword_B36BB8);
  NiAVObject_UpdateNiAVObject(v9, 0.0, 1);
  v42 = *(float *)(CameraP1 + 0x90);
  *(float *)(a1 + 0x5D4) = v42;
  v43 = -v42;
  *(float *)&v44[1] = 0.0;
  *(float *)&v44[2] = 0.0;
  v13 = v43;
  v7[0x15] = 0.0;
  *(float *)&v44[3] = v43;
  v7[0x16] = 0.0;
  v7[0x17] = v43;
  qmemcpy(v45, &stru_B26AF0[0xA].unk2C, sizeof(v45));
  qmemcpy(v7 + 0xC, sub_4D7C50((_DWORD *)a1, v46, v45, 0), 0x24u);
  v14 = (int)v9->vtbl->GetObjectByName(v9, off_B06568[0]);
  if ( v14 )
    *(_WORD *)(v14 + 0x18) |= 1u;
  v15 = (int *)FormHeapAlloc(0x154u);
  v47 = 1;
  if ( v15 )
    v16 = sub_478730(v15, a1, v9);
  else
    v16 = 0;
  v47 = 0xFFFFFFFF;
  *(_DWORD *)(a1 + 0x5C8) = v16;
  v17 = (ActorAnimData *)FormHeapAlloc(0xDCu);
  v47 = 2;
  if ( v17 )
    v18 = NewActorAnimData(v17);
  else
    v18 = 0;
  *(_DWORD *)(a1 + 0x5CC) = v18;
  v19 = *(_BYTE *)(a1 + 0x588);
  v47 = 0xFFFFFFFF;
  v40 = v19;
  *(_BYTE *)(a1 + 0x588) = 1;
  NiNode = MobileObject_GenerateNiNode((TESObjectREFR *)a1, st5_0, a3, v13);
  *(_BYTE *)(a1 + 0x588) = v40;
  v21 = NiNode;
  v22 = sub_435830(*(char **)dword_B36BB8, 0);
  Menu_PickIdles__(
    *(AnimSequenceSingle **)(a1 + 0x5CC),
    st5_0,
    a3,
    v13,
    (volatile LONG *)v22,
    (NiNode *)v9,
    (_DWORD *)a1);
  v23 = *(int **)(a1 + 0x58);
  v24 = *v23;
  v25 = (*(int (__thiscall **)(int *, int, _DWORD))(*v23 + 0xEC))(v23, 1, 0);
  (*(void (__thiscall **)(int *, int))(v24 + 0x104))(v23, v25);
  v26 = *(_DWORD *)(a1 + 0x58);
  AnimData = TESObjectREFR_GetAnimData((Actor *)a1);
  (*(void (__thiscall **)(int, BSExtraDataVtbl *))(*(_DWORD *)v26 + 0x114))(v26, AnimData);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x58) + 0x114))(
    *(_DWORD *)(a1 + 0x58),
    *(_DWORD *)(a1 + 0x5CC));
  NiObjectNET_SetName((NiObjectNET *)v21, "Player");
  v28 = *(int (__thiscall **)(volatile LONG *, const char *))(*v21 + 0x58);
  *((_WORD *)v21 + 0xC) |= 1u;
  v29 = v28(v21, "Camera01");
  P3Camera = v29;
  if ( !v29 )
  {
    v30 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
    FormModelPAth = GetFormModelPAth(v30);
    sub_404EC0("Missing 'Camera01' on '%s'.", FormModelPAth);
  }
  sub_578CF0(a1, st5_0, a3, v13, a5, 1);
  sub_5E4DD0((Actor *)a1);
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x284))(a1, 0x45) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0x31C))(*(_DWORD *)(a1 + 0x58), 1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 0x5C))(*(_DWORD *)(a1 + 0x58));
    g_bUpdatePlayerModel = 1;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0x318))(*(_DWORD *)(a1 + 0x58), a1);
    g_bUpdatePlayerModel = 0;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x58) + 0x31C))(*(_DWORD *)(a1 + 0x58), 0);
  sub_5EA1A0(a1, a1, v41);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x148))(a1);
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
  v33 = CharProxy;
  if ( CharProxy )
  {
    v34 = *((_DWORD **)CharProxy + 2);
    if ( v34 )
      v35 = sub_8AC0C0(v34);
    else
      v35 = 0;
    v36 = *(_DWORD *)(v35 + 8);
    if ( v36 )
      v37 = *(_DWORD *)(v36 + 0x2B0);
    else
      v37 = 0;
    if ( v37 )
    {
      v38 = sub_57E270(v33, v44);
      (*(void (__thiscall **)(int, volatile LONG *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v37 + 0x90))(
        v37,
        v21,
        1,
        0,
        *((unsigned __int16 *)v38 + 1),
        0);
    }
  }
  return v21;
}
