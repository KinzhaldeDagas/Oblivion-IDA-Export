int __thiscall MiddleProcess_ModAViMax(_DWORD *this, int a2, int a3, signed int a4)
{
  int v5; // [esp+0h] [ebp-8h]

  *(float *)&v5 = (float)a4;
  return AVCollection_ModAVLimited(this + 0x25, a3, v5, 1);
}
