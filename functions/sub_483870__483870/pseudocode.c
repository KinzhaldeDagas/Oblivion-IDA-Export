char __thiscall sub_483870(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edi
  char result; // al

  if ( !a4 )
    return (*(char (__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a2, a3);
  v5 = 0x10 * (a3 + a2 * *(this + 3));
  *(_BYTE *)(v5 + *(this + 4)) = *(_BYTE *)a4;
  *(_DWORD *)(*(this + 4) + v5 + 8) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(*(this + 4) + v5 + 0xC) = *(_DWORD *)(a4 + 0xC);
  sub_55E2A0((int *)(*(this + 4) + v5 + 4), (int *)(a4 + 4));
  result = *(_BYTE *)(a4 + 1);
  *(_BYTE *)(*(this + 4) + v5 + 1) = result;
  return result;
}
