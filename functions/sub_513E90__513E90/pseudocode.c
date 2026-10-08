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
  float *v14; // eax
  char *v15; // [esp-4h] [ebp-40h]
  float v16; // [esp+0h] [ebp-3Ch]
  float v17; // [esp+4h] [ebp-38h]
  float v18; // [esp+10h] [ebp-2Ch]
  int v19; // [esp+14h] [ebp-28h]
  UInt16 v20[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v21; // [esp+24h] [ebp-18h]
  BSStringT v22; // [esp+28h] [ebp-14h] BYREF
  int v23; // [esp+38h] [ebp-4h]

  *(_DWORD *)v20 = 0; /*0x513ede*/
  if ( Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v20) ) /*0x513ee2*/
  {
    if ( *(_DWORD *)v20 ) /*0x513f05*/
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_DWORD *)v20 + 4) - 0x31 <= 2 ) /*0x513f15*/
      {
        v22.m_data = 0; /*0x513f1b*/
        *(_DWORD *)&v22.m_dataLen = 0; /*0x513f1f*/
        v19 = *(_DWORD *)(*(_DWORD *)v20 + 0xC); /*0x513f2c*/
        v23 = 0; /*0x513f2d*/
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)v20); /*0x513f31*/
        BSStringT_Static_Format(&v22, "\"%s\" (%08x)", Name, v19); /*0x513f41*/
        m_data = v22.m_data; /*0x513f55*/
        v18 = kTerrainLODQuadRayDirectionZ; /*0x513f5a*/
        v21 = iDebugTextTopBottomOffset + 0x14; /*0x513f62*/
        v17 = (float)v21; /*0x513f6f*/
        v13 = flt_A4D6FC; /*0x513f73*/
        v16 = flt_A4D6FC; /*0x513f79*/
        v15 = v22.m_data; /*0x513f7c*/
        v14 = sub_571F90(1); /*0x513f7f*/
        sub_5723E0((char *)v14, ebp0, a2, st6_0, v13, v15, v16, v17, 2, 0xFFFFFFFF, v18, 0); /*0x513f89*/
        sub_57C980(ebp0, a2, st6_0, *(TESObjectREFR **)v20); /*0x513f93*/
        FormHeapFree((unsigned int)m_data); /*0x513f99*/
      }
    }
  }
}
