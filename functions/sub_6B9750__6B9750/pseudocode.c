void __thiscall sub_6B9750(_DWORD *this, signed int *arg0, int a3, unsigned int a4, char *a2)
{
  double v9; // st6
  _DWORD *v10; // edi
  unsigned int v11; // edx
  _DWORD *v12; // ecx
  float v13; // [esp+4h] [ebp-13Ch]
  float v14; // [esp+4h] [ebp-13Ch]
  float v15; // [esp+4h] [ebp-13Ch]
  const char *v16; // [esp+Ch] [ebp-134h]
  float v17; // [esp+24h] [ebp-11Ch]
  float v18; // [esp+24h] [ebp-11Ch]
  BSStringT v19; // [esp+28h] [ebp-118h] BYREF
  int v20[68]; // [esp+30h] [ebp-110h] BYREF

  v19.m_data = 0; /*0x6b97a3*/
  v19.m_dataLen = 0; /*0x6b97a7*/
  v19.m_bufLen = 0; /*0x6b97ac*/
  BSStringT_Set(&v19, a2, 0); /*0x6b97b1*/
  v16 = (const char *)this[2]; /*0x6b97b9*/
  v20[0x43] = 0; /*0x6b97c5*/
  _sprintf((char *)v20, "%s%s", a2, v16); /*0x6b97cc*/
  v13 = (float)*arg0; /*0x6b97dd*/
  InterfaceMgr_DebugTextLine((char *)v20, 0.0, v13, 1, 0xFFFFFFFF); /*0x6b97eb*/
  _sprintf((char *)v20, "%u", this[9] / 0x64u); /*0x6b9808*/
  v14 = (float)*arg0; /*0x6b9817*/
  v17 = UI_GetVirtualScreenWidth() * dbl_A46B08 / fCostant_100; /*0x6b9830*/
  v9 = v17; /*0x6b9834*/
  InterfaceMgr_DebugTextLine((char *)v20, v17, v14, 1, 0xFFFFFFFF); /*0x6b983c*/
  _sprintf((char *)v20, "%u", 0x64 * this[9] / a4); /*0x6b985d*/
  v15 = (float)*arg0; /*0x6b986c*/
  v18 = UI_GetVirtualScreenWidth() * dbl_A78850 / fCostant_100; /*0x6b9885*/
  InterfaceMgr_DebugTextLine((char *)v20, v18, v15, 1, 0xFFFFFFFF); /*0x6b9891*/
  *arg0 += a3; /*0x6b989d*/
  BSStringT_Append(&v19, (char *)&word_A403A0); /*0x6b98ab*/
  v10 = (_DWORD *)this[5]; /*0x6b98b0*/
  if ( v10 ) /*0x6b98b5*/
  {
    v11 = a4 / 0x64; /*0x6b98be*/
    do /*0x6b98e9*/
    {
      v12 = (_DWORD *)v10[2]; /*0x6b98c5*/
      if ( v12[9] > v11 ) /*0x6b98cb*/
      {
        sub_6B9750(v12, 0.0, v9, v18, arg0, a3, a4, v19.m_data); /*0x6b98dc*/
        v11 = a4 / 0x64; /*0x6b98e1*/
      }
      v10 = (_DWORD *)*v10; /*0x6b98e5*/
    }
    while ( v10 ); /*0x6b98e9*/
  }
  FormHeapFree((unsigned int)v19.m_data); /*0x6b98f0*/
}
