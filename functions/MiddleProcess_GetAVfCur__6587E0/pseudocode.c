double __thiscall MiddleProcess_GetAVfCur(_DWORD *this, int a2, int a3, int a4)
{
  double AV; // [esp+8h] [ebp-8h]

  AV = AVCollection_GetAV(this + 0x25, a3);
  return (float)(LowProcess_GetAVfCur(this, a2, a3, a4) + AV);
}
