// Builds player topic-choice tiles by starting at MenuTopicManager::FirstTopic(skipGreeting=true), deliberately omitting the GREETING/current spoken head entry. Each rendered tile receives a zero-based choice index; the manager cursor is restored with FirstTopic(false) afterward.
bool __thiscall DialogMenu::LoadTopicsList(DialogMenu *this)
{
  double v1; // st5
  double v2; // st6
  MenuTopicManagerView *Singleton; // ebp
  void (__thiscall ***v5)(void *, int); // eax
  double v6; // st7
  DialogMenu *v7; // ecx
  BSStringT *v9; // esi
  Tile *v10; // edx
  MenuTopicView *CurrentTopic; // eax
  MenuTopicView *v12; // eax
  double Float; // st7
  InterfaceManager *v14; // eax
  char *m_data; // eax
  const char *v16; // ecx
  int v17; // eax
  InterfaceManager *v18; // eax
  bool v19; // al
  InterfaceManager *v20; // eax
  float a2; // [esp+4h] [ebp-48h]
  float a2a; // [esp+4h] [ebp-48h]
  float a2b; // [esp+4h] [ebp-48h]
  float a2c; // [esp+4h] [ebp-48h]
  float a2d; // [esp+4h] [ebp-48h]
  float a2e; // [esp+4h] [ebp-48h]
  float a2f; // [esp+4h] [ebp-48h]
  float a2g; // [esp+4h] [ebp-48h]
  bool Topic; // [esp+1Fh] [ebp-2Dh]
  bool v30; // [esp+1Fh] [ebp-2Dh]
  int a3; // [esp+20h] [ebp-2Ch]
  _DWORD *v32; // [esp+24h] [ebp-28h] BYREF
  _DWORD *v33; // [esp+28h] [ebp-24h]
  BSStringT v34; // [esp+2Ch] [ebp-20h] BYREF
  BSStringT v35; // [esp+34h] [ebp-18h] BYREF
  unsigned int v36; // [esp+48h] [ebp-4h]

  Singleton = MenuTopicManager::GetSingleton(); /*0x59e6b4*/
  v32 = *(_DWORD **)(*((_DWORD *)this + 0xA) + 0x34); /*0x59e6c0*/
  while ( v32 ) /*0x59e6c4*/
  {
    v5 = (void (__thiscall ***)(void *, int))NiTPointerList_RemoveNode( /*0x59e6d1*/
                                               (BSTextureManager *)(*((_DWORD *)this + 0xA) + 0x30),
                                               (NiTPointerList_Node_void **)&v32);
    if ( v5 ) /*0x59e6d8*/
      (**v5)(v5, 1); /*0x59e6e2*/
  }
  a3 = 0; /*0x59e6ee*/
  Topic = MenuTopicManager::FirstTopic(Singleton, 1); /*0x59e6fc*/
  if ( Topic ) /*0x59e701*/
    v6 = fConstant_2; /*0x59e707*/
  else
    v6 = 1.0; /*0x59e703*/
  a2 = v6; /*0x59e70d*/
  Tile_SetFloat(*((Tile **)this + 0x11), 0xFA1u, a2); /*0x59e715*/
  if ( *((_BYTE *)this + 0x88) ) /*0x59e71a*/
  {
    *((_BYTE *)this + 0x64) = 0; /*0x59e722*/
    DialogMenu::Close(v7); /*0x59e725*/
    return 1; /*0x59e72a*/
  }
  else
  {
    v9 = *((BSStringT **)this + 0xA); /*0x59e744*/
    v32 = 0; /*0x59e747*/
    if ( !Topic ) /*0x59e74b*/
      goto LABEL_27; /*0x59e74b*/
    v34.m_data = 0; /*0x59e751*/
    v34.m_dataLen = 0; /*0x59e755*/
    v34.m_bufLen = 0; /*0x59e75a*/
    do /*0x59e998*/
    {
      v35.m_data = 0; /*0x59e76a*/
      v35.m_dataLen = 0; /*0x59e76e*/
      v35.m_bufLen = 0; /*0x59e773*/
      BSStringT_Set(&v35, "topic_template", 0); /*0x59e778*/
      v10 = *((Tile **)this + 0xA); /*0x59e781*/
      v36 = 0; /*0x59e789*/
      v9 = (BSStringT *)Menu::RenderTemplate((Menu *)this, v10, v35.m_data, (Tile *)v9); /*0x59e794*/
      CurrentTopic = MenuTopicManager::GetCurrentTopic(Singleton); /*0x59e796*/
      BSStringT_Set(&v34, CurrentTopic->displayName.m_data, 0); /*0x59e7a3*/
      LOBYTE(v36) = 1; /*0x59e7b1*/
      BSStringT_Set(v9 + 1, v34.m_data, 0); /*0x59e7b6*/
      LOBYTE(v36) = 0; /*0x59e7c0*/
      FormHeapFree((unsigned int)v34.m_data); /*0x59e7c4*/
      v34.m_data = 0; /*0x59e7ce*/
      v34.m_bufLen = 0; /*0x59e7d2*/
      v34.m_dataLen = 0; /*0x59e7d7*/
      v12 = MenuTopicManager::GetCurrentTopic(Singleton); /*0x59e7dc*/
      Tile_SetString(v9, (_DWORD *)0xFDE, v12->displayName.m_data); /*0x59e7eb*/
      v33 = (_DWORD *)(a3 + 0x65); /*0x59e7f7*/
      a2a = (float)(a3 + 0x65); /*0x59e802*/
      Tile_SetFloat((Tile *)v9, 0xFA8u, a2a); /*0x59e80a*/
      Float = (double)a3; /*0x59e80f*/
      a2b = Float; /*0x59e816*/
      Tile_SetFloat((Tile *)v9, 0xFAAu, a2b); /*0x59e81e*/
      ++a3; /*0x59e823*/
      if ( !v32 ) /*0x59e82c*/
      {
        InterfaceManager_GetSingleton(0, 1); /*0x59e831*/
        v14 = InterfaceManager_GetSingleton(0, 1); /*0x59e839*/
        v33 = (_DWORD *)++v14->unk08C; /*0x59e84e*/
        Float = (double)(int)v33; /*0x59e852*/
        if ( (int)v33 < 0 ) /*0x59e856*/
          Float = Float + flt_A2FC78; /*0x59e858*/
        a2c = Float; /*0x59e861*/
        Tile_SetFloat((Tile *)v9, 0xFF0u, a2c); /*0x59e86b*/
      }
      if ( !MenuTopicManager::GetCurrentTopic(Singleton)->infoNotSpoken )// MenuTopic.infoNotSpoken controls the topic tile's new/unread presentation. This cached UI byte is separate from TESTopicInfo.spoken. /*0x59e877*/
      {
        Tile_SetFloat((Tile *)v9, 0xFB0u, 0.0); /*0x59e88d*/
        a2d = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0xA), 0xFB5); /*0x59e8a0*/
        Tile_SetFloat((Tile *)v9, 0xFCCu, a2d); /*0x59e8aa*/
        a2e = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0xA), 0xFB6); /*0x59e8bd*/
        Tile_SetFloat((Tile *)v9, 0xFCDu, a2e); /*0x59e8c7*/
        Float = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0xA), 0xFB7); /*0x59e8d4*/
        a2f = Float; /*0x59e8da*/
        Tile_SetFloat((Tile *)v9, 0xFCEu, a2f); /*0x59e8e4*/
        m_data = MenuTopicManager::GetCurrentTopic(Singleton)->displayName.m_data; /*0x59e8f0*/
        if ( m_data && (v16 = *((const char **)this + 0x23)) != 0 ) /*0x59e8fe*/
          v17 = CRT_StricmpLocaleDispatch(v16, m_data); /*0x59e902*/
        else
          v17 = 2 * (m_data == 0) - 1; /*0x59e917*/
        if ( !v17 ) /*0x59e91b*/
        {
          InterfaceManager_GetSingleton(0, 1); /*0x59e920*/
          v18 = InterfaceManager_GetSingleton(0, 1); /*0x59e928*/
          Float = (double)(int)++v18->unk08C; /*0x59e934*/
          if ( (int)v18->unk08C < 0 ) /*0x59e947*/
            Float = Float + flt_A2FC78; /*0x59e949*/
          a2g = Float; /*0x59e952*/
          Tile_SetFloat((Tile *)v9, 0xFF0u, a2g); /*0x59e95c*/
        }
      }
      v19 = MenuTopicManager::NextTopic(Singleton); /*0x59e963*/
      v32 = (_DWORD *)((char *)v32 + 1); /*0x59e968*/
      v30 = v19; /*0x59e96d*/
      v36 = 0xFFFFFFFF; /*0x59e976*/
      FormHeapFree((unsigned int)v35.m_data); /*0x59e97e*/
      v35.m_data = 0; /*0x59e98a*/
      v35.m_bufLen = 0; /*0x59e98e*/
      v35.m_dataLen = 0; /*0x59e993*/
    }
    while ( v30 ); /*0x59e998*/
    if ( !v32 ) /*0x59e9a2*/
    {
LABEL_27:
      Float = fConstant_2; /*0x59e9a4*/
      Tile_SetFloat(*((Tile **)this + 0xC), 0xFA1u, fConstant_2); /*0x59e9b6*/
    }
    MenuTopicManager::FirstTopic(Singleton, 0); // Always restore the manager cursor to the head MenuTopic after rendering the list that intentionally skipped that head. This enables initial GREETING playback even when Initialize returned closePending for Goodbye. /*0x59e9be*/
    sub_58FBA0(*((_DWORD *)this + 0xA), v1, v2, Float, 0); /*0x59e9c7*/
    if ( !BYTE1(InterfaceManager_GetSingleton(0, 1)->unk0B8) ) /*0x59e9d7*/
    {
      v20 = InterfaceManager_GetSingleton(0, 1); /*0x59e9e2*/
      InterfaceManager::GetDefaultFocus(v20); /*0x59e9ec*/
    }
    return 0; /*0x59e9f1*/
  }
}
