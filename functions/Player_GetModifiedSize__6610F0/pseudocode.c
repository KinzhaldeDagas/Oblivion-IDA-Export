unsigned __int16 __thiscall Player_GetModifiedSize(TESObjectREFR *this, int a2)
{
  int v4; // esi
  int v5; // esi
  unsigned __int16 v6; // di
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  unsigned __int16 v11; // di
  bool v12; // zf
  int v13; // eax
  unsigned __int8 next; // dl
  int v15; // eax
  unsigned __int8 v16; // al
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // edx
  int *v22; // ecx
  __int16 AEListSaveSize; // ax
  unsigned __int8 v24; // bl
  int v25; // edx
  bool v26; // cf
  _DWORD *v27; // eax
  int v28; // ecx
  TESObjectREFR *v29; // eax
  int v30; // edx
  int v31; // ecx
  TESObjectREFR *v32; // eax
  int v33; // esi
  TESForm *v34; // eax
  __int16 v35; // si
  unsigned __int16 v36; // si
  const char **v37; // esi
  const char **v38; // eax
  unsigned __int8 v39; // al
  UInt32 *v40; // edi
  TESForm *v41; // eax
  const char *v42; // eax
  int v44; // [esp-Ch] [ebp-1Ch]
  int v45; // [esp-Ch] [ebp-1Ch]
  int v46; // [esp-8h] [ebp-18h]
  int v47; // [esp-8h] [ebp-18h]
  const char *v48; // [esp-4h] [ebp-14h]
  const char *v49; // [esp-4h] [ebp-14h]
  int v50; // [esp+Ch] [ebp-4h]
  int v51; // [esp+Ch] [ebp-4h]
  int v52; // [esp+Ch] [ebp-4h]
  int v53; // [esp+Ch] [ebp-4h]
  unsigned __int16 v54; // [esp+Ch] [ebp-4h]
  unsigned __int16 v55; // [esp+14h] [ebp+4h]

  v4 = 0;
  if ( sub_45A170() )
    v4 = 6;
  v5 = v4 + 0x240;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x31u )
    v5 += 0x120;
  v50 = v5 + 0xC;
  v6 = v5 + 0xC;
  if ( Global_DebugSaveBuffer )
  {
    v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v7 )
    {
      v8 = TESForm_LookupByFormID(*v7);
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)(
                           v8,
                           *(UInt32 *)((char *)v7 + 5),
                           0x222E,
                           ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *v7,
        v9,
        v44,
        v46,
        v48);
    }
    else
    {
      sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x222E, ".\\AI\\PlayerCharacter.cpp");
    }
  }
  v11 = sub_60E360(a2) + v6;
  v55 = v11;
  LOWORD(v50) = v11;
  v12 = !sub_45A170();
  v13 = v50;
  if ( !v12 )
  {
    v13 = v50 + 6;
    HIWORD(v50) = (unsigned int)(v50 + 6) >> 0x10;
    v11 = v13;
  }
  if ( (a2 & 0x2000000) != 0 )
  {
    LOWORD(v50) = sub_473BF0((int)this, *((_DWORD **)this + 0x173)) + v11;
    v13 = v50;
  }
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v15 = v13 + 0x66;
  v51 = v15;
  if ( next >= 0x28u && next < 0x2Du )
  {
    v15 += 0x18;
    v51 = v15;
  }
  if ( next >= 0x39u )
  {
    v15 += 0x88;
    v51 = v15;
  }
  if ( next >= 0x3Fu )
    v51 = ++v15;
  if ( next >= 0x40u )
  {
    v15 += 0xC;
    v51 = v15;
  }
  if ( next >= 0x49u )
  {
    v15 += 5;
    v51 = v15;
  }
  if ( next >= 0x63u )
  {
    v16 = 0;
    if ( *((_DWORD *)this + 0x16C) )
      v16 = 0x15;
    LOWORD(v51) = 4 * v16 + 1 + v51;
    v15 = v51;
  }
  if ( next >= 0x71u )
    v15 += 0xA;
  if ( next >= 0x78u )
    v15 += 5;
  if ( next >= 0x7Au )
    v15 += 4;
  v17 = v15 + 0x2C;
  v52 = v17;
  if ( next >= 0x28u && next < 0x2Du )
  {
    v17 += 4;
    v52 = v17;
  }
  if ( next >= 0x40u )
  {
    v17 += 4;
    v52 = v17;
  }
  if ( next >= 0x42u )
  {
    v17 += 4;
    v52 = v17;
  }
  if ( next >= 0x57u )
  {
    v17 += 4;
    v52 = v17;
  }
  if ( next >= 0x60u )
  {
    v17 += 4;
    v52 = v17;
  }
  if ( next >= 0x63u )
  {
    v18 = *((_DWORD **)this + 0x16B);
    v17 += 2;
    v52 = v17;
    if ( v18 )
    {
      v19 = 0;
      do
      {
        if ( *v18 )
          ++v19;
        v18 = (_DWORD *)v18[1];
      }
      while ( v18 );
      v17 += 4 * v19;
      v52 = v17;
    }
  }
  if ( next >= 0x6Cu )
  {
    v17 += 4;
    v52 = v17;
  }
  if ( next >= 0x6Fu )
  {
    LOWORD(v52) = 5 * *((_WORD *)this + 0x3CA) + 2 + v52;
    v17 = v52;
  }
  if ( next >= 0x73u )
  {
    v20 = v17 + 2;
    v21 = 0;
    v22 = &dword_B3BB44;
    do
    {
      if ( *v22 )
        ++v21;
      v22 = (int *)v22[1];
    }
    while ( v22 );
    v52 = v20 + 4 * v21;
  }
  AEListSaveSize = ActiveEffect_Base_GetAEListSaveSize_(*((_DWORD **)this + 0x79), (int)this);
  v24 = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  LOWORD(v52) = AEListSaveSize + 0x54 + v52;
  v25 = v52;
  v26 = v24 < 0x58u;
  if ( v24 >= 0x58u )
  {
    v27 = *((_DWORD **)this + 0x16D);
    v25 = v52 + 4;
    if ( v27 )
    {
      v28 = 0;
      do
      {
        if ( *v27 )
          ++v28;
        v27 = (_DWORD *)v27[1];
      }
      while ( v27 );
      v25 += 8 * v28;
    }
    v26 = v24 < 0x58u;
  }
  if ( v26 )
    v25 += 8;
  v29 = (TESObjectREFR *)((char *)this + 0x5E4);
  v30 = v25 + 0x62;
  v31 = 0;
  if ( this != (TESObjectREFR *)0xFFFFFA1C )
  {
    do
    {
      if ( v29->vtbl )
        ++v31;
      v29 = *(TESObjectREFR **)&v29->member.super.type;
    }
    while ( v29 );
  }
  v32 = (TESObjectREFR *)((char *)this + 0x5EC);
  v33 = 0;
  if ( this != (TESObjectREFR *)0xFFFFFA14 )
  {
    do
    {
      if ( v32->vtbl )
        ++v33;
      v32 = *(TESObjectREFR **)&v32->member.super.type;
    }
    while ( v32 );
  }
  v53 = v30 + 4 * v31 + 2 + sub_416A80() + 6 * v33;
  v34 = this->vtbl->GetBaseForm(this);
  v35 = sub_523440(v34, (int)this) + v53;
  v36 = (unsigned __int8)(strlen(TESObjectREFR_GetName(this)) + 1) + 1 + v35;
  v54 = v36;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x2Cu )
  {
    v37 = (const char **)Actor_GetActorBaseForm((Actor *)this, 0)[0xA].member.modlist.next;
    v38 = (const char **)TESDataHandler_LookupTESClassByFormID((void *)iPlayerCustomClass);
    v54 += 4;
    if ( v37 && v37 == v38 )
    {
      v36 = sub_51C360(v37) + v54;
      v54 = v36;
    }
    else
    {
      v36 = v54;
    }
  }
  v39 = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( v39 >= 0x45u )
  {
    v54 += 4;
    v36 = v54;
  }
  if ( v39 >= 0x7Eu )
    v36 = v54 + 5;
  if ( Global_DebugSaveBuffer )
  {
    v40 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v40 )
    {
      v41 = TESForm_LookupByFormID(*v40);
      v42 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v41->vtbl->GetEditorName)(
                            v41,
                            *(UInt32 *)((char *)v40 + 5),
                            0x2338,
                            ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v36 - v55,
        *v40,
        v42,
        v45,
        v47,
        v49);
      return v36;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v36 - v55, 0x2338, ".\\AI\\PlayerCharacter.cpp");
  }
  return v36;
}
