// DialogMenu click dispatcher. TOPIC tiles select a post-GREETING MenuTopic; INFOGENERAL clears its cached unread byte immediately; clicked Goodbye INFO is parked for close-time commit. Tile ID 4 is the response-skip/continue control: it stops current playback and immediately advances the already-prepositioned response cursor, so skipping the final response reaches INFO processing without waiting for audio or the post-line delay.
void __thiscall DialogMenu::DoClick(DialogMenu *this, int tileID, Tile *tile)
{
  const char **v3; // ebp
  double v4; // st5
  double v5; // st6
  double v6; // st7
  CHAR *v8; // eax
  MenuTopicManagerView *Singleton; // edi
  double Float; // st7
  int v11; // eax
  MenuTopicView *CurrentTopic; // eax
  Tile *OpenMenuTile; // edi
  float *v14; // eax
  TESTopic *Topic; // eax
  DialogueItemView *DialogueItem; // eax
  Tile *v17; // edi
  float *v18; // eax
  double v19; // st7
  Tile *v20; // eax
  TESTopic *v21; // ebp
  Tile *v22; // edi
  TESObjectREFR *v23; // edx
  float *v24; // eax
  double v25; // st7
  TESTopic *v26; // ebp
  Tile *v27; // edi
  TESObjectREFR *v28; // edx
  float *v29; // eax
  double v30; // st7
  TESTopic *v31; // ebp
  Tile *v32; // edi
  TESObjectREFR *v33; // edx
  float *v34; // eax
  double v35; // st7
  TESTopic *v36; // ebp
  Tile *v37; // edi
  TESObjectREFR *v38; // edx
  float *v39; // eax
  double v40; // st7
  DialogMenu *v41; // ecx

  if ( tileID >= 0x64 ) /*0x59f01d*/
  {
    v8 = sub_588C10(tile, 0xFDE); /*0x59f02e*/
    BSStringT_Set((BSStringT *)((char *)this + 0x8C), v8, 0); /*0x59f03d*/
    Tile_SetFloat(*((Tile **)this + 0xE), (_DWORD *)0xFA1, 1.0); /*0x59f050*/
    Singleton = MenuTopicManager::GetSingleton(); /*0x59f061*/
    Float = Tile_GetFloat(tile, 0xFAA); /*0x59f063*/
    v11 = Double_To_SInt32(Float); /*0x59f068*/
    if ( MenuTopicManager::GoToTopic(Singleton, v11) ) /*0x59f070*/
    {
      CurrentTopic = MenuTopicManager::GetCurrentTopic(Singleton); /*0x59f07f*/
      MenuTopic::FirstResponse(CurrentTopic); /*0x59f086*/
      if ( MenuTopicManager::GetCurrentTopic(Singleton)->isInfoGeneralTopic ) /*0x59f092*/
        MenuTopicManager::GetCurrentTopic(Singleton)->infoNotSpoken = 0; /*0x59f09e*/
      if ( (MenuTopicManager::GetCurrentTopic(Singleton)->info->flags & 1) != 0 )// Oblivion parks a clicked Goodbye INFO based on its flag bit 0x01. Fallout's DialogMenu::SetGoodbyeState (x4y6:0x8252E850) distinguishes forced INFO-Goodbye from natural stock D4 topic state; Oblivion's decoded DoClick/LoadNextTopicList/Close path instead uses closePending plus a parked INFO pointer. /*0x59f0af*/
      {
        *((_BYTE *)this + 0x88) = 1; /*0x59f0b3*/
        dword_B3B0B4[0x78] = (int)MenuTopicManager::GetCurrentTopic(Singleton)->info; /*0x59f0c2*/
      }
      DialogMenu::AdvanceTopicResponse((int)this, (const char **)tile, Float, v4, v5); /*0x59f0ca*/
    }
    return; /*0x59f0d3*/
  }
  switch ( tileID ) /*0x59f0d9*/
  {
    case 4: /*0x59f0d9*/
      Actor::StopDialoguePlayback(*((Actor **)this + 0x18)); /*0x59f0de*/
      DialogMenu::AdvanceTopicResponse((int)this, v3, v6, v4, v5); /*0x59f0e5*/
      return; /*0x59f0ee*/
    case 7: /*0x59f0d9*/
      OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59f100*/
      if ( !OpenMenuTile ) /*0x59f109*/
        return; /*0x59f109*/
      v14 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x59f119*/
      InterfaceManager::SetCurrentFocusTarget(v14, v4, v6, v5, 0.0, (_DWORD *)0xFDD, 0); /*0x59f123*/
      Tile_SetFloat(OpenMenuTile, (_DWORD *)0xFA1, 1.0); /*0x59f135*/
      sub_58FBA0((int)OpenMenuTile, v4, v5, 1.0, 0); /*0x59f13d*/
      sub_57DE50(1); /*0x59f144*/
      (*(void (__thiscall **)(DialogMenu *, int, Tile *))(*(_DWORD *)this + 0x14))(this, 7, tile); /*0x59f15a*/
      sub_5C01D0(*((_DWORD *)this + 0x18)); /*0x59f160*/
      FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59f16c*/
      goto LABEL_47; /*0x59f16c*/
    case 8: /*0x59f0d9*/
      dword_B131F8 = 0; /*0x59f17f*/
      Topic = TESTopic::GetTopic(5, 0); /*0x59f185*/
      if ( Topic ) /*0x59f18f*/
      {
        DialogueItem = TESTopic::CreateDialogueItem( /*0x59f1a4*/
                         Topic,
                         *((Actor **)this + 0x18),
                         (TESObjectREFR *)reference,
                         Topic,
                         0);
        dword_B131F8 = 0xFFFFFFFF; /*0x59f1ab*/
        if ( DialogueItem ) /*0x59f1b5*/
        {
LABEL_27:
          DialogMenu::PlayDialogueItem(this, DialogueItem); /*0x59f319*/
          FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59f328*/
          goto LABEL_47; /*0x59f330*/
        }
        v17 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59f1dd*/
        if ( !v17 ) /*0x59f1e4*/
          return; /*0x59f1e4*/
        v18 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x59f1f4*/
        InterfaceManager::SetCurrentFocusTarget(v18, v4, v6, v5, 0.0, (_DWORD *)0xFDD, 0); /*0x59f1fe*/
        Tile_SetFloat(v17, (_DWORD *)0xFA1, 1.0); /*0x59f210*/
        sub_58FBA0((int)v17, v4, v5, 1.0, 0); /*0x59f218*/
        LOBYTE(reference->unk124) = 1; /*0x59f225*/
        sub_57DE50(1); /*0x59f22c*/
        v19 = ((double (__thiscall *)(DialogMenu *, int, Tile *))*(_DWORD *)(*(_DWORD *)this + 0x14))(this, 8, tile); /*0x59f23e*/
      }
      else
      {
        v20 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59f245*/
        v17 = v20; /*0x59f24a*/
        if ( !v20 ) /*0x59f251*/
          return; /*0x59f251*/
        Tile_SetFloat(v20, (_DWORD *)0xFA1, 1.0); /*0x59f264*/
        sub_58FBA0((int)v17, v4, v5, 1.0, 0); /*0x59f26c*/
        LOBYTE(reference->unk124) = 1; /*0x59f279*/
        sub_57DE50(1); /*0x59f280*/
        v19 = ((double (__thiscall *)(DialogMenu *, int, Tile *))*(_DWORD *)(*(_DWORD *)this + 0x14))(this, 8, tile); /*0x59f296*/
      }
      sub_57A8D0((char)v17, v4, v5, v19, *((TESObjectREFR **)this + 0x18), 1, 1, 0); /*0x59f2a1*/
      goto LABEL_22; /*0x59f2a1*/
    case 9: /*0x59f0d9*/
      v21 = TESTopic::GetTopic(5, 0); /*0x59f2d5*/
      v22 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59f2dc*/
      if ( !v22 ) /*0x59f2e3*/
        return; /*0x59f2e3*/
      if ( !v21 /*0x59f317*/
        || (v23 = (TESObjectREFR *)reference,
            dword_B131F8 = 2,
            DialogueItem = TESTopic::CreateDialogueItem(v21, *((Actor **)this + 0x18), v23, v21, 0),
            dword_B131F8 = 0xFFFFFFFF,
            !DialogueItem) )
      {
        v24 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x59f33f*/
        InterfaceManager::SetCurrentFocusTarget(v24, v4, v6, v5, 0.0, (_DWORD *)0xFDD, 0); /*0x59f349*/
        Tile_SetFloat(v22, (_DWORD *)0xFA1, 1.0); /*0x59f35b*/
        sub_58FBA0((int)v22, v4, v5, 1.0, 0); /*0x59f363*/
        sub_57DE50(1); /*0x59f36a*/
        v25 = ((double (__thiscall *)(DialogMenu *, int, Tile *))*(_DWORD *)(*(_DWORD *)this + 0x14))(this, 9, tile); /*0x59f380*/
        sub_57A940((int)v21, v5, v25, *((Actor **)this + 0x18)); /*0x59f386*/
        FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59f395*/
        goto LABEL_47; /*0x59f39d*/
      }
      goto LABEL_27; /*0x59f317*/
    case 0xC: /*0x59f0d9*/
      v26 = TESTopic::GetTopic(5, 0); /*0x59f3ba*/
      v27 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59f3c1*/
      if ( !v27 ) /*0x59f3c8*/
        return; /*0x59f3c8*/
      if ( v26 ) /*0x59f3d1*/
      {
        v28 = (TESObjectREFR *)reference; /*0x59f3d3*/
        dword_B131F8 = 1; /*0x59f3da*/
        DialogueItem = TESTopic::CreateDialogueItem(v26, *((Actor **)this + 0x18), v28, v26, 0); /*0x59f3eb*/
        dword_B131F8 = 0xFFFFFFFF; /*0x59f3f2*/
        if ( DialogueItem ) /*0x59f3fc*/
          goto LABEL_27; /*0x59f3fc*/
      }
      v29 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x59f40c*/
      InterfaceManager::SetCurrentFocusTarget(v29, v4, v6, v5, 0.0, (_DWORD *)0xFDD, 0); /*0x59f416*/
      Tile_SetFloat(v27, (_DWORD *)0xFA1, 1.0); /*0x59f428*/
      sub_58FBA0((int)v27, v4, v5, 1.0, 0); /*0x59f430*/
      sub_57DE50(1); /*0x59f437*/
      v30 = ((double (__thiscall *)(DialogMenu *, int, Tile *))*(_DWORD *)(*(_DWORD *)this + 0x14))(this, 0xC, tile); /*0x59f44d*/
      RepairMenu_Create(v30, v4, 2, 0, 0, *((_DWORD *)this + 0x18)); /*0x59f457*/
LABEL_22:
      FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59f2a6*/
LABEL_47:
      *((_WORD *)this + 0x48) = 0; /*0x59f622*/
      *((_WORD *)this + 0x49) = 0; /*0x59f629*/
      *((_DWORD *)this + 0x23) = 0; /*0x59f630*/
      return; /*0x59f630*/
    case 0xD: /*0x59f0d9*/
      v31 = TESTopic::GetTopic(5, 0); /*0x59f479*/
      v32 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59f480*/
      if ( !v32 ) /*0x59f487*/
        return; /*0x59f487*/
      if ( !v31 /*0x59f4bb*/
        || (v33 = (TESObjectREFR *)reference,
            dword_B131F8 = 3,
            DialogueItem = TESTopic::CreateDialogueItem(v31, *((Actor **)this + 0x18), v33, v31, 0),
            dword_B131F8 = 0xFFFFFFFF,
            !DialogueItem) )
      {
        v34 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x59f4cb*/
        InterfaceManager::SetCurrentFocusTarget(v34, v4, v6, v5, 0.0, (_DWORD *)0xFDD, 0); /*0x59f4d5*/
        Tile_SetFloat(v32, (_DWORD *)0xFA1, 1.0); /*0x59f4e7*/
        sub_58FBA0((int)v32, v4, v5, 1.0, 0); /*0x59f4ef*/
        sub_57DE50(1); /*0x59f4f6*/
        v35 = ((double (__thiscall *)(DialogMenu *, int, Tile *))*(_DWORD *)(*(_DWORD *)this + 0x14))(this, 0xD, tile); /*0x59f50c*/
        sub_5CFCE0(v4, v5, v35, *((_DWORD *)this + 0x18)); /*0x59f512*/
        FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59f521*/
        goto LABEL_47; /*0x59f529*/
      }
      goto LABEL_27; /*0x59f4bb*/
    case 0x10: /*0x59f0d9*/
      v36 = TESTopic::GetTopic(5, 0); /*0x59f546*/
      v37 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59f54d*/
      if ( !v37 ) /*0x59f554*/
        return; /*0x59f554*/
      if ( !v36 /*0x59f588*/
        || (v38 = (TESObjectREFR *)reference,
            dword_B131F8 = 4,
            DialogueItem = TESTopic::CreateDialogueItem(v36, *((Actor **)this + 0x18), v38, v36, 0),
            dword_B131F8 = 0xFFFFFFFF,
            !DialogueItem) )
      {
        v39 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x59f598*/
        InterfaceManager::SetCurrentFocusTarget(v39, v4, v6, v5, 0.0, (_DWORD *)0xFDD, 0); /*0x59f5a2*/
        Tile_SetFloat(v37, (_DWORD *)0xFA1, 1.0); /*0x59f5b4*/
        sub_58FBA0((int)v37, v4, v5, 1.0, 0); /*0x59f5bc*/
        sub_57DE50(1); /*0x59f5c3*/
        v40 = ((double (__thiscall *)(DialogMenu *, int, Tile *))*(_DWORD *)(*(_DWORD *)this + 0x14))(this, 0x10, tile); /*0x59f5d9*/
        SpellPurchaseMenu_Create(v4, v5, v40, *((_DWORD *)this + 0x18)); /*0x59f5df*/
        FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59f5ee*/
        goto LABEL_47; /*0x59f5f6*/
      }
      goto LABEL_27; /*0x59f588*/
    case 3: /*0x59f0d9*/
    case 0xA: /*0x59f0d9*/
      sub_57DE50(2); /*0x59f604*/
      *((_BYTE *)this + 0x64) = 0; /*0x59f60b*/
      DialogMenu::Close(v41); /*0x59f60e*/
      FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59f61a*/
      goto LABEL_47; /*0x59f61a*/
  }
}
