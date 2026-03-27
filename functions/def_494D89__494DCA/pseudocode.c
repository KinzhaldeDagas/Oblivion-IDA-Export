// positive sp value has been detected, the output may be wrong!
int __userpurge def_494D89@<eax>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5,
        int a6,
        int a7)
{
  float *SafeFloatPointer; // eax
  int v9; // [esp-20h] [ebp-24h]

  sub_578DA0();
  sub_579260(a2, a3, 0);
  sub_5792B0(a1, a2, a3, a4);
  if ( a5 )
  {
    SafeFloatPointer = (float *)GameSetting_GetSafeFloatPointer((int *)&flt_B33A48);
    sub_5732D0((NiAVObject **)dword_B3A6B0, a2, a3, *SafeFloatPointer, 2, *SafeFloatPointer);
  }
  byte_B06B16 = 1;
  if ( v9 == 4 )
    v9 = 5;
  sub_47D0F0(&TimeInfo);
  return v9;
}
