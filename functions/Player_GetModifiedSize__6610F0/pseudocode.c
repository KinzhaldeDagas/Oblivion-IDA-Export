// Computes the versioned PlayerCharacter modified-form save size. Skill persistence includes fixed native arrays plus a variable-length list of eight-byte attribute-bonus buckets in save versions >=0x58.
unsigned __int16 __thiscall Player_GetModifiedSize(TESObjectREFR *this, int a2)
{
  int v3; // esi
  int v4; // esi
  unsigned __int16 v5; // di
  UInt32 *v6; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  unsigned __int16 v10; // di
  bool v11; // zf
  int v12; // eax
  unsigned __int8 next; // dl
  int v14; // eax
  unsigned __int8 v15; // al
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // esi
  int v19; // eax
  int v20; // edx
  float *v21; // ecx
  __int16 AEListSaveSize; // ax
  unsigned __int8 v23; // bl
  int v24; // edx
  bool v25; // cf
  _DWORD *v26; // eax
  int v27; // ecx
  TESObjectREFR *v28; // eax
  int v29; // edx
  int v30; // ecx
  TESObjectREFR *v31; // eax
  int v32; // esi
  TESForm *v33; // eax
  __int16 v34; // si
  unsigned __int16 v35; // si
  TESClass *v36; // esi
  TESClass *v37; // eax
  unsigned __int8 v38; // al
  UInt32 *v39; // edi
  TESForm *v40; // eax
  const char *v41; // eax
  int v43; // [esp-Ch] [ebp-1Ch]
  int v44; // [esp-Ch] [ebp-1Ch]
  int v45; // [esp-8h] [ebp-18h]
  int v46; // [esp-8h] [ebp-18h]
  const char *v47; // [esp-4h] [ebp-14h]
  const char *v48; // [esp-4h] [ebp-14h]
  int v49; // [esp+Ch] [ebp-4h]
  int v50; // [esp+Ch] [ebp-4h]
  int v51; // [esp+Ch] [ebp-4h]
  int v52; // [esp+Ch] [ebp-4h]
  unsigned __int16 v53; // [esp+Ch] [ebp-4h]
  unsigned __int16 v54; // [esp+14h] [ebp+4h]

  v3 = 0; /*0x6610fc*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6610fe*/
    v3 = 6; /*0x661107*/
  v4 = v3 + 0x240; /*0x661111*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x31u ) /*0x66111b*/
    v4 += 0x120; /*0x66111d*/
  v49 = v4 + 0xC; /*0x66112d*/
  v5 = v4 + 0xC; /*0x661131*/
  if ( Global_DebugSaveBuffer )
  {
    v6 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x661136*/
    if ( v6 )
    {
      v7 = TESForm_LookupByFormID(*v6); /*0x661143*/
      v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v7->vtbl->GetEditorName)( /*0x661163*/
                           v7,
                           *(UInt32 *)((char *)v6 + 5),
                           0x222E,
                           ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v5,
        *v6,
        v8,
        v43,
        v45,
        v47);
    }
    else
    {
      sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v5, 0x222E, ".\\AI\\PlayerCharacter.cpp");
    }
  }
  v10 = sub_60E360(a2) + v5; /*0x6611a3*/
  v54 = v10; /*0x6611a9*/
  LOWORD(v49) = v10; /*0x6611b3*/
  v11 = !TESSaveLoadGame_UseSaveGameBlocks(); /*0x6611bd*/
  v12 = v49; /*0x6611bf*/
  if ( !v11 ) /*0x6611c3*/
  {
    v12 = v49 + 6; /*0x6611c5*/
    HIWORD(v49) = (unsigned int)(v49 + 6) >> 0x10; /*0x6611c8*/
    v10 = v12; /*0x6611cc*/
  }
  if ( (a2 & 0x2000000) != 0 ) /*0x6611d5*/
  {
    LOWORD(v49) = Actor_GetAnimationSaveStateSize((int)this, *((_DWORD **)this + 0x173)) + v10; /*0x6611ea*/
    v12 = v49; /*0x6611ef*/
  }
  next = (unsigned __int8)g_TESSaveLoadGame[1].createdObjectList.next; /*0x6611f9*/
  v14 = v12 + 0x66; /*0x6611fc*/
  v50 = v14; /*0x661202*/
  if ( next >= 0x28u && next < 0x2Du ) /*0x66120b*/
  {
    v14 += 0x18; /*0x66120d*/
    v50 = v14; /*0x661210*/
  }
  if ( next >= 0x39u ) /*0x661217*/
  {
    v14 += 0x88; /*0x661219*/
    v50 = v14; /*0x66121e*/
  }
  if ( next >= 0x3Fu ) /*0x661225*/
    v50 = ++v14; /*0x66122a*/
  if ( next >= 0x40u ) /*0x661231*/
  {
    v14 += 0xC; /*0x661233*/
    v50 = v14; /*0x661236*/
  }
  if ( next >= 0x49u ) /*0x66123d*/
  {
    v14 += 5; /*0x66123f*/
    v50 = v14; /*0x661242*/
  }
  if ( next >= 0x63u ) /*0x661249*/
  {
    v15 = 0; /*0x66124b*/
    if ( *((_DWORD *)this + 0x16C) ) /*0x66124d*/
      v15 = 0x15; /*0x661256*/
    LOWORD(v50) = 4 * v15 + 1 + v50; /*0x661266*/
    v14 = v50; /*0x66126b*/
  }
  if ( next >= 0x71u ) /*0x661272*/
    v14 += 0xA; /*0x661274*/
  if ( next >= 0x78u ) /*0x66127a*/
    v14 += 5; /*0x66127c*/
  if ( next >= 0x7Au ) /*0x661282*/
    v14 += 4; /*0x661284*/
  v16 = v14 + 0x2C; /*0x661287*/
  v51 = v16; /*0x66128d*/
  if ( next >= 0x28u && next < 0x2Du ) /*0x661296*/
  {
    v16 += 4; /*0x661298*/
    v51 = v16; /*0x66129b*/
  }
  if ( next >= 0x40u ) /*0x6612a2*/
  {
    v16 += 4; /*0x6612a4*/
    v51 = v16; /*0x6612a7*/
  }
  if ( next >= 0x42u ) /*0x6612ae*/
  {
    v16 += 4; /*0x6612b0*/
    v51 = v16; /*0x6612b3*/
  }
  if ( next >= 0x57u ) /*0x6612ba*/
  {
    v16 += 4; /*0x6612bc*/
    v51 = v16; /*0x6612bf*/
  }
  if ( next >= 0x60u ) /*0x6612c6*/
  {
    v16 += 4; /*0x6612c8*/
    v51 = v16; /*0x6612cb*/
  }
  if ( next >= 0x63u ) /*0x6612d2*/
  {
    v17 = *((_DWORD **)this + 0x16B); /*0x6612d4*/
    v16 += 2; /*0x6612da*/
    v51 = v16; /*0x6612df*/
    if ( v17 ) /*0x6612e3*/
    {
      v18 = 0; /*0x6612e5*/
      do /*0x6612f4*/
      {
        if ( *v17 ) /*0x6612e7*/
          ++v18; /*0x6612ec*/
        v17 = (_DWORD *)v17[1]; /*0x6612ef*/
      }
      while ( v17 ); /*0x6612f4*/
      v16 += 4 * v18; /*0x6612f6*/
      v51 = v16; /*0x6612f9*/
    }
  }
  if ( next >= 0x6Cu ) /*0x661300*/
  {
    v16 += 4; /*0x661302*/
    v51 = v16; /*0x661305*/
  }
  if ( next >= 0x6Fu ) /*0x66130c*/
  {
    LOWORD(v51) = 5 * *((_WORD *)this + 0x3CA) + 2 + v51; /*0x66131d*/
    v16 = v51; /*0x661322*/
  }
  if ( next >= 0x73u ) /*0x661329*/
  {
    v19 = v16 + 2; /*0x66132b*/
    v20 = 0; /*0x66132e*/
    v21 = &qword_B3BB2C[6]; /*0x661330*/
    do /*0x661342*/
    {
      if ( *(_DWORD *)v21 ) /*0x661335*/
        ++v20; /*0x66133a*/
      v21 = *((float **)v21 + 1); /*0x66133d*/
    }
    while ( v21 ); /*0x661342*/
    v51 = v19 + 4 * v20; /*0x661347*/
  }
  AEListSaveSize = ActiveEffect_Base_GetAEListSaveSize_(*((_DWORD **)this + 0x79), (int)this); /*0x661354*/
  v23 = (unsigned __int8)g_TESSaveLoadGame[1].createdObjectList.next; /*0x66135f*/
  LOWORD(v51) = AEListSaveSize + 0x54 + v51; /*0x661366*/
  v24 = v51; /*0x66136b*/
  v25 = v23 < 0x58u; /*0x661372*/
  if ( v23 >= 0x58u )                           // For save versions >=0x58, reserve four bytes for the attribute-bucket count and eight bytes for every non-null queued bucket. Older versions reserve one eight-byte bucket. /*0x661375*/
  {
    v26 = *((_DWORD **)this + 0x16D); /*0x661377*/
    v24 = v51 + 4; /*0x66137d*/
    if ( v26 ) /*0x661382*/
    {
      v27 = 0; /*0x661384*/
      do /*0x661393*/
      {
        if ( *v26 ) /*0x661386*/
          ++v27; /*0x66138b*/
        v26 = (_DWORD *)v26[1]; /*0x66138e*/
      }
      while ( v26 ); /*0x661393*/
      v24 += 8 * v27; /*0x661395*/
    }
    v25 = v23 < 0x58u; /*0x661398*/
  }
  if ( v25 ) /*0x66139c*/
    v24 += 8; /*0x66139e*/
  v28 = (TESObjectREFR *)((char *)this + 0x5E4); /*0x6613a1*/
  v29 = v24 + 0x62; /*0x6613a7*/
  v30 = 0; /*0x6613aa*/
  if ( this != (TESObjectREFR *)0xFFFFFA1C ) /*0x6613ae*/
  {
    do /*0x6613bd*/
    {
      if ( v28->vtbl ) /*0x6613b0*/
        ++v30; /*0x6613b5*/
      v28 = *(TESObjectREFR **)&v28->member.super.type; /*0x6613b8*/
    }
    while ( v28 ); /*0x6613bd*/
  }
  v31 = (TESObjectREFR *)((char *)this + 0x5EC); /*0x6613bf*/
  v32 = 0; /*0x6613c5*/
  if ( this != (TESObjectREFR *)0xFFFFFA14 ) /*0x6613cd*/
  {
    do /*0x6613dd*/
    {
      if ( v31->vtbl ) /*0x6613d0*/
        ++v32; /*0x6613d5*/
      v31 = *(TESObjectREFR **)&v31->member.super.type; /*0x6613d8*/
    }
    while ( v31 ); /*0x6613dd*/
  }
  v52 = v29 + 4 * v30 + 2 + sub_416A80() + 6 * v32; /*0x6613ef*/
  v33 = this->vtbl->GetBaseForm(this); /*0x6613fb*/
  v34 = sub_523440(v33, (int)this) + v52; /*0x66140c*/
  v35 = (unsigned __int8)(strlen(TESObjectREFR_GetName(this)) + 1) + 1 + v34; /*0x661432*/
  v53 = v35; /*0x661439*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x2Cu )// Reserve a class FormID and, only when the player's base class is the distinguished custom-class form, reserve the full TESClass save payload containing the fixed seven major skills. /*0x66143e*/
  {
    v36 = (TESClass *)Actor_GetActorBaseForm((Actor *)this, 0)[0xA].member.modlist.next; /*0x661449*/
    v37 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(g_GameSettingStringPointers_B36CD8[0x3EC])); /*0x66145b*/
    v53 += 4; /*0x661460*/
    if ( v36 && v36 == v37 ) /*0x66146b*/
    {
      v35 = TESClass_GetSaveGameSize(v36) + v53; /*0x661479*/
      v53 = v35; /*0x66147c*/
    }
    else
    {
      v35 = v53; /*0x661483*/
    }
  }
  v38 = (unsigned __int8)g_TESSaveLoadGame[1].createdObjectList.next; /*0x66148e*/
  if ( v38 >= 0x45u ) /*0x661493*/
  {
    v53 += 4; /*0x661495*/
    v35 = v53; /*0x66149a*/
  }
  if ( v38 >= 0x7Eu ) /*0x6614a1*/
    v35 = v53 + 5; /*0x6614a8*/
  if ( Global_DebugSaveBuffer )
  {
    v39 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x6614b6*/
    if ( v39 )
    {
      v40 = TESForm_LookupByFormID(*v39); /*0x6614c3*/
      v41 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v40->vtbl->GetEditorName)( /*0x6614e3*/
                            v40,
                            *(UInt32 *)((char *)v39 + 5),
                            0x2338,
                            ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v35 - v54,
        *v39,
        v41,
        v44,
        v46,
        v48);
      return v35; /*0x661508*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v35 - v54, 0x2338, ".\\AI\\PlayerCharacter.cpp");
  }
  return v35; /*0x661501*/
}
