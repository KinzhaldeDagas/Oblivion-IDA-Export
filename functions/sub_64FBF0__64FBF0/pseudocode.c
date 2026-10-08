void __userpurge sub_64FBF0(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  float *v11; // eax
  ActorVtbl *v12; // ebp
  char v13; // al
  int v14; // ecx
  BSExtraDataVtbl *Owner; // eax
  void *v16; // eax
  ExtraTeleport *TeleportExtraData; // eax
  int v18; // ebx
  _BYTE *v19; // ecx
  int v20; // eax
  _DWORD *v21; // ebp
  UInt32 DwordAtOffset40; // eax
  TESForm *v23; // ebx
  double v24; // st7
  double v25; // st7
  double v26; // st7
  int v27; // ebx
  int v28; // eax
  double v29; // st7
  int v30; // eax
  UInt32 v31; // [esp+14h] [ebp-30h]
  TESWorldSpace *v32; // [esp+18h] [ebp-2Ch]
  float *v33; // [esp+20h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-24h]
  float v35; // [esp+20h] [ebp-24h]
  TESPackage *v36; // [esp+34h] [ebp-10h]
  double v37; // [esp+38h] [ebp-Ch] BYREF
  float GameHour; // [esp+48h] [ebp+4h]
  float v39; // [esp+48h] [ebp+4h]
  float v40; // [esp+48h] [ebp+4h]

  v36 = (TESPackage *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x64fc0c*/
                        a1,
                        a4,
                        a3,
                        a2);
  if ( !a1[0xB] ) /*0x64fc09*/
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x558))(a1, a5); /*0x64fc1d*/
  v7 = a1[0xB]; /*0x64fc1f*/
  if ( !v7 || (v8 = *(_DWORD *)(v7 + 8), (v8 & 0x20) != 0) || (v8 & 0x800) != 0 ) /*0x64fc40*/
  {
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a5, 1); /*0x64ff20*/
    return; /*0x64ff20*/
  }
  v9 = (_DWORD *)a1[0x11]; /*0x64fc46*/
  if ( !v9 ) /*0x64fc4b*/
    return; /*0x64fc4b*/
  v10 = (_DWORD *)a1[0x11]; /*0x64fc55*/
  if ( v10[1] == (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 0x170))(*v9) ) /*0x64fc62*/
  {
    a1[0xB] = *v10; /*0x64fc67*/
    return; /*0x64fc71*/
  }
  if ( TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB]) ) /*0x64fc77*/
  {
    v33 = a5->vtbl->GetPos(a5); /*0x64fc90*/
    TESObjectREFR_GetLinkedTeleportMarkerPosition((_BYTE *)a1[0xB]); /*0x64fc99*/
    sub_4121A0(v11, (float *)&v37, v33); /*0x64fca0*/
    a4 = NiPoint3_Length((float *)&v37); /*0x64fca9*/
    if ( a4 <= flt_A2FFE8 ) /*0x64fcb9*/
    {
LABEL_11:
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64fcbf*/
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x194))(a1, a5); /*0x64fcd2*/
      if ( !sub_64ADA0((Actor *)a1) ) /*0x64fcd6*/
      {
        v12 = 0; /*0x64fcf0*/
        v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)a1[0x11] + 0x190))(*(_DWORD *)a1[0x11]); /*0x64fcf2*/
        v14 = a1[0x11]; /*0x64fcf6*/
        if ( v13 ) /*0x64fcfa*/
        {
          v12 = (ActorVtbl *)a1[0xB]; /*0x64fe95*/
          (*((void (__thiscall **)(ActorVtbl *, _DWORD, _DWORD, int, _DWORD, _DWORD, TESObjectREFR *, _DWORD, _DWORD, int, _DWORD))v12->super.super.super.super.InitializeComponent /*0x64feb1*/
           + 0x40))(
            v12,
            *(_DWORD *)(v14 + 4),
            0,
            1,
            0,
            0,
            a5,
            0,
            0,
            1,
            0);
        }
        else
        {
          Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)v14); /*0x64fd0d*/
          v16 = OblivionDynamicCast( /*0x64fd13*/
                  Owner,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
          if ( v16 ) /*0x64fd1d*/
            v12 = sub_675220((int)&qword_B3BB2C[0x75], (int)v16); /*0x64fd2a*/
          ActivateRef(*(TESObjectREFR **)a1[0x11], a2, a3, a4, a5, 0, *(_DWORD *)(a1[0x11] + 4), 1); /*0x64fd39*/
        }
        if ( v12 ) /*0x64feb5*/
        {
          v29 = TESForm_GetValue((void *)*(_DWORD *)(a1[0x11] + 4)); /*0x64febe*/
          sub_5E4A40((Actor *)a5, a2, a3, v29, (TESForm *)a5, v30 * *(_DWORD *)(a1[0x11] + 0x10)); /*0x64fed3*/
        }
        Script_AddEventToExtraScript(v12, *(_DWORD *)(a1[0x11] + 0x18), 0x4000); /*0x64fee5*/
      }
      if ( a1[0x11] ) /*0x64feed*/
        FormHeapFree(a1[0x11]); /*0x64fef5*/
      a1[0xB] = 0; /*0x64fefd*/
      a1[0x11] = 0; /*0x64ff00*/
      *((_BYTE *)a1 + 0xD0) = 0; /*0x64ff03*/
      return; /*0x64ff10*/
    }
  }
  else if ( sub_5687D0((TESPackage *)a1[2], 0, a4, a5) ) /*0x64fd47*/
  {
    goto LABEL_11; /*0x64fd4e*/
  }
  if ( sub_64ADA0((Actor *)a1) ) /*0x64fd56*/
    goto LABEL_11; /*0x64fd5d*/
  if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64fd63*/
    goto LABEL_39; /*0x64fd63*/
  TeleportExtraData = TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB]); /*0x64fd6e*/
  v18 = *a1; /*0x64fd75*/
  v19 = (_BYTE *)a1[0xB]; /*0x64fd77*/
  if ( TeleportExtraData ) /*0x64fd7a*/
    TESObjectREFR_GetLinkedTeleportMarkerPosition(v19); /*0x64fd88*/
  else
    v20 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v19 + 0x174))(v19); /*0x64fd84*/
  v21 = (_DWORD *)v20; /*0x64fd90*/
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x64fd9a*/
  DwordAtOffset40 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x64fd9b*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v18 + 0x3DC))( /*0x64fdc0*/
         a1,
         a5,
         *v21,
         v21[1],
         v21[2],
         DwordAtOffset40,
         WorldSpace) )
  {
LABEL_39:
    if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64fdca*/
    {
      v23 = TESForm_LookupByFormID(0x3Au); /*0x64fde6*/
      GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x64fded*/
      v37 = GameHour; /*0x64fdf7*/
      v24 = sub_6599B0((TESChildCELL *)a5); /*0x64fdfb*/
      if ( v24 > v37 ) /*0x64fe09*/
        GameHour = GameHour + dbl_A2F920; /*0x64fe15*/
      v37 = GameHour; /*0x64fe1f*/
      v25 = sub_6599B0((TESChildCELL *)a5); /*0x64fe23*/
      *(float *)&v37 = v37 - v25; /*0x64fe33*/
      v26 = *(float *)&v23[1].member.refID; /*0x64fe37*/
      v27 = *a1; /*0x64fe3a*/
      v39 = v26; /*0x64fe3c*/
      v35 = sub_5677B0(v36, v26, a5, 2); /*0x64fe48*/
      v40 = dbl_A2F938 / v39 * *(float *)&v37; /*0x64fe5d*/
      v32 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x64fe70*/
      v31 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x64fe79*/
      TESObjectREFR_GetLinkedTeleportMarkerPosition((_BYTE *)a1[0xB]); /*0x64fe7a*/
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int, UInt32, TESWorldSpace *, _DWORD, _DWORD))(v27 + 0x418))( /*0x64fe89*/
        a1,
        a5,
        v28,
        v31,
        v32,
        LODWORD(v40),
        LODWORD(v35));
    }
  }
}
