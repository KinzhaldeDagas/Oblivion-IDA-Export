int __thiscall LowProcess_ModAVfCur(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  result = a3;
  if ( a3 >= 8 && a3 <= 0xA )
    return AVCollection_ModAVLimited(this + 0x1C, a3, a4, 0);
  return result;
}
