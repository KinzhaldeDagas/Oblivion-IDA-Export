void __thiscall HighProcess_GetCurAVi_(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  float v7; // [esp+18h] [ebp+Ch]

  if ( a3 == 0xB )
  {
    if ( *(float *)(this + 0x294) < 0.0 )
    {
      MiddleProcess_GetAViCur((_DWORD *)this, a2, 0xB, a4);
      *(float *)(this + 0x294) = (float)v5;
    }
    v7 = floor(*(float *)(this + 0x294));
    Double_To_SInt32(v7);
  }
  else if ( a3 == 0x30 )
  {
    if ( *(int *)(this + 0x298) < 0 )
    {
      MiddleProcess_GetAViCur((_DWORD *)this, a2, 0x30, a4);
      *(_DWORD *)(this + 0x298) = v6;
    }
  }
  else
  {
    MiddleProcess_GetAViCur((_DWORD *)this, a2, a3, a4);
  }
}
