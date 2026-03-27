void __userpurge sub_69C710(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3@<ebp>, TESForm Src)
{
  TESObjectCELL *parentCell; // eax
  TESSaveLoad *v6; // edx
  _WORD *v7; // ebp
  int *i; // edi
  TESForm::ModReferenceList *next; // eax
  size_t v10; // [esp-8h] [ebp-1Ch]
  size_t v11; // [esp-8h] [ebp-1Ch]
  size_t v12; // [esp-8h] [ebp-1Ch]
  size_t v13; // [esp-4h] [ebp-18h]
  size_t v14; // [esp-4h] [ebp-18h]
  size_t v15; // [esp-4h] [ebp-18h]
  size_t v16; // [esp-4h] [ebp-18h]
  size_t v17; // [esp-4h] [ebp-18h]
  size_t v18; // [esp-4h] [ebp-18h]
  int v19; // [esp+Ch] [ebp-8h] BYREF
  int v20; // [esp+10h] [ebp-4h] BYREF

  sub_69F770(a1, a2, (int)Src.vtbl);
  LODWORD(v13) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.rot.y, v13);
  LODWORD(v14) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member, v14);
  LODWORD(v15) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.rot.z, v15);
  LODWORD(v16) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a1[1].member.pos[1], v16);
  LODWORD(v17) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.pos[2], v17);
  if ( LODWORD(a1[1].member.pos[1]) == 1 )
  {
    parentCell = a1[1].member.parentCell;
    *(float *)&Src.vtbl = 0.0;
    if ( parentCell )
      Src.vtbl = (TESFormVtbl *)parentCell->members.super.modlist.data;
    LODWORD(v18) = 4;
    TESForm_SaveDataToCurrentSaveGame(&Src, v18);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    HIDWORD(v10) = a3;
    LODWORD(v10) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)a1[1].member.pos, v10);
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v11) = 2;
    v19 = 0;
    v7 = (_WORD *)v6->unk000[5];
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&v19, v11);
    for ( i = (int *)a1[1].member.niNode; i; i = (int *)i[2] )
    {
      v20 = 0;
      if ( *i )
        v20 = *(_DWORD *)(*i + 0xC);
      TESForm_SaveFormIDToCurrentSaveGame((int)&v20, 4u);
      next = a1[1].member.super.modlist.next;
      LOBYTE(Src.vtbl) = 0;
      if ( next )
      {
        if ( i[1] )
          LOBYTE(Src.vtbl) = EffectItemList_GetIndexOfItem(&next[1].next, i[1]);
      }
      LODWORD(v12) = 1;
      TESForm_SaveDataToCurrentSaveGame(&Src, v12);
      ++v19;
    }
    *v7 = v19;
  }
}
