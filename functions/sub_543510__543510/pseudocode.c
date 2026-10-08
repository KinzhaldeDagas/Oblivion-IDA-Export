void __thiscall sub_543510(_DWORD *this)
{
  signed int i; // ebx
  int v3; // ecx
  int v4; // eax
  unsigned __int16 v5; // dx
  unsigned int v6; // eax
  int v7; // edx
  CHAR *v8; // eax
  int v9; // ecx
  const char *v10; // eax
  char *m_data; // ebp
  NiNode *v12; // edi
  NiTexturingProperty *NiPropertyByID; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  const char *v19; // eax
  int v20; // ecx
  _BYTE *v21; // eax
  NiAVObject *v22; // eax
  const char *v23; // [esp-4h] [ebp-2Ch]
  NiSourceTexture *TextureByFilename; // [esp-4h] [ebp-2Ch]
  BSStringT Src; // [esp+14h] [ebp-14h] BYREF
  unsigned int v26; // [esp+24h] [ebp-4h]

  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x54353b*/
  if ( *(this + 0xB) ) /*0x543545*/
  {
    if ( *(this + 4) ) /*0x54354e*/
    {
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x54355d*/
      {
        for ( i = 0; i < 2; i = (i + 1) % 3u ) /*0x54356a*/
        {
          v3 = 4 * (3 * i + 6); /*0x543579*/
          v4 = v3 + *(this + 4); /*0x54357b*/
          if ( v4 ) /*0x54357f*/
          {
            v5 = *(_WORD *)(v4 + 8); /*0x543585*/
            if ( v5 == 0xFFFF ) /*0x54358e*/
              v6 = strlen(*(const char **)(v4 + 4)); /*0x543593*/
            else
              v6 = v5; /*0x5435a3*/
            if ( v6 ) /*0x5435a8*/
            {
              Src.m_data = 0; /*0x5435ae*/
              Src.m_dataLen = 0; /*0x5435b2*/
              Src.m_bufLen = 0; /*0x5435b7*/
              v7 = *(this + 4); /*0x5435bc*/
              v8 = *(CHAR **)(v3 + v7 + 4); /*0x5435bf*/
              v9 = v7 + v3; /*0x5435c3*/
              v26 = 0; /*0x5435c7*/
              if ( !v8 ) /*0x5435cb*/
                v8 = EmptyString; /*0x5435cd*/
              v10 = (const char *)(*(int (__thiscall **)(int, CHAR *))(*(_DWORD *)v9 + 0x14))(v9, v8); /*0x5435d8*/
              BSStringT_Static_Format(&Src, "%s%s", v10, v23); /*0x5435e5*/
              m_data = Src.m_data; /*0x5435f5*/
              if ( MEMORY[0xB33A04] ) /*0x5435ea*/
              {
                if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], Src.m_data, 0, 0, 0xFFFFFFFF) ) /*0x543607*/
                {
                  if ( NiNode_GetNiPropertyByID(*(NiNode **)(*(this + 0xB) + 4 * i + 8), 6) ) /*0x543616*/
                  {
                    v12 = *(NiNode **)(*(this + 0xB) + 4 * i + 8); /*0x543622*/
                    TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x543636*/
                                          m_data,
                                          &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                                          1);
                    NiPropertyByID = (NiTexturingProperty *)NiNode_GetNiPropertyByID(v12, 6); /*0x54363b*/
                    OB_NiTexturingProperty_SetBaseTexture_010201A0(NiPropertyByID, (NiTexture *)TextureByFilename); /*0x543642*/
                  }
                }
              }
              v26 = 0xFFFFFFFF; /*0x543648*/
              FormHeapFree((unsigned int)m_data); /*0x543650*/
              Src.m_data = 0; /*0x54365a*/
              Src.m_bufLen = 0; /*0x54365e*/
              Src.m_dataLen = 0; /*0x543663*/
            }
          }
        }
      }
    }
  }
  v14 = *(this + 0xC); /*0x543681*/
  if ( v14 ) /*0x543686*/
  {
    sub_544160(*(_DWORD *)(v14 + 0x14), "Textures\\Sky\\MoonShadow.dds", sub_540EF0, 0); /*0x5436a3*/
    *(_DWORD *)(*(this + 0xC) + 0x70) = 2; /*0x5436ab*/
  }
  v15 = *(this + 0xD); /*0x5436b2*/
  if ( v15 ) /*0x5436b7*/
  {
    sub_544160(*(_DWORD *)(v15 + 0x14), "Textures\\Sky\\MoonShadow.dds", sub_540F20, 0); /*0x5436d4*/
    *(_DWORD *)(*(this + 0xD) + 0x70) = 2; /*0x5436dc*/
  }
  v16 = *(this + 0xA); /*0x5436e3*/
  if ( v16 ) /*0x5436e8*/
  {
    v17 = *(this + 3); /*0x5436ea*/
    if ( v17 ) /*0x5436ef*/
    {
      sub_542D30(*(_DWORD *)(v16 + 8), v17 + 0x38, sub_542E40, 0); /*0x5436ff*/
      v18 = *(this + 3) + 0x44; /*0x54370a*/
      if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x54370d*/
        goto LABEL_30; /*0x54370d*/
      if ( *(this + 3) == 0xFFFFFFBC ) /*0x543718*/
        goto LABEL_30; /*0x543718*/
      v19 = *(const char **)(*(this + 3) + 0x48); /*0x54371a*/
      if ( !v19 ) /*0x54371f*/
        v19 = EmptyString; /*0x543721*/
      if ( CRT_StricmpLocaleDispatch(v19, "Sky\\SunGlare.dds") ) /*0x54372c*/
LABEL_30:
        sub_542D30(*(_DWORD *)(*(this + 0xA) + 0xC), v18, sub_542E70, 0); /*0x54375f*/
      else
        sub_53FBE0(*(_DWORD *)(*(this + 0xA) + 0xC), "Textures\\Sky\\SunGlareNonHDR.dds", sub_542E70, 0); /*0x54374a*/
    }
  }
  if ( *(this + 9) ) /*0x543767*/
  {
    v20 = *(this + 3); /*0x54376c*/
    if ( v20 ) /*0x543771*/
    {
      v21 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)(v20 + 0x18) + 0x14))(v20 + 0x18); /*0x54377c*/
      sub_544780((NiNode **)*(this + 9), v21); /*0x543782*/
      v22 = (NiAVObject *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 4))(*(this + 9)); /*0x543794*/
      BSShaderManager_AssignShadersRecursive(v22, 0xAu, 0, 1); /*0x543797*/
    }
  }
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5437a1*/
}
