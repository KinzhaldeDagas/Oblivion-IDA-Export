char __usercall sub_4F8A50@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  NiObjectNET *v7; // eax
  NiObject *ExtraData; // eax
  double v9; // st5
  float v11; // [esp+1Ch] [ebp+10h]

  *a6 = 0.0; /*0x4f8a5d*/
  if ( a3 ) /*0x4f8a5f*/
  {
    v7 = (NiObjectNET *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x154))( /*0x4f8a6e*/
                          a3,
                          a2,
                          a1);                  // CanHaveFlames virtual call may return a null NiObjectNET*. Vanilla immediately forwards EAX as ECX to NiObjectNET::GetExtraData at 0x4F8A72.
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(v7, dword_A7D0EC);// MEF v31 verified guard site: return null/0 without calling NiObjectNET::GetExtraData when ECX is null; preserve native RET 4 name-argument cleanup and resume at 0x4F8A77. /*0x4f8a72*/
    if ( ExtraData ) /*0x4f8a79*/
    {
      if ( (NiRTTI_Cast((BSStringT *)stru_B3F484, ExtraData)[1].members.m_uiRefCount & 0x10) != 0 ) /*0x4f8a91*/
        v9 = 1.0; /*0x4f8a93*/
      else
        v9 = 0.0; /*0x4f8a97*/
      v11 = v9; /*0x4f8a99*/
      *a6 = v11; /*0x4f8aa1*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f8aa3*/
    Interface_ConsolePrint("CanHaveFlames >> %0.2f", *a6); /*0x4f8ab9*/
  return 1; /*0x4f8ac3*/
}
