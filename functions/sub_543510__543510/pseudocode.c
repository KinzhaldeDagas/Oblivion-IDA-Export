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
  char *v19; // eax
  int v20; // ecx
  _BYTE *v21; // eax
  NiAVObject *v22; // eax
  const char *v23; // [esp-4h] [ebp-2Ch]
  NiSourceTexture *TextureByFilename; // [esp-4h] [ebp-2Ch]
  BSStringT Src; // [esp+14h] [ebp-14h] BYREF
  unsigned int v26; // [esp+24h] [ebp-4h]

  nullsub_returnTrue_0arg();
  if ( *(this + 0xB) )
  {
    if ( *(this + 4) )
    {
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      {
        for ( i = 0; i < 2; i = (i + 1) % 3u )
        {
          v3 = 4 * (3 * i + 6);
          v4 = v3 + *(this + 4);
          if ( v4 )
          {
            v5 = *(_WORD *)(v4 + 8);
            if ( v5 == 0xFFFF )
              v6 = strlen(*(const char **)(v4 + 4));
            else
              v6 = v5;
            if ( v6 )
            {
              Src.m_data = 0;
              Src.m_dataLen = 0;
              Src.m_bufLen = 0;
              v7 = *(this + 4);
              v8 = *(CHAR **)(v3 + v7 + 4);
              v9 = v7 + v3;
              v26 = 0;
              if ( !v8 )
                v8 = EmptyString;
              v10 = (const char *)(*(int (__thiscall **)(int, CHAR *))(*(_DWORD *)v9 + 0x14))(v9, v8);
              BSStringT_Static_Format(&Src, "%s%s", v10, v23);
              m_data = Src.m_data;
              if ( OBSE_g_FileFinder )
              {
                if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, Src.m_data, 0, 0, 0xFFFFFFFF) )
                {
                  if ( NiNode_GetNiPropertyByID(*(NiNode **)(*(this + 0xB) + 4 * i + 8), 6) )
                  {
                    v12 = *(NiNode **)(*(this + 0xB) + 4 * i + 8);
                    TextureByFilename = NiSourceTexture::LoadTextureByFilename(m_data, (PixelLayout *)dword_B256D0, 1);
                    NiPropertyByID = (NiTexturingProperty *)NiNode_GetNiPropertyByID(v12, 6);
                    NiTexturingProperty::SetUnk08(NiPropertyByID, (NiRenderedTexture *)TextureByFilename);
                  }
                }
              }
              v26 = 0xFFFFFFFF;
              FormHeapFree((unsigned int)m_data);
              Src.m_data = 0;
              Src.m_bufLen = 0;
              Src.m_dataLen = 0;
            }
          }
        }
      }
    }
  }
  v14 = *(this + 0xC);
  if ( v14 )
  {
    sub_544160(*(_DWORD *)(v14 + 0x14), "Textures\\Sky\\MoonShadow.dds", sub_540EF0, 0);
    *(_DWORD *)(*(this + 0xC) + 0x70) = 2;
  }
  v15 = *(this + 0xD);
  if ( v15 )
  {
    sub_544160(*(_DWORD *)(v15 + 0x14), "Textures\\Sky\\MoonShadow.dds", sub_540F20, 0);
    *(_DWORD *)(*(this + 0xD) + 0x70) = 2;
  }
  v16 = *(this + 0xA);
  if ( v16 )
  {
    v17 = *(this + 3);
    if ( v17 )
    {
      sub_542D30(*(_DWORD *)(v16 + 8), v17 + 0x38, sub_542E40, 0);
      v18 = *(this + 3) + 0x44;
      if ( UseHDR )
        goto LABEL_30;
      if ( *(this + 3) == 0xFFFFFFBC )
        goto LABEL_30;
      v19 = *(char **)(*(this + 3) + 0x48);
      if ( !v19 )
        v19 = EmptyString;
      if ( _strcmp(v19, "Sky\\SunGlare.dds") )
LABEL_30:
        sub_542D30(*(_DWORD *)(*(this + 0xA) + 0xC), v18, sub_542E70, 0);
      else
        sub_53FBE0(*(_DWORD *)(*(this + 0xA) + 0xC), "Textures\\Sky\\SunGlareNonHDR.dds", sub_542E70, 0);
    }
  }
  if ( *(this + 9) )
  {
    v20 = *(this + 3);
    if ( v20 )
    {
      v21 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)(v20 + 0x18) + 0x14))(v20 + 0x18);
      sub_544780((Ni2DBuffer **)*(this + 9), v21);
      v22 = (NiAVObject *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 4))(*(this + 9));
      sub_7B8940(v22, 0xA, 0, 1);
    }
  }
  nullsub_returnTrue_0arg();
}
