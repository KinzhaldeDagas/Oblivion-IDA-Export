bool __usercall sub_5069D0@<al>(
        int esi0@<esi>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *a7,
        int a8,
        UInt32 *a3)
{
  bool result; // al
  int v10; // esi
  double v11; // st7
  double v12; // st7
  SIZE_T v13; // [esp+4h] [ebp-18h]
  UInt16 v14[2]; // [esp+10h] [ebp-Ch] BYREF
  SIZE_T dwSize; // [esp+14h] [ebp-8h]

  *(float *)v14 = 0.0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, a7, v14);
  if ( result )
  {
    if ( *(float *)v14 > 0.0 )
    {
      HIDWORD(v13) = esi0;
      dwSize = (__int64)(*(float *)v14 * dbl_A4BEE0);
      v10 = dwSize;
      LODWORD(dwSize) = AviablePhysicalPages();
      v11 = (double)(int)dwSize;
      if ( (int)dwSize < 0 )
        v11 = v11 + flt_A2FC78;
      Interface_ConsolePrint("Free memory [was]: %.3f MB", v11 * dbl_A30530);
      LODWORD(v13) = v10;
      AllocateVirtualPage(v13);
    }
    LODWORD(dwSize) = AviablePhysicalPages();
    v12 = (double)(int)dwSize;
    if ( (int)dwSize < 0 )
      v12 = v12 + flt_A2FC78;
    Interface_ConsolePrint("Free memory [is]: %.3f MB", v12 * dbl_A30530);
    return 1;
  }
  return result;
}
