int __thiscall sub_9461B0(void **this)
{
  int v2; // edi
  int result; // eax
  _DWORD *v4; // edi
  int v5; // ebx
  void **v6; // esi

  sub_918440(*(this + 3), 0xD);
  sub_9181B0((_DWORD **)*(this + 3), 0x20);
  sub_918460(*(this + 3), (char)dword_BA8788, 0);
  sub_9181B0((_DWORD **)*(this + 3), dword_B2FDE4);
  sub_9181B0((_DWORD **)*(this + 3), BYTE1(dword_B2FDE4));
  sub_9181B0((_DWORD **)*(this + 3), BYTE2(dword_B2FDE4));
  sub_9181B0((_DWORD **)*(this + 3), HIBYTE(dword_B2FDE4));
  v2 = (int)*(this + 9);
  result = *(_DWORD *)(v2 + 0x28);
  v4 = (_DWORD *)(v2 + 0x24);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = this + 0xFFFFFFFE;
    do
    {
      sub_946130(v6, *(_DWORD *)(*v4 + 8 * v5), *(_DWORD **)(*v4 + 8 * v5 + 4));
      result = v4[1];
      ++v5;
    }
    while ( v5 < result );
  }
  return result;
}
