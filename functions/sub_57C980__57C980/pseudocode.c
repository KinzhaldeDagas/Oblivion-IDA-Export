void __usercall sub_57C980(char a1@<bpl>, double a2@<st2>, double a3@<st1>, TESObjectREFR *a4)
{
  InterfaceManager *Singleton; // eax
  char *m_data; // edi
  char *Name; // eax
  double v8; // st7
  float *v9; // eax
  InterfaceManager *v10; // eax
  char *v11; // [esp-4h] [ebp-40h]
  float v12; // [esp+0h] [ebp-3Ch]
  float v13; // [esp+4h] [ebp-38h]
  float v14; // [esp+10h] [ebp-2Ch]
  UInt32 refID; // [esp+14h] [ebp-28h]
  BSStringT v16; // [esp+28h] [ebp-14h] BYREF
  int v17; // [esp+38h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          m_data = 0;
          v16.m_data = 0;
          v16.m_dataLen = 0;
          v16.m_bufLen = 0;
          v17 = 0;
          if ( a4 )
          {
            refID = a4->member.super.refID;
            Name = TESObjectREFR_GetName(a4);
            BSStringT_Static_Format(&v16, "\"%s\" (%08x)", Name, refID);
            m_data = v16.m_data;
            v14 = flt_A30634;
            v13 = (float)(iDebugTextTopBottomOffset + 0x14);
            v8 = flt_A4D6FC;
            v12 = flt_A4D6FC;
            v11 = v16.m_data;
            v9 = sub_571F90(1);
            sub_5723E0((char *)v9, a1, a2, a3, v8, v11, v12, v13, 2, 0xFFFFFFFF, v14, 0);
          }
          v10 = InterfaceManager_GetSingleton(0, 1);
          sub_57CF50(v10, (int)a4);
          FormHeapFree((unsigned int)m_data);
        }
      }
    }
  }
}
