bool __usercall sub_5069D0@<al>(
        int esi0@<esi>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        __int64 a6,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  int v9; // esi
  double v10; // st7
  double v11; // st7
  SIZE_T v12; // [esp+4h] [ebp-18h]
  UInt16 v13[2]; // [esp+10h] [ebp-Ch] BYREF
  SIZE_T dwSize; // [esp+14h] [ebp-8h]

  *(float *)v13 = 0.0; /*0x5069dd*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, (Script *)a6, (ScriptEventList *)HIDWORD(a6), v13); /*0x506a01*/
  if ( result )
  {
    if ( *(float *)v13 > 0.0 )
    {
      HIDWORD(v12) = esi0; /*0x506a28*/
      dwSize = (__int64)(*(float *)v13 * dbl_A4BEE0); /*0x506a44*/
      v9 = dwSize; /*0x506a48*/
      LODWORD(dwSize) = AviablePhysicalPages(); /*0x506a57*/
      v10 = (double)(int)dwSize; /*0x506a5b*/
      if ( (int)dwSize < 0 ) /*0x506a5f*/
        v10 = v10 + flt_A2FC78; /*0x506a61*/
      Interface_ConsolePrint("Free memory [was]: %.3f MB", v10 * dbl_A30530);
      LODWORD(v12) = v9; /*0x506a80*/
      AllocateVirtualPage(v12); /*0x506a86*/
    }
    LODWORD(dwSize) = AviablePhysicalPages(); /*0x506a9c*/
    v11 = (double)(int)dwSize; /*0x506aa0*/
    if ( (int)dwSize < 0 ) /*0x506aa4*/
      v11 = v11 + flt_A2FC78; /*0x506aa6*/
    Interface_ConsolePrint("Free memory [is]: %.3f MB", v11 * dbl_A30530);
    return 1; /*0x506ac5*/
  }
  return result; /*0x506a0d*/
}
