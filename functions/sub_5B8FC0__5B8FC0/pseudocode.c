void __thiscall sub_5B8FC0(_DWORD **this, int a2)
{
  char *m_data; // edx
  unsigned int m_dataLen; // eax
  int v5; // esi
  int v6; // edi
  double v7; // st7
  bool v8; // c0
  bool v9; // c3
  const char *v10; // ebp
  char *v11; // esi
  char *v12; // [esp-10h] [ebp-48h]
  char *v13; // [esp-10h] [ebp-48h]
  BSStringT v14; // [esp+10h] [ebp-28h] BYREF
  _DWORD **v15; // [esp+18h] [ebp-20h]
  BSStringT v16; // [esp+1Ch] [ebp-1Ch] BYREF
  BSStringT v17; // [esp+24h] [ebp-14h] BYREF
  int v18; // [esp+34h] [ebp-4h]
  float GameHour; // [esp+3Ch] [ebp+4h]

  v15 = this;
  v16.m_data = 0;
  v16.m_dataLen = 0;
  v16.m_bufLen = 0;
  v18 = 0;
  switch ( a2 )
  {
    case '4':
      BSStringT_Set(&v16, (const char *)dword_B39468, 0);
      break;
    case '3':
      BSStringT_Set(&v16, (const char *)dword_B39460, 0);
      break;
    case '6':
      BSStringT_Set(&v16, (const char *)dword_B39458, 0);
      break;
    case '5':
      BSStringT_Set(&v16, (const char *)dword_B39470, 0);
      break;
    default:
      GetTeleportCellName((TESObjectREFR *)TESDataHandler_g_PlayerRef, &v16);
      break;
  }
  m_data = v16.m_data;
  if ( !v16.m_data
    || (v16.m_dataLen != (__int16)0xFFFF
      ? (m_dataLen = (unsigned __int16)v16.m_dataLen)
      : (m_dataLen = strlen(v16.m_data)),
        !m_dataLen) )
  {
    BSStringT_Set(&v16, "Tamriel", 0);
    m_data = v16.m_data;
  }
  Tile_SetString(*(this + 1), (_DWORD *)0xFAF, m_data);
  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  v5 = Double_To_SInt32(GameHour);
  v14.m_data = (char *)v5;
  v6 = Double_To_SInt32((GameHour - (double)v5) * dbl_A2FCC8);
  if ( v5 >= 1 )
  {
    if ( v5 > 0xC )
      v5 -= 0xC;
  }
  else
  {
    v5 = 0xC;
  }
  FormHeapFree(0);
  v14.m_data = 0;
  v14.m_bufLen = 0;
  v14.m_dataLen = 0;
  v7 = flt_A2F918;
  v8 = v7 < GameHour;
  v9 = v7 == GameHour;
  LOBYTE(v18) = 1;
  v10 = "pm";
  if ( v6 >= 0xA )
  {
    if ( !v8 && !v9 )
      v10 = "am";
    v13 = sub_402E50((int *)&TimeGlobals, v7, &v17)->m_data;
    LOBYTE(v18) = 3;
    BSStringT_Static_Format(&v14, "%s %i:%i %s", v13, v5, v6, v10);
  }
  else
  {
    if ( !v8 && !v9 )
      v10 = "am";
    v12 = sub_402E50((int *)&TimeGlobals, v7, &v17)->m_data;
    LOBYTE(v18) = 2;
    BSStringT_Static_Format(&v14, "%s %i:0%i %s", v12, v5, v6, v10);
  }
  LOBYTE(v18) = 1;
  FormHeapFree((unsigned int)v17.m_data);
  v11 = v14.m_data;
  Tile_SetString(v15[1], (_DWORD *)0xFB0, v14.m_data);
  FormHeapFree((unsigned int)v11);
  FormHeapFree((unsigned int)v16.m_data);
}
