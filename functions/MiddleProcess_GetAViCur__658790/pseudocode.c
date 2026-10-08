void __thiscall MiddleProcess_GetAViCur(_DWORD *this, int a2, int actorValue, int a4)
{
  int v5; // eax
  double AV; // [esp+8h] [ebp-8h]

  AV = AVCollection_GetAV((AVCollection *)(this + 0x25), actorValue); /*0x6587a7*/
  LowProcess_GetAViCur(this, a2, actorValue, a4); /*0x6587b8*/
  Double_To_SInt32((double)v5 + AV); /*0x6587c9*/
}
