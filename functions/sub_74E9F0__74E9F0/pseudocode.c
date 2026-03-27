int __thiscall sub_74E9F0(_WORD *this, _BYTE *a2, int a3, _BYTE *a4)
{
  int v5; // esi
  int result; // eax

  sub_749360(this, a2, 1, a4);
  v5 = *((_DWORD *)this + 0x2D);
  result = (*(int (__thiscall **)(_DWORD, _BYTE *, int, _BYTE *))(**(_DWORD **)(v5 + 0x68) + 0x5C))(
             *(_DWORD *)(v5 + 0x68),
             a2,
             1,
             a4);
  *a4 = 0;
  *(_WORD *)(*(_DWORD *)(v5 + 0x68) + 0x18) &= ~0x10u;
  return result;
}
