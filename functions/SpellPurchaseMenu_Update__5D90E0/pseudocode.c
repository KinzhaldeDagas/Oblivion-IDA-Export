// positive sp value has been detected, the output may be wrong!
void __usercall SpellPurchaseMenu_Update(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>)
{
  int v4; // edi
  _DWORD *v5; // esi
  void (__thiscall ***v6)(_DWORD); // ecx
  TESForm *ActorBaseForm; // eax
  bool v8; // zf
  char *v9; // esi
  TESForm::ModReferenceList *p_modlist; // ebx
  int v11; // edi
  UInt32 *p_refID; // eax
  int *v13; // edi
  int v14; // ecx
  TESForm::ModReferenceList *v15; // eax
  char *v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  BSStringT *TileFromTemplate; // esi
  char *m_data; // edi
  InterfaceManager *Singleton; // eax
  double v23; // st7
  double (__thiscall ***v24)(_DWORD, PlayerCharacter *); // edi
  const char *v25; // eax
  const char *v26; // eax
  char *v27; // ebx
  double v28; // st7
  double v29; // st7
  int v30; // edi
  char *v31; // esi
  Actor *v32; // ecx
  int v33; // edi
  int v34; // ebx
  int v35; // eax
  char *v36; // esi
  int v37; // [esp+4h] [ebp-158h]
  int v38; // [esp+8h] [ebp-154h]
  int v39; // [esp+Ch] [ebp-150h]
  int v40; // [esp+10h] [ebp-14Ch]
  float v41; // [esp+10h] [ebp-14Ch]
  float v42; // [esp+10h] [ebp-14Ch]
  int (__cdecl *v43)(int, _DWORD); // [esp+14h] [ebp-148h]
  float v44; // [esp+14h] [ebp-148h]
  float v45; // [esp+14h] [ebp-148h]
  float v46; // [esp+14h] [ebp-148h]
  _DWORD *v47; // [esp+24h] [ebp-138h]
  float v48; // [esp+28h] [ebp-134h]
  float v49; // [esp+28h] [ebp-134h]
  float v50; // [esp+28h] [ebp-134h]
  _DWORD *v51; // [esp+28h] [ebp-134h]
  BSStringT v52; // [esp+2Ch] [ebp-130h] BYREF
  int v53; // [esp+34h] [ebp-128h]
  _DWORD *v54; // [esp+38h] [ebp-124h]
  BSStringT v55; // [esp+3Ch] [ebp-120h]
  TileWindow *a2; // [esp+48h] [ebp-114h]
  char a3[8]; // [esp+4Ch] [ebp-110h] BYREF
  int v58; // [esp+158h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+15Ch] [ebp+0h]

  v4 = a1;
  v5 = *(_DWORD **)(*(_DWORD *)(a1 + 0x2C) + 0x34);
  while ( v5 )
  {
    v6 = (void (__thiscall ***)(_DWORD))v5[2];
    v5 = (_DWORD *)*v5;
    if ( v6 )
    {
      v37 = 1;
      (**v6)(v6);
    }
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(v4 + 0x2C) + 0x30));
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
  v8 = *(_DWORD *)(v4 + 0x64) == 0;
  v9 = (char *)(v4 + 0x60);
  p_modlist = &ActorBaseForm[3].member.modlist;
  v53 = *(_DWORD *)(v4 + 0x2C);
  if ( !v8 )
  {
    do
    {
      v11 = *(_DWORD *)(*((_DWORD *)v9 + 1) + 4);
      FormHeapFree(*((_DWORD *)v9 + 1));
      *((_DWORD *)v9 + 1) = v11;
    }
    while ( v11 );
    v4 = (int)v47;
  }
  *(_DWORD *)v9 = 0;
  p_refID = &Actor_GetActorBaseForm(*(Actor **)(v4 + 0x50), 0)[3].member.refID;
  v13 = (int *)(p_refID + 1);
  if ( p_refID != (UInt32 *)0xFFFFFFFC )
  {
    do
    {
      if ( !*v13 )
        break;
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(*v13 + 0x18) + 0x18))(*v13 + 0x18) )
      {
        v14 = *v13;
        v15 = p_modlist;
        if ( p_modlist )
        {
          while ( v15->data != (Data *)v14 )
          {
            v15 = v15->next;
            if ( !v15 )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          BSSimpleList_InsertSorted(v9, v14, (int)sub_5D8FD0, v37, v38, v39, v40, v43);
        }
      }
      v13 = (int *)v13[1];
    }
    while ( v13 );
  }
  v16 = v9;
  v17 = 0;
  for ( *(_DWORD *)&v55.m_dataLen = v9; v9; v9 = *((char **)v9 + 1) )
  {
    if ( *(_DWORD *)v9 )
      ++v17;
  }
  v18 = v17 - 1;
  if ( v54[0x13] > v18 )
    v54[0x13] = v18;
  if ( v16 )
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)v16;
      if ( !*(_DWORD *)v16 )
        break;
      *(_DWORD *)&v52.m_dataLen = 0;
      v53 = 0;
      BSStringT_Set((BSStringT *)&v52.m_dataLen, "spell_item_template", 0);
      retaddr = 0;
      TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(
                                        v54,
                                        st5_0,
                                        st6_0,
                                        a4,
                                        a2,
                                        *(char **)&v52.m_dataLen,
                                        0);
      if ( TileFromTemplate )
      {
        m_data = v55.m_data;
        if ( v55.m_data == (char *)v54[0x13] )
        {
          InterfaceManager_GetSingleton(0, 1);
          Singleton = InterfaceManager_GetSingleton(0, 1);
          v23 = (double)(int)++Singleton->unk08C;
          if ( (int)Singleton->unk08C < 0 )
            v23 = v23 + flt_A2FC78;
          v44 = v23;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, v44);
        }
        v45 = (float)(int)v55.m_data;
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, v45);
        v52.m_data = m_data + 0x3E8;
        v46 = (float)(int)(m_data + 0x3E8);
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, v46);
        v24 = (double (__thiscall ***)(_DWORD, PlayerCharacter *))(v19 + 0x24);
        v25 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x1C) + 0x48);
        if ( !v25 )
          v25 = EmptyString;
        _sprintf(a3, "%s\\%s", "Icons", v25);
        Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a3);
        v26 = *(const char **)(v19 + 0x1C);
        if ( !v26 )
          v26 = EmptyString;
        _sprintf(a3, "%s_%d", v26, v55.m_data);
        BSStringT_Set(TileFromTemplate + 1, a3, 0);
        v27 = *(char **)(v19 + 0x1C);
        if ( !v27 )
          v27 = EmptyString;
        Tile_SetString(TileFromTemplate, (_DWORD *)0xFB1, v27);
        v28 = (**v24)(v24, TESDataHandler_g_PlayerRef);
        v48 = (float)Double_To_SInt32(v28);
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB3, v48);
        v29 = v48 * fSpellmakingGoldMult;
        v30 = Double_To_SInt32(v29);
        v41 = *(float *)(v53 + 0x50);
        *(_DWORD *)&v55.m_dataLen = v30;
        Player_GetActorBarterFactor_(v41);
        v49 = v29;
        st6_0 = (double)(int)TESDataHandler_g_PlayerRef->unk11C * dbl_A3D8E8;
        v50 = v49 - st6_0;
        v51 = (_DWORD *)Double_To_SInt32((double)*(int *)&v55.m_dataLen * v50);
        if ( (int)v51 < v30 )
          v51 = (_DWORD *)v30;
        a4 = (double)(int)v51;
        v42 = a4;
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB7, v42);
        v16 = v55.m_data;
      }
      v31 = *((char **)v16 + 1);
      v54 = (_DWORD *)((char *)v54 + 1);
      v55.m_data = v31;
      v58 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)v52.m_data);
      v52.m_data = 0;
      v52.m_bufLen = 0;
      v52.m_dataLen = 0;
      if ( !v31 )
        break;
      v16 = v55.m_data;
    }
  }
  v52.m_data = 0;
  v52.m_dataLen = 0;
  v52.m_bufLen = 0;
  v32 = (Actor *)TESDataHandler_g_PlayerRef;
  v58 = 1;
  v33 = sub_5E4420(v32);
  v34 = v33 / 0xF4240 - 0x3E8 * (v33 / 0x3B9ACA00);
  v35 = v33 / 0x3E8 - 0x3E8 * (v33 / 0xF4240);
  if ( v33 / 0x3B9ACA00 )
  {
    BSStringT_Static_Format(&v52, "%d,%03d,%03d,%03d", v33 / 0x3B9ACA00, v34, v35, v33 % 0x3E8);
  }
  else if ( v34 )
  {
    BSStringT_Static_Format(&v52, "%d,%03d,%03d", v34, v35, v33 % 0x3E8);
  }
  else if ( v35 < 0xA )
  {
    BSStringT_Static_Format(&v52, "%d", v33);
  }
  else
  {
    BSStringT_Static_Format(&v52, "%d,%03d", v35, v33 % 0x3E8);
  }
  v36 = v52.m_data;
  Tile_SetString(*(_DWORD **)(v53 + 0x40), (_DWORD *)0xFDE, v52.m_data);
  FormHeapFree((unsigned int)v36);
}
