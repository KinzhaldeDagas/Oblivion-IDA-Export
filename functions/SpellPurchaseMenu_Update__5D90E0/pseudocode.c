// positive sp value has been detected, the output may be wrong!
void __thiscall SpellPurchaseMenu_Update(int this)
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
  OblivionMenuFadeState v18; // eax
  int v19; // ebx
  BSStringT *v20; // esi
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
  _DWORD *v38; // [esp+8h] [ebp-154h]
  int v39; // [esp+Ch] [ebp-150h]
  int v40; // [esp+10h] [ebp-14Ch]
  _DWORD *v41; // [esp+10h] [ebp-14Ch]
  float v42; // [esp+10h] [ebp-14Ch]
  int (__cdecl *v43)(int, _DWORD); // [esp+14h] [ebp-148h]
  float v44; // [esp+14h] [ebp-148h]
  float v45; // [esp+14h] [ebp-148h]
  float v46; // [esp+14h] [ebp-148h]
  int v47; // [esp+18h] [ebp-144h]
  int value; // [esp+1Ch] [ebp-140h]
  _DWORD *v49; // [esp+20h] [ebp-13Ch]
  _DWORD *v50; // [esp+24h] [ebp-138h]
  _DWORD *v51; // [esp+28h] [ebp-134h]
  float v52; // [esp+28h] [ebp-134h]
  float v53; // [esp+28h] [ebp-134h]
  float v54; // [esp+28h] [ebp-134h]
  BSStringT v55; // [esp+2Ch] [ebp-130h] BYREF
  int v56; // [esp+34h] [ebp-128h]
  Menu *v57; // [esp+38h] [ebp-124h]
  BSStringT v58; // [esp+3Ch] [ebp-120h]
  Tile *a2; // [esp+48h] [ebp-114h]
  char a3[8]; // [esp+4Ch] [ebp-110h] BYREF
  int v61; // [esp+158h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+15Ch] [ebp+0h]

  v4 = this; /*0x5d911b*/
  v5 = *(_DWORD **)(*(_DWORD *)(this + 0x2C) + 0x34); /*0x5d9120*/
  while ( v5 ) /*0x5d912b*/
  {
    v6 = (void (__thiscall ***)(_DWORD))v5[2]; /*0x5d9130*/
    v5 = (_DWORD *)*v5; /*0x5d9138*/
    if ( v6 ) /*0x5d913a*/
    {
      v37 = 1; /*0x5d9140*/
      (**v6)(v6); /*0x5d9142*/
    }
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(v4 + 0x2C) + 0x30)); /*0x5d914e*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x5d915a*/
  v8 = *(_DWORD *)(v4 + 0x64) == 0; /*0x5d9165*/
  v9 = (char *)(v4 + 0x60); /*0x5d9168*/
  p_modlist = &ActorBaseForm[3].member.modlist; /*0x5d916b*/
  LOBYTE(v51) = 0; /*0x5d916e*/
  v56 = *(_DWORD *)(v4 + 0x2C); /*0x5d9172*/
  if ( !v8 ) /*0x5d9176*/
  {
    do /*0x5d918c*/
    {
      v11 = *(_DWORD *)(*((_DWORD *)v9 + 1) + 4); /*0x5d917b*/
      FormHeapFree(*((_DWORD *)v9 + 1)); /*0x5d917f*/
      *((_DWORD *)v9 + 1) = v11; /*0x5d9189*/
    }
    while ( v11 ); /*0x5d918c*/
    v4 = (int)v50; /*0x5d918e*/
  }
  *(_DWORD *)v9 = 0; /*0x5d9192*/
  p_refID = &Actor_GetActorBaseForm(*(Actor **)(v4 + 0x50), 0)[3].member.refID; /*0x5d919d*/
  v13 = (int *)(p_refID + 1); /*0x5d91a0*/
  if ( p_refID != (UInt32 *)0xFFFFFFFC ) /*0x5d91a5*/
  {
    do /*0x5d91e1*/
    {
      if ( !*v13 ) /*0x5d91a7*/
        break; /*0x5d91ab*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(*v13 + 0x18) + 0x18))(*v13 + 0x18) ) /*0x5d91b6*/
      {
        v14 = *v13; /*0x5d91be*/
        v15 = p_modlist; /*0x5d91c0*/
        if ( p_modlist ) /*0x5d91c2*/
        {
          while ( v15->data != (Data *)v14 ) /*0x5d91c6*/
          {
            v15 = v15->next; /*0x5d91c8*/
            if ( !v15 ) /*0x5d91cd*/
              goto LABEL_14; /*0x5d91cd*/
          }
        }
        else
        {
LABEL_14:
          BSSimpleList_InsertSorted(v9, v14, (int)sub_5D8FD0, v37, v38, v39, v40, v43); /*0x5d91cf*/
        }
      }
      v13 = (int *)v13[1]; /*0x5d91dc*/
    }
    while ( v13 ); /*0x5d91e1*/
  }
  v16 = v9; /*0x5d91e3*/
  v17 = 0; /*0x5d91e5*/
  for ( *(_DWORD *)&v58.m_dataLen = v9; v9; v9 = *((char **)v9 + 1) ) /*0x5d91ed*/
  {
    if ( *(_DWORD *)v9 ) /*0x5d91f0*/
      ++v17; /*0x5d91f4*/
  }
  v18 = v17 - 1; /*0x5d9202*/
  if ( v57[1].members.fadeState > v18 ) /*0x5d9208*/
    v57[1].members.fadeState = v18; /*0x5d920a*/
  if ( v16 ) /*0x5d920f*/
  {
    while ( 1 ) /*0x5d921b*/
    {
      v19 = *(_DWORD *)v16; /*0x5d921b*/
      if ( !*(_DWORD *)v16 ) /*0x5d921b*/
        break; /*0x5d921b*/
      *(_DWORD *)&v55.m_dataLen = 0; /*0x5d922f*/
      v56 = 0; /*0x5d9233*/
      BSStringT_Set((BSStringT *)&v55.m_dataLen, "spell_item_template", 0); /*0x5d923d*/
      retaddr = 0; /*0x5d9251*/
      v20 = (BSStringT *)Menu::RenderTemplate(v57, a2, *(const char **)&v55.m_dataLen, 0); /*0x5d925d*/
      if ( v20 ) /*0x5d9261*/
      {
        m_data = v58.m_data; /*0x5d9267*/
        if ( v58.m_data == (char *)v57[1].members.fadeState ) /*0x5d9272*/
        {
          InterfaceManager_GetSingleton(0, 1); /*0x5d9277*/
          Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d927f*/
          v23 = (double)(int)++Singleton->unk08C; /*0x5d928b*/
          if ( (int)Singleton->unk08C < 0 ) /*0x5d929e*/
            v23 = v23 + flt_A2FC78; /*0x5d92a0*/
          v44 = v23; /*0x5d92a9*/
          Tile_SetFloat((Tile *)v20, 0xFF0u, v44); /*0x5d92b3*/
        }
        v45 = (float)(int)v58.m_data; /*0x5d92bf*/
        Tile_SetFloat((Tile *)v20, 0xFAEu, v45); /*0x5d92c7*/
        v55.m_data = m_data + 0x3E8; /*0x5d92d2*/
        v46 = (float)(int)(m_data + 0x3E8); /*0x5d92dd*/
        Tile_SetFloat((Tile *)v20, 0xFA8u, v46); /*0x5d92e5*/
        v24 = (double (__thiscall ***)(_DWORD, PlayerCharacter *))(v19 + 0x24); /*0x5d92eb*/
        v25 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem( /*0x5d92fa*/
                                             (_DWORD *)(v19 + 0x24),
                                             3,
                                             0,
                                             v47,
                                             value,
                                             (int)v49,
                                             (int)v50,
                                             (char)v51)
                                         + 0x1C)
                             + 0x48);
        if ( !v25 ) /*0x5d92ff*/
          v25 = EmptyString; /*0x5d9301*/
        _sprintf(a3, "%s\\%s", "Icons", v25); /*0x5d9316*/
        Tile_SetString(v20, (_DWORD *)0xFAF, a3); /*0x5d932a*/
        v26 = *(const char **)(v19 + 0x1C); /*0x5d932f*/
        if ( !v26 ) /*0x5d9334*/
          v26 = EmptyString; /*0x5d9336*/
        _sprintf(a3, "%s_%d", v26, v58.m_data); /*0x5d934b*/
        BSStringT_Set(v20 + 1, a3, 0); /*0x5d935c*/
        v27 = *(char **)(v19 + 0x1C); /*0x5d9361*/
        if ( !v27 ) /*0x5d9366*/
          v27 = EmptyString; /*0x5d9368*/
        Tile_SetString(v20, (_DWORD *)0xFB1, v27); /*0x5d9375*/
        v28 = (**v24)(v24, reference); /*0x5d9386*/
        v52 = (float)Double_To_SInt32(v28); /*0x5d9398*/
        Tile_SetFloat((Tile *)v20, 0xFB3u, v52); /*0x5d93a8*/
        v29 = v52 * flt_B37ED0[0x44]; /*0x5d93b1*/
        v30 = Double_To_SInt32(v29); /*0x5d93bc*/
        v41 = *(_DWORD **)(v56 + 0x50); /*0x5d93c5*/
        *(_DWORD *)&v58.m_dataLen = v30; /*0x5d93cc*/
        Player_GetActorBarterFactor_(v41); /*0x5d93d0*/
        v53 = v29; /*0x5d93d5*/
        v54 = v53 - (double)(int)reference->unk11C * dbl_A3D8E8; /*0x5d93f1*/
        v51 = (_DWORD *)Double_To_SInt32((double)*(int *)&v58.m_dataLen * v54); /*0x5d9404*/
        if ( (int)v51 < v30 ) /*0x5d9408*/
          v51 = (_DWORD *)v30; /*0x5d940a*/
        v42 = (float)(int)v51; /*0x5d9415*/
        Tile_SetFloat((Tile *)v20, 0xFB7u, v42); /*0x5d941d*/
        v16 = v58.m_data; /*0x5d9422*/
      }
      v31 = *((char **)v16 + 1); /*0x5d942a*/
      v57 = (Menu *)((char *)v57 + 1); /*0x5d942d*/
      v58.m_data = v31; /*0x5d9433*/
      v61 = 0xFFFFFFFF; /*0x5d9437*/
      FormHeapFree((unsigned int)v55.m_data); /*0x5d9442*/
      v55.m_data = 0; /*0x5d944c*/
      v55.m_bufLen = 0; /*0x5d9450*/
      v55.m_dataLen = 0; /*0x5d9455*/
      if ( !v31 ) /*0x5d945a*/
        break; /*0x5d945a*/
      v16 = v58.m_data; /*0x5d9217*/
    }
  }
  v55.m_data = 0; /*0x5d9460*/
  v55.m_dataLen = 0; /*0x5d9464*/
  v55.m_bufLen = 0; /*0x5d9469*/
  v32 = (Actor *)reference; /*0x5d946e*/
  v61 = 1; /*0x5d9474*/
  v33 = sub_5E4420(v32); /*0x5d9484*/
  v34 = v33 / 0xF4240 - 0x3E8 * (v33 / 0x3B9ACA00); /*0x5d94b9*/
  v35 = v33 / 0x3E8 - 0x3E8 * (v33 / 0xF4240); /*0x5d94cd*/
  if ( v33 / 0x3B9ACA00 ) /*0x5d9495*/
  {
    BSStringT_Static_Format(&v55, "%d,%03d,%03d,%03d", v33 / 0x3B9ACA00, v34, v35, v33 % 0x3E8); /*0x5d94ed*/
  }
  else if ( v34 ) /*0x5d94f9*/
  {
    BSStringT_Static_Format(&v55, "%d,%03d,%03d", v34, v35, v33 % 0x3E8); /*0x5d9508*/
  }
  else if ( v35 < 0xA ) /*0x5d9515*/
  {
    BSStringT_Static_Format(&v55, "%d", v33); /*0x5d9538*/
  }
  else
  {
    BSStringT_Static_Format(&v55, "%d,%03d", v35, v33 % 0x3E8); /*0x5d9523*/
  }
  v36 = v55.m_data; /*0x5d9540*/
  Tile_SetString(*(_DWORD **)(v56 + 0x40), (_DWORD *)0xFDE, v55.m_data); /*0x5d9551*/
  FormHeapFree((unsigned int)v36); /*0x5d9557*/
}
