void __usercall sub_514500(
        char bp0@<bpl>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  double v12; // st5
  double v13; // st5
  double v14; // st6
  double v15; // st5
  char *m_data; // esi
  BSStringT v17; // [esp+8h] [ebp-34h] BYREF
  float v18; // [esp+18h] [ebp-24h] BYREF
  UInt16 v19[2]; // [esp+1Ch] [ebp-20h] BYREF
  float v20; // [esp+20h] [ebp-1Ch]
  float v21; // [esp+24h] [ebp-18h]
  BSStringT a2; // [esp+28h] [ebp-14h] BYREF
  int v23; // [esp+38h] [ebp-4h]

  v18 = flt_B430A4;
  *(float *)v19 = flt_B430A8;
  if ( Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v19, &v18) )
  {
    v20 = flt_B430A4;
    a2.m_data = 0;
    v12 = flt_B430A8;
    *(_DWORD *)&a2.m_dataLen = 0;
    v21 = v12;
    v13 = v21;
    v23 = 0;
    BSStringT_Static_Format(&a2, "Old values:   [ Local Trees: %f | LOD Trees: %f ]", v21, v20);
    v21 = COERCE_FLOAT(&v17);
    v17 = 0;
    BSStringT_Set(&v17, a2.m_data, 0);
    sub_57C370(bp0, v13, st6_0, st7_0, v17.m_data, *(int *)&v17.m_dataLen);
    v14 = v18;
    flt_B430A4 = v18;
    v15 = *(float *)v19;
    flt_B430A8 = *(float *)v19;
    BSStringT_Static_Format(&a2, "New values:   [ Local Trees: %f | LOD Trees: %f ]", v15, v14);
    v21 = COERCE_FLOAT(&v17);
    v17 = 0;
    m_data = a2.m_data;
    BSStringT_Set(&v17, a2.m_data, 0);
    sub_57C370(bp0, v14, v15, st7_0, v17.m_data, *(int *)&v17.m_dataLen);
    FormHeapFree((unsigned int)m_data);
  }
}
