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

  v15 = this; /*0x5b8fe8*/
  v16.m_data = 0; /*0x5b8fee*/
  v16.m_dataLen = 0; /*0x5b8ff2*/
  v16.m_bufLen = 0; /*0x5b8ff7*/
  v18 = 0; /*0x5b9003*/
  switch ( a2 ) /*0x5b9007*/
  {
    case '4': /*0x5b9007*/
      BSStringT_Set(&v16, (const char *)stru_B39468, 0); /*0x5b9014*/
      break;
    case '3': /*0x5b9007*/
      BSStringT_Set(&v16, (const char *)stru_B39460, 0); /*0x5b902c*/
      break;
    case '6': /*0x5b9007*/
      BSStringT_Set(&v16, (const char *)stru_B39458, 0); /*0x5b9044*/
      break;
    case '5': /*0x5b9007*/
      BSStringT_Set(&v16, (const char *)stru_B39470, 0); /*0x5b9057*/
      break;
    default:
      GetTeleportCellName((TESObjectREFR *)reference, &v16); /*0x5b9065*/
      break;
  }
  m_data = v16.m_data; /*0x5b906a*/
  if ( !v16.m_data
    || (v16.m_dataLen != (__int16)0xFFFF
      ? (m_dataLen = (unsigned __int16)v16.m_dataLen)
      : (m_dataLen = strlen(v16.m_data)),
        !m_dataLen) )
  {
    BSStringT_Set(&v16, "Tamriel", 0); /*0x5b90a0*/
    m_data = v16.m_data; /*0x5b90a5*/
  }
  Tile_SetString(*(this + 1), (_DWORD *)0xFAF, m_data); /*0x5b90b2*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x5b90c1*/
  v5 = Double_To_SInt32(GameHour); /*0x5b90d0*/
  v14.m_data = (char *)v5; /*0x5b90d2*/
  v6 = Double_To_SInt32((GameHour - (double)v5) * dbl_A2FCC8); /*0x5b90e8*/
  if ( v5 >= 1 ) /*0x5b90ea*/
  {
    if ( v5 > 0xC ) /*0x5b90f6*/
      v5 -= 0xC; /*0x5b90f8*/
  }
  else
  {
    v5 = 0xC; /*0x5b90ec*/
  }
  FormHeapFree(0); /*0x5b90fc*/
  v14.m_data = 0; /*0x5b9104*/
  v14.m_bufLen = 0; /*0x5b9108*/
  v14.m_dataLen = 0; /*0x5b910d*/
  v7 = flt_A2F918; /*0x5b9112*/
  v8 = v7 < GameHour; /*0x5b911b*/
  v9 = v7 == GameHour; /*0x5b911b*/
  LOBYTE(v18) = 1; /*0x5b911f*/
  v10 = "pm"; /*0x5b9124*/
  if ( v6 >= 0xA ) /*0x5b912b*/
  {
    if ( !v8 && !v9 ) /*0x5b9158*/
      v10 = "am"; /*0x5b915d*/
    v13 = TimeGlobals_FormatGameDate((int *)&MEMORY[0xB332E0], v7, &v17)->m_data; /*0x5b9176*/
    LOBYTE(v18) = 3; /*0x5b9177*/
    BSStringT_Static_Format(&v14, "%s %i:%i %s", v13, v5, v6, v10); /*0x5b9186*/
  }
  else
  {
    if ( !v8 && !v9 ) /*0x5b912d*/
      v10 = "am"; /*0x5b9132*/
    v12 = TimeGlobals_FormatGameDate((int *)&MEMORY[0xB332E0], v7, &v17)->m_data; /*0x5b914b*/
    LOBYTE(v18) = 2; /*0x5b914c*/
    BSStringT_Static_Format(&v14, "%s %i:0%i %s", v12, v5, v6, v10); /*0x5b9156*/
  }
  LOBYTE(v18) = 1; /*0x5b9190*/
  FormHeapFree((unsigned int)v17.m_data); /*0x5b9195*/
  v11 = v14.m_data; /*0x5b919a*/
  Tile_SetString(v15[1], (_DWORD *)0xFB0, v14.m_data); /*0x5b91ae*/
  FormHeapFree((unsigned int)v11); /*0x5b91b4*/
  FormHeapFree((unsigned int)v16.m_data); /*0x5b91be*/
}
