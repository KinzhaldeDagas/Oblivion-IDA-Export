int __thiscall sub_903220(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int i; // esi
  int v7; // ecx

  result = *(this + 4);
  for ( i = 0; i < result; ++i )
  {
    v7 = *(_DWORD *)(*(this + 3) + 4 * i);
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 0x24))(v7, a2, a3, a4);
    result = *(this + 4);
  }
  return result;
}
