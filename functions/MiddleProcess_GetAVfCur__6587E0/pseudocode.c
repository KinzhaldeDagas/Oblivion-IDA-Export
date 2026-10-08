double __thiscall MiddleProcess_GetAVfCur(_DWORD *this, int a2, int actorValue, int a4)
{
  double AV; // [esp+8h] [ebp-8h]

  AV = AVCollection_GetAV((AVCollection *)(this + 0x25), actorValue); /*0x6587f7*/
  return (float)(LowProcess_GetAVfCur(this, a2, actorValue, a4) + AV); /*0x65881b*/
}
