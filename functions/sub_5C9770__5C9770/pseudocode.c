void __usercall sub_5C9770(float *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESForm *v5; // eax
  TESForm *v6; // ebp
  const char *v7; // eax
  const char *v8; // eax
  _DWORD *v9; // eax
  CHAR *v10; // eax
  char *v11; // ecx
  bool v12; // zf
  int v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  _DWORD *v16; // eax
  void (__thiscall *v17)(UInt32 *, int); // edx
  const char *v18; // eax
  const char *v19; // eax
  _DWORD *v20; // eax
  void (__thiscall *v21)(UInt32 *, int); // eax
  BSStringT v22; // [esp-18h] [ebp-48h] BYREF
  BSStringT v23; // [esp-10h] [ebp-40h] BYREF
  int v24; // [esp-8h] [ebp-38h]
  int v25; // [esp-4h] [ebp-34h]
  __int16 *p_m_dataLen; // [esp+14h] [ebp-1Ch]
  __int16 *v27; // [esp+18h] [ebp-18h]
  BSStringT Str1; // [esp+1Ch] [ebp-14h] BYREF
  int v29; // [esp+2Ch] [ebp-4h]

  v5 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  v25 = 0xFB4;
  p_m_dataLen = &v23.m_dataLen;
  v6 = v5;
  v7 = (const char *)dword_B38FA8;
  *(_DWORD *)&v23.m_dataLen = 0;
  v24 = 0;
  BSStringT_Set((BSStringT *)&v23.m_dataLen, v7, 0);
  v8 = (const char *)dword_B38F78;
  v27 = &v22.m_dataLen;
  v29 = 0;
  *(_DWORD *)&v22.m_dataLen = 0;
  v23.m_data = 0;
  BSStringT_Set((BSStringT *)&v22.m_dataLen, v8, 0);
  v29 = 0xFFFFFFFF;
  v9 = (_DWORD *)sub_5C3440(a1, *(char **)&v22.m_dataLen, (int)v23.m_data, *(unsigned __int8 **)&v23.m_dataLen, v24);
  v10 = sub_588C10(v9, v25);
  Str1.m_data = 0;
  *(_DWORD *)&Str1.m_dataLen = 0;
  BSStringT_Set(&Str1, v10, 0);
  v11 = sMale;
  v12 = sMale == 0;
  v29 = 1;
  if ( v12 || !Str1.m_data )
  {
    v13 = 2 * (v11 == 0) - 1;
  }
  else
  {
    v13 = _strcmp(Str1.m_data, v11);
    v11 = sMale;
  }
  if ( v13 )
  {
    v25 = sFemale;
    v18 = (const char *)dword_B38FA8;
    v24 = 0xFB4;
    v27 = (__int16 *)&v23;
    v23.m_data = 0;
    v23.m_dataLen = 0;
    v23.m_bufLen = 0;
    BSStringT_Set(&v23, v18, 0);
    v19 = (const char *)dword_B38F78;
    p_m_dataLen = (__int16 *)&v22;
    LOBYTE(v29) = 3;
    v22.m_data = 0;
    v22.m_dataLen = 0;
    v22.m_bufLen = 0;
    BSStringT_Set(&v22, v19, 0);
    LOBYTE(v29) = 1;
    v20 = (_DWORD *)sub_5C3440(
                      a1,
                      v22.m_data,
                      *(int *)&v22.m_dataLen,
                      (unsigned __int8 *)v23.m_data,
                      *(int *)&v23.m_dataLen);
    Tile_SetString(v20, (_DWORD *)v24, (char *)v25);
    v21 = *(void (__thiscall **)(UInt32 *, int))(v6[1].member.refID + 0x50);
    v6[1].member.modlist.data = (Data *)((int)v6[1].member.modlist.data & ~1u);
    v21(&v6[1].member.refID, 0x10);
  }
  else
  {
    v14 = (const char *)dword_B38FA8;
    v25 = (int)v11;
    v24 = 0xFB4;
    v27 = (__int16 *)&v23;
    v23.m_data = 0;
    v23.m_dataLen = 0;
    v23.m_bufLen = 0;
    BSStringT_Set(&v23, v14, 0);
    v15 = (const char *)dword_B38F78;
    p_m_dataLen = (__int16 *)&v22;
    LOBYTE(v29) = 2;
    v22.m_data = 0;
    v22.m_dataLen = 0;
    v22.m_bufLen = 0;
    BSStringT_Set(&v22, v15, 0);
    LOBYTE(v29) = 1;
    v16 = (_DWORD *)sub_5C3440(
                      a1,
                      v22.m_data,
                      *(int *)&v22.m_dataLen,
                      (unsigned __int8 *)v23.m_data,
                      *(int *)&v23.m_dataLen);
    Tile_SetString(v16, (_DWORD *)v24, (char *)v25);
    v17 = *(void (__thiscall **)(UInt32 *, int))(v6[1].member.refID + 0x50);
    v6[1].member.modlist.data = (Data *)((int)v6[1].member.modlist.data | 1);
    v17(&v6[1].member.refID, 0x10);
  }
  sub_5C4920(a1);
  sub_5C7070(1);
  UpdatePlayerHead(a2, a3, a4);
  sub_5C7BA0(a1, 0);
  FormHeapFree((unsigned int)Str1.m_data);
}
