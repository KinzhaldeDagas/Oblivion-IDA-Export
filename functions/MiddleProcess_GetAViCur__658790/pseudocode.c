void __thiscall MiddleProcess_GetAViCur(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax
  double AV; // [esp+8h] [ebp-8h]

  AV = AVCollection_GetAV(this + 0x25, a3);
  LowProcess_GetAViCur(this, a2, a3, a4);
  Double_To_SInt32((double)v5 + AV);
}
