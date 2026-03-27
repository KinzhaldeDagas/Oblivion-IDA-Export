void __thiscall sub_5C6EA0(_DWORD *this)
{
  TESForm *v2; // ebx
  Data *data; // esi
  int a2; // eax
  Data *v5; // esi
  int IsFemale; // eax
  char v7; // al
  const char *v8; // eax
  const char *v9; // eax
  Tile *v10; // esi
  const char *v11; // eax
  const char *v12; // eax
  _DWORD *v13; // eax
  BSStringT v14; // [esp-14h] [ebp-44h] BYREF
  BSStringT v15; // [esp-Ch] [ebp-3Ch] BYREF
  BSStringT v16; // [esp-4h] [ebp-34h] BYREF
  char v17; // [esp+1Bh] [ebp-15h]
  BSStringT *v18; // [esp+1Ch] [ebp-14h]
  BSStringT *v19; // [esp+20h] [ebp-10h]
  int v20; // [esp+2Ch] [ebp-4h]

  v2 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  data = v2[9].member.modlist.data;
  a2 = TESActorBase_IsFemale(v2);
  if ( sub_52B490(data, a2) )
  {
    v5 = v2[9].member.modlist.data;
    IsFemale = TESActorBase_IsFemale(v2);
    v2[0x13].vtbl = (TESFormVtbl *)sub_52B490(v5, IsFemale);
  }
  v7 = v2[9].member.modlist.data->name[0x80];
  v18 = &v16;
  v17 = v7;
  v8 = (const char *)dword_B39330;
  v16.m_data = 0;
  *(_DWORD *)&v16.m_dataLen = 0;
  BSStringT_Set(&v16, v8, 0);
  v9 = (const char *)dword_B38F88;
  v19 = &v15;
  v20 = 0;
  v15.m_data = 0;
  v15.m_dataLen = 0;
  v15.m_bufLen = 0;
  BSStringT_Set(&v15, v9, 0);
  v20 = 0xFFFFFFFF;
  v10 = (Tile *)sub_5C3440(
                  this,
                  v15.m_data,
                  *(int *)&v15.m_dataLen,
                  (unsigned __int8 *)v16.m_data,
                  *(int *)&v16.m_dataLen);
  *(float *)&v16.m_dataLen = -Tile_GetFloat(v10, 0xFAE);
  Tile_SetFloat(v10, (_DWORD *)0xFB1, *(float *)&v16.m_dataLen);
  v18 = (BSStringT *)v17;
  *(float *)&v16.m_dataLen = (float)v17;
  Tile_SetFloat(v10, (_DWORD *)0xFB1, *(float *)&v16.m_dataLen);
  Tile_SetFloat(v10, (_DWORD *)0xFB1, 0.0);
  LOBYTE(v18) = v2[9].member.modlist.data->name[0x80];
  *(_DWORD *)&v16.m_dataLen = sub_52B780((char)v18);
  v11 = (const char *)dword_B39330;
  v16.m_data = (char *)0xFB4;
  v19 = &v15;
  v15.m_data = 0;
  v15.m_dataLen = 0;
  v15.m_bufLen = 0;
  BSStringT_Set(&v15, v11, 0);
  v12 = (const char *)dword_B38F88;
  v20 = 1;
  v18 = &v14;
  v14.m_data = 0;
  v14.m_dataLen = 0;
  v14.m_bufLen = 0;
  BSStringT_Set(&v14, v12, 0);
  v20 = 0xFFFFFFFF;
  v13 = (_DWORD *)sub_5C3440(
                    this,
                    v14.m_data,
                    *(int *)&v14.m_dataLen,
                    (unsigned __int8 *)v15.m_data,
                    *(int *)&v15.m_dataLen);
  Tile_SetString(v13, v16.m_data, *(char **)&v16.m_dataLen);
  sub_5C5F00(this);
  sub_5C34D0(this);
}
