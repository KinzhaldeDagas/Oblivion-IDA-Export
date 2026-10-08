void __thiscall HighProcess_GetCurAVi_(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  float v7; // [esp+18h] [ebp+Ch]

  if ( a3 == 0xB ) /*0x62894a*/
  {
    if ( *(float *)(this + 0x294) < 0.0 ) /*0x628959*/
    {
      MiddleProcess_GetAViCur((_DWORD *)this, a2, 0xB, a4); /*0x628969*/
      *(float *)(this + 0x294) = (float)v5; /*0x628976*/
    }
    v7 = floor(*(float *)(this + 0x294)); /*0x62898d*/
    Double_To_SInt32(v7); /*0x628998*/
  }
  else if ( a3 == 0x30 ) /*0x6289a4*/
  {
    if ( *(int *)(this + 0x298) < 0 ) /*0x6289ad*/
    {
      MiddleProcess_GetAViCur((_DWORD *)this, a2, 0x30, a4); /*0x6289ba*/
      *(_DWORD *)(this + 0x298) = v6; /*0x6289bf*/
    }
  }
  else
  {
    MiddleProcess_GetAViCur((_DWORD *)this, a2, a3, a4); /*0x6289dc*/
  }
}
