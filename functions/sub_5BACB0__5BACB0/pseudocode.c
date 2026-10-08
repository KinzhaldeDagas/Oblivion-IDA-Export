void __usercall sub_5BACB0(double a1@<st2>, double st6_0@<st1>, double a3@<st0>, TESForm *a4)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  PlayerCharacter *v6; // ecx
  char *v7; // edi
  TESQuest *activeQuest; // eax
  double Float; // st7
  int v10; // eax
  int v11; // ebp
  Tile *v12; // ecx
  _DWORD *v13; // esi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  _DWORD *i; // eax
  _DWORD *v16; // edi
  TESForm *v17; // ebp
  const char *v18; // eax
  BSStringT *v19; // esi
  const char *v20; // eax
  char *m_data; // edx
  unsigned int j; // eax
  char v23; // cl
  char *v24; // eax
  char *LogText; // eax
  const char *data; // eax
  double v27; // st7
  double v28; // st7
  float a2; // [esp+4h] [ebp-368h]
  char *a2a; // [esp+4h] [ebp-368h]
  float a2b; // [esp+4h] [ebp-368h]
  float a2c; // [esp+4h] [ebp-368h]
  float a2d; // [esp+4h] [ebp-368h]
  TESForm *v34; // [esp+1Ch] [ebp-350h]
  _DWORD *v35; // [esp+1Ch] [ebp-350h]
  float v36; // [esp+1Ch] [ebp-350h]
  int v37; // [esp+20h] [ebp-34Ch]
  _DWORD *v38; // [esp+24h] [ebp-348h]
  unsigned __int16 *v39; // [esp+28h] [ebp-344h]
  BSStringT v40; // [esp+2Ch] [ebp-340h] BYREF
  BSStringT v41; // [esp+34h] [ebp-338h] BYREF
  BSStringT v42; // [esp+3Ch] [ebp-330h]
  BSStringT v43; // [esp+44h] [ebp-328h] BYREF
  _DWORD v44[2]; // [esp+4Ch] [ebp-320h] BYREF
  char v45[255]; // [esp+54h] [ebp-318h] BYREF
  char v46; // [esp+153h] [ebp-219h]
  char v47[260]; // [esp+154h] [ebp-218h] BYREF
  char v48[260]; // [esp+258h] [ebp-114h] BYREF
  unsigned int v49; // [esp+368h] [ebp-4h]

  v34 = a4; /*0x5bacf8*/
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5bacfc*/
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x5bad0e*/
    if ( OpenMenuTile ) /*0x5bad1a*/
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5bad22*/
      v6 = reference; /*0x5bad27*/
      v7 = (char *)ParentMenu; /*0x5bad2d*/
      activeQuest = reference->activeQuest; /*0x5bad2f*/
      v42.m_data = v7; /*0x5bad37*/
      if ( activeQuest ) /*0x5bad3b*/
      {
        if ( (activeQuest->questFlags & 2) != 0 ) /*0x5bad41*/
          sub_660450(v6, a3, 0); /*0x5bad44*/
      }
      Float = Tile_GetFloat((_DWORD *)*((_DWORD *)v7 + 0xA), 0xFAE); /*0x5bad51*/
      v10 = Double_To_SInt32(Float); /*0x5bad56*/
      v11 = v10; /*0x5bad5b*/
      v37 = 0x34; /*0x5bad60*/
      if ( v10 == 4 ) /*0x5bad68*/
      {
        v37 = 0x33; /*0x5bad6a*/
        sub_5B8FC0((_DWORD **)v7, 0x33); /*0x5bad72*/
      }
      else if ( v10 == 3 ) /*0x5bad77*/
      {
        v34 = (TESForm *)reference->activeQuest; /*0x5bad84*/
        v37 = 0x36; /*0x5bad88*/
        sub_5B8FC0((_DWORD **)v7, 0x36); /*0x5bad90*/
      }
      else
      {
        if ( a4 ) /*0x5bad94*/
          v37 = 0x35; /*0x5bad96*/
        sub_5B8FC0((_DWORD **)v7, v37); /*0x5bada5*/
      }
      Tile_SetFloat(*((Tile **)v7 + 0x18), 0xFA1u, 1.0); /*0x5badb8*/
      Tile_SetFloat(*((Tile **)v7 + 0x16), 0xFA1u, 1.0); /*0x5badcb*/
      if ( reference ) /*0x5badd0*/
      {
        v12 = *((Tile **)v7 + 0x13); /*0x5baddc*/
        *((_DWORD *)v7 + 0x1E) = 0; /*0x5badea*/
        Tile_SetFloat(v12, 0xFA1u, 1.0); /*0x5baded*/
        v13 = *(_DWORD **)(*((_DWORD *)v7 + 0x12) + 0x34); /*0x5badf5*/
        while ( v13 ) /*0x5badfa*/
        {
          v14 = (void (__thiscall ***)(_DWORD, int))v13[2]; /*0x5bae00*/
          v13 = (_DWORD *)*v13; /*0x5bae08*/
          if ( v14 ) /*0x5bae0a*/
            (**v14)(v14, 1); /*0x5bae12*/
        }
        NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*((_DWORD *)v7 + 0x12) + 0x30)); /*0x5bae1e*/
        if ( reference->activeQuest || v37 != 0x36 ) /*0x5bae36*/
        {
          v44[0] = 0; /*0x5bae4c*/
          v44[1] = 0; /*0x5bae50*/
          sub_52A8A0(v44, v34, v11 == 5, 1); /*0x5bae57*/
          v38 = 0; /*0x5bae5f*/
          v35 = 0; /*0x5bae63*/
          for ( i = v44; *i; i = *(_DWORD **)&v42.m_dataLen ) /*0x5bae67*/
          {
            v16 = (_DWORD *)*i; /*0x5bae7c*/
            v17 = *(TESForm **)(*i + 0x68); /*0x5bae84*/
            v39 = *(unsigned __int16 **)(*i + 0x64); /*0x5bae91*/
            *(_DWORD *)&v42.m_dataLen = i[1]; /*0x5bae95*/
            v40.m_data = 0; /*0x5bae99*/
            v40.m_dataLen = 0; /*0x5bae9d*/
            v40.m_bufLen = 0; /*0x5baea2*/
            BSStringT_Set(&v40, EmptyString, 0); /*0x5baea7*/
            v18 = *(const char **)(v16[0x1A] + 0x34); /*0x5baeaf*/
            v49 = 0; /*0x5baeb4*/
            if ( !v18 ) /*0x5baebb*/
              v18 = EmptyString; /*0x5baebd*/
            BSStringT_Static_Format(&v40, "%s_%i", v18, v38); /*0x5baed2*/
            v19 = sub_5B8D00((int)v42.m_data, v40.m_data, v37); /*0x5baeed*/
            v20 = *(const char **)(v16[0x1A] + 0x34); /*0x5baef2*/
            if ( !v20 ) /*0x5baef7*/
              v20 = EmptyString; /*0x5baef9*/
            v41.m_data = 0; /*0x5baf04*/
            v41.m_dataLen = 0; /*0x5baf08*/
            v41.m_bufLen = 0; /*0x5baf0d*/
            BSStringT_Set(&v41, v20, 0); /*0x5baf12*/
            m_data = v41.m_data; /*0x5baf17*/
            LOBYTE(v49) = 1; /*0x5baf1d*/
            if ( v41.m_data ) /*0x5baf25*/
            {
              for ( j = 0; j < 0x100; ++j ) /*0x5baf27*/
              {
                v23 = m_data[j]; /*0x5baf30*/
                v45[j] = v23; /*0x5baf36*/
                if ( v23 == 0x20 ) /*0x5baf3a*/
                  v45[j] = 0x5F; /*0x5baf3c*/
                if ( !v45[j] ) /*0x5baf41*/
                  break; /*0x5baf45*/
              }
              v46 = 0; /*0x5baf51*/
            }
            else
            {
              v45[0] = 0; /*0x5baf5a*/
            }
            BSStringT_Set(v19 + 1, v45, 0); /*0x5baf67*/
            a2 = (float)(int)v38; /*0x5baf73*/
            Tile_SetFloat((Tile *)v19, 0xFAAu, a2); /*0x5baf7b*/
            v24 = *(char **)(v16[0x1A] + 0x34); /*0x5baf83*/
            v38 = (_DWORD *)((char *)v38 + 1); /*0x5baf86*/
            if ( !v24 ) /*0x5baf8d*/
              v24 = EmptyString; /*0x5baf8f*/
            Tile_SetString(v19, (_DWORD *)0xFAF, v24); /*0x5baf9c*/
            a2a = sub_47D400(v39, &v43)->m_data; /*0x5bafb1*/
            LOBYTE(v49) = 2; /*0x5bafb9*/
            Tile_SetString(v19, (_DWORD *)0xFB0, a2a); /*0x5bafc1*/
            LOBYTE(v49) = 1; /*0x5bafcb*/
            FormHeapFree((unsigned int)v43.m_data); /*0x5bafd3*/
            v43.m_data = 0; /*0x5bafde*/
            *(_DWORD *)&v43.m_dataLen = 0; /*0x5bafe7*/
            LogText = QuestStageItem_GetLogText(v16, v17); /*0x5bafec*/
            Tile_SetString(v19, (_DWORD *)0xFB1, LogText); /*0x5baff9*/
            data = (const char *)v17[1].member.modlist.data; /*0x5baffe*/
            if ( !data ) /*0x5bb003*/
              data = EmptyString; /*0x5bb005*/
            _sprintf(v47, "%s", data); /*0x5bb018*/
            v48[0] = 0; /*0x5bb027*/
            if ( v47[0] ) /*0x5bb02e*/
              _sprintf(v48, "%s\\%s", "Icons", v47); /*0x5bb04a*/
            Tile_SetString(v19, (_DWORD *)0xFB2, v48); /*0x5bb061*/
            v36 = (float)(int)v35; /*0x5bb06d*/
            Tile_SetFloat((Tile *)v19, 0xFB3u, v36); /*0x5bb07d*/
            v27 = (double)((reference->activeQuest == (TESQuest *)v17) + 1); /*0x5bb09b*/
            a2b = v27; /*0x5bb0a2*/
            Tile_SetFloat((Tile *)v19, 0xFB4u, a2b); /*0x5bb0aa*/
            sub_58FBA0((int)v19, a1, st6_0, v27, 0); /*0x5bb0b2*/
            v28 = Tile_GetFloat(v19, 0xFCA); /*0x5bb0be*/
            v35 = (_DWORD *)Double_To_SInt32(v28 + v36); /*0x5bb0d1*/
            FormHeapFree((unsigned int)v41.m_data); /*0x5bb0d5*/
            v41.m_data = 0; /*0x5bb0df*/
            v41.m_bufLen = 0; /*0x5bb0e3*/
            v41.m_dataLen = 0; /*0x5bb0e8*/
            v49 = 0xFFFFFFFF; /*0x5bb0ed*/
            FormHeapFree((unsigned int)v40.m_data); /*0x5bb0f8*/
            v7 = v42.m_data; /*0x5bb0fd*/
            v40.m_data = 0; /*0x5bb108*/
            v40.m_bufLen = 0; /*0x5bb10c*/
            v40.m_dataLen = 0; /*0x5bb111*/
            if ( !*(_DWORD *)&v42.m_dataLen ) /*0x5bb116*/
              break; /*0x5bb116*/
          }
          a2c = (float)(int)v35; /*0x5bb124*/
          Tile_SetFloat(*((Tile **)v7 + 0x12), 0xFCAu, a2c); /*0x5bb12c*/
          a2d = (float)(int)((int)v38 + 0xFFFFFFFE); /*0x5bb144*/
          Tile_SetFloat(*((Tile **)v7 + 0x12), 0xFAEu, a2d); /*0x5bb14c*/
          Tile_SetFloat(*((Tile **)v7 + 0x11), 0xFB7u, flt_A6B618); /*0x5bb163*/
          Tile_SetFloat(*((Tile **)v7 + 0x11), 0xFB7u, 0.0); /*0x5bb176*/
          BSSimpleList_Clear(v44); /*0x5bb17f*/
        }
      }
    }
  }
}
