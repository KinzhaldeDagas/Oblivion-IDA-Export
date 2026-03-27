void __usercall sub_513E90(
        unsigned int ebp0@<ebp>,
        double a2@<st2>,
        double st6_0@<st1>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  char *Name; // eax
  char *m_data; // esi
  double v13; // st7
  char *v14; // eax
  char *v15; // [esp-4h] [ebp-40h]
  float v16; // [esp+0h] [ebp-3Ch]
  float v17; // [esp+4h] [ebp-38h]
  float v18; // [esp+10h] [ebp-2Ch]
  int v19; // [esp+14h] [ebp-28h]
  UInt16 v20[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v21; // [esp+24h] [ebp-18h]
  BSStringT v22; // [esp+28h] [ebp-14h] BYREF
  int v23; // [esp+38h] [ebp-4h]

  *(_DWORD *)v20 = 0;
  if ( Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v20) )
  {
    if ( *(_DWORD *)v20 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_DWORD *)v20 + 4) - 0x31 <= 2 )
      {
        v22.m_data = 0;
        *(_DWORD *)&v22.m_dataLen = 0;
        v19 = *(_DWORD *)(*(_DWORD *)v20 + 0xC);
        v23 = 0;
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)v20);
        BSStringT_Static_Format(&v22, "\"%s\" (%08x)", Name, v19);
        m_data = v22.m_data;
        v18 = flt_A30634;
        v21 = iDebugTextTopBottomOffset + 0x14;
        v17 = (float)v21;
        v13 = flt_A4D6FC;
        v16 = flt_A4D6FC;
        v15 = v22.m_data;
        v14 = (char *)sub_571F90(1);
        sub_5723E0(v14, ebp0, a2, st6_0, v13, v15, v16, v17, 2, 0xFFFFFFFF, v18, 0);
        sub_57C980(ebp0, a2, st6_0, v13, *(TESObjectREFR **)v20);
        FormHeapFree((unsigned int)m_data);
      }
    }
  }
}
