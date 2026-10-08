// positive sp value has been detected, the output may be wrong!
int __userpurge def_494D89@<eax>(double a1@<st2>, double a2@<st1>, char a3, int a4, int a5)
{
  float *SafeFloatPointer; // eax
  int v9; // [esp-20h] [ebp-24h]

  sub_578DA0(); /*0x494dca*/
  sub_579260(a1, a2, 0); /*0x494dd1*/
  sub_5792B0(); /*0x494dd9*/
  if ( a3 ) /*0x494de3*/
  {
    SafeFloatPointer = GameSetting_GetSafeFloatPointer(flt_B33A48); /*0x494dea*/
    sub_5732D0((NiNode **)unk_B3A6B0, a1, a2, *SafeFloatPointer, 2, *SafeFloatPointer); /*0x494dfd*/
  }
  byte_B06B16 = 1; /*0x494e02*/
  if ( v9 == 4 ) /*0x494e4f*/
    v9 = 5; /*0x494e51*/
  sub_47D0F0(MEMORY[0xB33E90]); /*0x494e5e*/
  return v9; /*0x494e6d*/
}
