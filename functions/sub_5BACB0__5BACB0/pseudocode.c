void __usercall sub_5BACB0(double a1@<st2>, double st6_0@<st1>, double a3@<st0>, TESForm *a4)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v6; // edx
  PlayerCharacter *v7; // ecx
  char *v8; // edi
  TESQuest *activeQuest; // eax
  double Float; // st7
  int v11; // eax
  int v12; // ebp
  Tile *v13; // ecx
  double v14; // st7
  _DWORD *v15; // esi
  void (__thiscall ***v16)(_DWORD, int); // ecx
  _DWORD *i; // eax
  _DWORD *v18; // edi
  TESForm *v19; // ebp
  const char *v20; // eax
  BSStringT *v21; // esi
  const char *v22; // eax
  char *m_data; // edx
  unsigned int j; // eax
  char v25; // cl
  char *v26; // eax
  char *LogText; // eax
  const char *data; // eax
  double v29; // st7
  float a2; // [esp+4h] [ebp-368h]
  char *a2a; // [esp+4h] [ebp-368h]
  float a2b; // [esp+4h] [ebp-368h]
  float a2c; // [esp+4h] [ebp-368h]
  float a2d; // [esp+4h] [ebp-368h]
  TESForm *v35; // [esp+1Ch] [ebp-350h]
  _DWORD *v36; // [esp+1Ch] [ebp-350h]
  float v37; // [esp+1Ch] [ebp-350h]
  int v38; // [esp+20h] [ebp-34Ch]
  _DWORD *v39; // [esp+24h] [ebp-348h]
  unsigned __int16 *v40; // [esp+28h] [ebp-344h]
  BSStringT v41; // [esp+2Ch] [ebp-340h] BYREF
  BSStringT v42; // [esp+34h] [ebp-338h] BYREF
  BSStringT v43; // [esp+3Ch] [ebp-330h]
  BSStringT v44; // [esp+44h] [ebp-328h] BYREF
  _DWORD v45[2]; // [esp+4Ch] [ebp-320h] BYREF
  char v46[255]; // [esp+54h] [ebp-318h] BYREF
  char v47; // [esp+153h] [ebp-219h]
  char v48[260]; // [esp+154h] [ebp-218h] BYREF
  char v49[260]; // [esp+258h] [ebp-114h] BYREF
  unsigned int v50; // [esp+368h] [ebp-4h]

  v35 = a4;
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
    if ( OpenMenuTile )
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      v7 = TESDataHandler_g_PlayerRef;
      v8 = (char *)ParentMenu;
      activeQuest = TESDataHandler_g_PlayerRef->activeQuest;
      v43.m_data = v8;
      if ( activeQuest )
      {
        if ( (activeQuest[2].super.refID & 2) != 0 )
          sub_660450(v7, a3, v6, 0);
      }
      Float = Tile_GetFloat((_DWORD *)*((_DWORD *)v8 + 0xA), 0xFAE);
      v11 = Double_To_SInt32(Float);
      v12 = v11;
      v38 = 0x34;
      if ( v11 == 4 )
      {
        v38 = 0x33;
        sub_5B8FC0((_DWORD **)v8, 0x33);
      }
      else if ( v11 == 3 )
      {
        v35 = (TESForm *)TESDataHandler_g_PlayerRef->activeQuest;
        v38 = 0x36;
        sub_5B8FC0((_DWORD **)v8, 0x36);
      }
      else
      {
        if ( a4 )
          v38 = 0x35;
        sub_5B8FC0((_DWORD **)v8, v38);
      }
      Tile_SetFloat(*((Tile **)v8 + 0x18), (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat(*((Tile **)v8 + 0x16), (_DWORD *)0xFA1, 1.0);
      if ( TESDataHandler_g_PlayerRef )
      {
        v13 = *((Tile **)v8 + 0x13);
        v14 = 1.0;
        *((_DWORD *)v8 + 0x1E) = 0;
        Tile_SetFloat(v13, (_DWORD *)0xFA1, 1.0);
        v15 = *(_DWORD **)(*((_DWORD *)v8 + 0x12) + 0x34);
        while ( v15 )
        {
          v16 = (void (__thiscall ***)(_DWORD, int))v15[2];
          v15 = (_DWORD *)*v15;
          if ( v16 )
            (**v16)(v16, 1);
        }
        NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*((_DWORD *)v8 + 0x12) + 0x30));
        if ( TESDataHandler_g_PlayerRef->activeQuest || v38 != 0x36 )
        {
          v45[0] = 0;
          v45[1] = 0;
          sub_52A8A0(v45, v35, v12 == 5, 1);
          v39 = 0;
          v36 = 0;
          for ( i = v45; *i; i = *(_DWORD **)&v43.m_dataLen )
          {
            v18 = (_DWORD *)*i;
            v19 = *(TESForm **)(*i + 0x68);
            v40 = *(unsigned __int16 **)(*i + 0x64);
            *(_DWORD *)&v43.m_dataLen = i[1];
            v41.m_data = 0;
            v41.m_dataLen = 0;
            v41.m_bufLen = 0;
            BSStringT_Set(&v41, EmptyString, 0);
            v20 = *(const char **)(v18[0x1A] + 0x34);
            v50 = 0;
            if ( !v20 )
              v20 = EmptyString;
            BSStringT_Static_Format(&v41, "%s_%i", v20, v39);
            v21 = sub_5B8D00((int)v43.m_data, a1, st6_0, v14, v41.m_data, v38);
            v22 = *(const char **)(v18[0x1A] + 0x34);
            if ( !v22 )
              v22 = EmptyString;
            v42.m_data = 0;
            v42.m_dataLen = 0;
            v42.m_bufLen = 0;
            BSStringT_Set(&v42, v22, 0);
            m_data = v42.m_data;
            LOBYTE(v50) = 1;
            if ( v42.m_data )
            {
              for ( j = 0; j < 0x100; ++j )
              {
                v25 = m_data[j];
                v46[j] = v25;
                if ( v25 == 0x20 )
                  v46[j] = 0x5F;
                if ( !v46[j] )
                  break;
              }
              v47 = 0;
            }
            else
            {
              v46[0] = 0;
            }
            BSStringT_Set(v21 + 1, v46, 0);
            a2 = (float)(int)v39;
            Tile_SetFloat((Tile *)v21, (_DWORD *)0xFAA, a2);
            v26 = *(char **)(v18[0x1A] + 0x34);
            v39 = (_DWORD *)((char *)v39 + 1);
            if ( !v26 )
              v26 = EmptyString;
            Tile_SetString(v21, (_DWORD *)0xFAF, v26);
            a2a = sub_47D400(v40, &v44)->m_data;
            LOBYTE(v50) = 2;
            Tile_SetString(v21, (_DWORD *)0xFB0, a2a);
            LOBYTE(v50) = 1;
            FormHeapFree((unsigned int)v44.m_data);
            v44.m_data = 0;
            *(_DWORD *)&v44.m_dataLen = 0;
            LogText = QuestStageItem_GetLogText(v18, v19);
            Tile_SetString(v21, (_DWORD *)0xFB1, LogText);
            data = (const char *)v19[1].member.modlist.data;
            if ( !data )
              data = EmptyString;
            _sprintf(v48, "%s", data);
            v49[0] = 0;
            if ( v48[0] )
              _sprintf(v49, "%s\\%s", "Icons", v48);
            Tile_SetString(v21, (_DWORD *)0xFB2, v49);
            v37 = (float)(int)v36;
            Tile_SetFloat((Tile *)v21, (_DWORD *)0xFB3, v37);
            v29 = (double)((TESDataHandler_g_PlayerRef->activeQuest == (TESQuest *)v19) + 1);
            a2b = v29;
            Tile_SetFloat((Tile *)v21, (_DWORD *)0xFB4, a2b);
            sub_58FBA0((int)v21, a1, st6_0, v29, 0);
            v14 = Tile_GetFloat(v21, 0xFCA) + v37;
            v36 = (_DWORD *)Double_To_SInt32(v14);
            FormHeapFree((unsigned int)v42.m_data);
            v42.m_data = 0;
            v42.m_bufLen = 0;
            v42.m_dataLen = 0;
            v50 = 0xFFFFFFFF;
            FormHeapFree((unsigned int)v41.m_data);
            v8 = v43.m_data;
            v41.m_data = 0;
            v41.m_bufLen = 0;
            v41.m_dataLen = 0;
            if ( !*(_DWORD *)&v43.m_dataLen )
              break;
          }
          a2c = (float)(int)v36;
          Tile_SetFloat(*((Tile **)v8 + 0x12), (_DWORD *)0xFCA, a2c);
          a2d = (float)(int)((int)v39 + 0xFFFFFFFE);
          Tile_SetFloat(*((Tile **)v8 + 0x12), (_DWORD *)0xFAE, a2d);
          Tile_SetFloat(*((Tile **)v8 + 0x11), (_DWORD *)0xFB7, flt_A6B618);
          Tile_SetFloat(*((Tile **)v8 + 0x11), (_DWORD *)0xFB7, 0.0);
          BSSimpleList_Clear(v45);
        }
      }
    }
  }
}
