void __cdecl sub_57C980(TESObjectREFR *a1)
{
  InterfaceManager *Singleton; // eax
  char *m_data; // edi
  char *Name; // eax
  float *v7; // eax
  InterfaceManager *v8; // eax
  char *v9; // [esp-4h] [ebp-40h]
  float v10; // [esp+0h] [ebp-3Ch]
  float v11; // [esp+4h] [ebp-38h]
  float v12; // [esp+10h] [ebp-2Ch]
  UInt32 refID; // [esp+14h] [ebp-28h]
  BSStringT v14; // [esp+28h] [ebp-14h] BYREF
  int v15; // [esp+38h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57c9a9*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57c9c5*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57c9db*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57c9e9*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57ca0b*/
        {
          m_data = 0; /*0x57ca11*/
          v14.m_data = 0; /*0x57ca13*/
          v14.m_dataLen = 0; /*0x57ca17*/
          v14.m_bufLen = 0; /*0x57ca1c*/
          v15 = 0; /*0x57ca27*/
          if ( a1 ) /*0x57ca2b*/
          {
            refID = a1->member.super.refID; /*0x57ca30*/
            Name = TESObjectREFR_GetName(a1); /*0x57ca33*/
            BSStringT_Static_Format(&v14, "\"%s\" (%08x)", Name, refID); /*0x57ca43*/
            m_data = v14.m_data; /*0x57ca52*/
            v12 = kTerrainLODQuadRayDirectionZ; /*0x57ca5d*/
            v11 = (float)(iDebugTextTopBottomOffset + 0x14); /*0x57ca72*/
            v10 = flt_A4D6FC; /*0x57ca7c*/
            v9 = v14.m_data; /*0x57ca7f*/
            v7 = sub_571F90(1); /*0x57ca82*/
            sub_5723E0((char *)v7, v9, v10, v11, 2, 0xFFFFFFFF, v12, 0); /*0x57ca8c*/
          }
          v8 = InterfaceManager_GetSingleton(0, 1); /*0x57ca96*/
          sub_57CF50(v8, (int)a1); /*0x57caa0*/
          FormHeapFree((unsigned int)m_data); /*0x57caa6*/
        }
      }
    }
  }
}
