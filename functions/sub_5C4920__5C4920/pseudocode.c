void __thiscall sub_5C4920(_DWORD *this)
{
  TESForm *v2; // ebp
  Data *data; // esi
  int IsFemale; // eax
  Data *v5; // esi
  int v6; // eax
  TESFormVtbl **v7; // edi
  const char *v8; // eax
  const char *v9; // eax
  _DWORD *v10; // eax
  char *LoadForm; // eax
  const char *v12; // eax
  const char *v13; // eax
  _DWORD *v14; // eax
  char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  _DWORD *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  Tile *v21; // eax
  BSStringT v22; // [esp-14h] [ebp-44h] BYREF
  BSStringT v23; // [esp-Ch] [ebp-3Ch] BYREF
  int v24; // [esp-4h] [ebp-34h]
  float v25; // [esp+0h] [ebp-30h]
  BSStringT *vtbl; // [esp+18h] [ebp-18h]
  BSStringT *v27; // [esp+1Ch] [ebp-14h]
  BSStringT *p_m_dataLen; // [esp+20h] [ebp-10h]
  int v29; // [esp+2Ch] [ebp-4h]

  v2 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  data = v2[9].member.modlist.data;
  IsFemale = TESActorBase_IsFemale(v2);
  if ( sub_52B490(data, IsFemale) )
  {
    v5 = v2[9].member.modlist.data;
    v6 = TESActorBase_IsFemale(v2);
    v2[0x13].vtbl = (TESFormVtbl *)sub_52B490(v5, v6);
  }
  v7 = (TESFormVtbl **)&v2[9].member.modlist.data->name[0x70];
  vtbl = (BSStringT *)v2[0x13].vtbl;
  if ( vtbl )
  {
    if ( !sub_51FE80(vtbl) || !sub_51FFD0(vtbl, (int)v2) )
    {
      vtbl = 0;
      if ( v7 )
      {
        if ( v7[1] || *v7 )
        {
          do
          {
            if ( !*v7 )
              break;
            if ( sub_51FE80(*v7) && sub_51FFD0(*v7, (int)v2) )
              break;
            v7 = (TESFormVtbl **)v7[1];
            vtbl = (BSStringT *)((char *)vtbl + 1);
          }
          while ( v7 );
        }
      }
      if ( *v7 )
      {
        LoadForm = (char *)(*v7)->LoadForm;
        if ( !LoadForm )
          LoadForm = EmptyString;
        v25 = *(float *)&LoadForm;
        v12 = (const char *)dword_B38F88;
        v24 = 0xFB4;
        v27 = &v23;
        v23.m_data = 0;
        v23.m_dataLen = 0;
        v23.m_bufLen = 0;
        BSStringT_Set(&v23, v12, 0);
        v13 = (const char *)dword_B38F70;
        p_m_dataLen = &v22;
        v29 = 1;
        v22.m_data = 0;
        v22.m_dataLen = 0;
        v22.m_bufLen = 0;
        BSStringT_Set(&v22, v13, 0);
        v29 = 0xFFFFFFFF;
        v14 = (_DWORD *)sub_5C3440(
                          this,
                          v22.m_data,
                          *(int *)&v22.m_dataLen,
                          (unsigned __int8 *)v23.m_data,
                          *(int *)&v23.m_dataLen);
        Tile_SetString(v14, (_DWORD *)v24, (char *)LODWORD(v25));
        v15 = (char *)(*v7)->LoadForm;
        if ( !v15 )
          v15 = EmptyString;
        v25 = *(float *)&v15;
        v16 = (const char *)dword_B38FB8;
        v24 = 0xFB4;
        p_m_dataLen = &v23;
        v23.m_data = 0;
        v23.m_dataLen = 0;
        v23.m_bufLen = 0;
        BSStringT_Set(&v23, v16, 0);
        v17 = (const char *)dword_B38F88;
        v27 = &v22;
        v29 = 2;
        v22.m_data = 0;
        v22.m_dataLen = 0;
        v22.m_bufLen = 0;
        BSStringT_Set(&v22, v17, 0);
        v29 = 0xFFFFFFFF;
        v18 = (_DWORD *)sub_5C3440(
                          this,
                          v22.m_data,
                          *(int *)&v22.m_dataLen,
                          (unsigned __int8 *)v23.m_data,
                          *(int *)&v23.m_dataLen);
        Tile_SetString(v18, (_DWORD *)v24, (char *)LODWORD(v25));
        v19 = (const char *)dword_B38FB8;
        v25 = (float)(int)vtbl;
        p_m_dataLen = (BSStringT *)&v23.m_dataLen;
        *(_DWORD *)&v23.m_dataLen = 0;
        v24 = 0;
        BSStringT_Set((BSStringT *)&v23.m_dataLen, v19, 0);
        v20 = (const char *)dword_B38F88;
        v27 = (BSStringT *)&v22.m_dataLen;
        v29 = 3;
        *(_DWORD *)&v22.m_dataLen = 0;
        v23.m_data = 0;
        BSStringT_Set((BSStringT *)&v22.m_dataLen, v20, 0);
        v29 = 0xFFFFFFFF;
        v21 = (Tile *)sub_5C3440(
                        this,
                        *(char **)&v22.m_dataLen,
                        (int)v23.m_data,
                        *(unsigned __int8 **)&v23.m_dataLen,
                        v24);
        sub_5C2B50(v21, v25);
        *(this + 0x21C) = vtbl;
        v2[0x13].vtbl = *v7;
      }
      else
      {
        v2[0x13].vtbl = 0;
        v25 = *(float *)&dword_B38B80;
        v8 = (const char *)dword_B38F88;
        v24 = 0xFB4;
        vtbl = &v23;
        v23.m_data = 0;
        v23.m_dataLen = 0;
        v23.m_bufLen = 0;
        BSStringT_Set(&v23, v8, 0);
        v9 = (const char *)dword_B38F70;
        v27 = &v22;
        v29 = 0;
        v22.m_data = 0;
        v22.m_dataLen = 0;
        v22.m_bufLen = 0;
        BSStringT_Set(&v22, v9, 0);
        v29 = 0xFFFFFFFF;
        v10 = (_DWORD *)sub_5C3440(
                          this,
                          v22.m_data,
                          *(int *)&v22.m_dataLen,
                          (unsigned __int8 *)v23.m_data,
                          *(int *)&v23.m_dataLen);
        Tile_SetString(v10, (_DWORD *)v24, (char *)LODWORD(v25));
      }
    }
  }
  sub_5C34D0(this);
}
