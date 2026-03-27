char __usercall sub_4F8A50@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  NiObjectNET *v9; // eax
  NiObject *ExtraData; // eax
  double v11; // st5
  float v13; // [esp+1Ch] [ebp+10h]

  *a6 = 0.0;
  if ( a3 )
  {
    v9 = (NiObjectNET *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x154))(
                          a3,
                          a2,
                          a1);
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(v9, dword_A7D0EC);
    if ( ExtraData )
    {
      if ( (NiRTTI_Cast((BSStringT *)dword_B3F484, ExtraData)[1].members.m_uiRefCount & 0x10) != 0 )
        v11 = 1.0;
      else
        v11 = 0.0;
      v13 = v11;
      *a6 = v13;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("CanHaveFlames >> %0.2f", *a6);
  return 1;
}
