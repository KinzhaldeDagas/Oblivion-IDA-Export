int __thiscall sub_9031F0(_DWORD *this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ecx

  result = *(this + 4);
  for ( i = 0; i < result; ++i )
  {
    v5 = *(_DWORD *)(*(this + 3) + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x20))(v5, a2);
    result = *(this + 4);
  }
  return result;
}
