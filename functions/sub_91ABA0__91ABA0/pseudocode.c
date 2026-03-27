int __thiscall sub_91ABA0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int i; // esi
  int result; // eax

  v3 = *(_DWORD **)(*(this + 0xC) + 4 * a2);
  for ( i = 0; i < v3[2]; ++i )
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 6) + 0x10))(
      *(this + 6),
      *(_DWORD *)(v3[1] + 4 * i),
      dword_BA8420);
  result = v3[3] & 0x3FFFFFFF;
  v3[2] = 0;
  return result;
}
