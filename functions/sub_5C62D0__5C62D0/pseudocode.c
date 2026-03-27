char __thiscall sub_5C62D0(_DWORD *this)
{
  const char *v2; // eax
  const char *v3; // eax
  _DWORD *v4; // eax
  TESForm *v5; // eax
  BSStringT v7; // [esp-14h] [ebp-34h] BYREF
  BSStringT v8; // [esp-Ch] [ebp-2Ch] BYREF
  int v9; // [esp-4h] [ebp-24h]
  float Float; // [esp+Ch] [ebp-14h]
  BSStringT *v11; // [esp+10h] [ebp-10h]
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v2 = (const char *)dword_B38FD8;
  v9 = 0xFAE;
  Float = COERCE_FLOAT(&v8);
  v8.m_data = 0;
  v8.m_dataLen = 0;
  v8.m_bufLen = 0;
  BSStringT_Set(&v8, v2, 0);
  v3 = (const char *)dword_B38F88;
  v11 = &v7;
  v12 = 0;
  v7.m_data = 0;
  v7.m_dataLen = 0;
  v7.m_bufLen = 0;
  BSStringT_Set(&v7, v3, 0);
  v12 = 0xFFFFFFFF;
  v4 = (_DWORD *)sub_5C3440(this, v7.m_data, *(int *)&v7.m_dataLen, (unsigned __int8 *)v8.m_data, *(int *)&v8.m_dataLen);
  Float = Tile_GetFloat(v4, v9);
  v5 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  LOBYTE(v9) = 0;
  *(float *)&v5[0x13].member.type = Float;
  return sub_5C50A0(this, v9);
}
