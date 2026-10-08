void __userpurge sub_69C710(TESObjectREFR *a1@<ecx>, double a2@<st0>, TESForm Src)
{
  TESObjectCELL *parentCell; // eax
  TESSaveLoadGame_SerializationView *v6; // edx
  unsigned __int8 *bufferCursor; // ebp
  int *i; // edi
  TESForm::ModReferenceList *next; // eax
  int source; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v11; // [esp+10h] [ebp-4h] BYREF

  sub_69F770(a1, a2, (int)Src.vtbl); /*0x69c71d*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &a1[1].member.rot.y, 4u); /*0x69c72a*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &a1[1].member, 4u); /*0x69c737*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &a1[1].member.rot.z, 4u); /*0x69c747*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &a1[1].member.pos[1], 4u); /*0x69c75b*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &a1[1].member.pos[2], 4u); /*0x69c76b*/
  if ( LODWORD(a1[1].member.pos[1]) == 1 ) /*0x69c775*/
  {
    parentCell = a1[1].member.parentCell; /*0x69c779*/
    *(float *)&Src.vtbl = 0.0; /*0x69c781*/
    if ( parentCell ) /*0x69c785*/
      Src.vtbl = (TESFormVtbl *)parentCell->members.super.modlist.data; /*0x69c78a*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &Src, 4u); /*0x69c797*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x69c7a5*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, a1[1].member.pos, 4u); /*0x69c7b7*/
    v6 = g_TESSaveLoadGame; /*0x69c7bc*/
    source = 0; /*0x69c7c8*/
    bufferCursor = v6->bufferCursor; /*0x69c7cc*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &source, 2u); /*0x69c7d2*/
    for ( i = (int *)a1[1].member.niNode; i; i = (int *)i[2] ) /*0x69c7df*/
    {
      v11 = 0; /*0x69c7e1*/
      if ( *i ) /*0x69c7e5*/
        v11 = *(_DWORD *)(*i + 0xC); /*0x69c7ee*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)a1, &v11, 4u); /*0x69c7fb*/
      next = a1[1].member.super.modlist.next; /*0x69c800*/
      LOBYTE(Src.vtbl) = 0; /*0x69c805*/
      if ( next ) /*0x69c809*/
      {
        if ( i[1] ) /*0x69c80b*/
          LOBYTE(Src.vtbl) = EffectItemList_GetIndexOfItem(&next[1].next, i[1]); /*0x69c81b*/
      }
      TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &Src, 1u); /*0x69c828*/
      ++source; /*0x69c82d*/
    }
    *(_WORD *)bufferCursor = source; /*0x69c83e*/
  }
}
