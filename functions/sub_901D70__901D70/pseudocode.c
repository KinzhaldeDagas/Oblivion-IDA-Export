int __thiscall sub_901D70(_DWORD *this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ecx
  int v6; // [esp+Ch] [ebp-8h] BYREF

  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 1;
  result = *(this + 5);
  for ( i = 0; i < result; ++i )
  {
    v5 = *(_DWORD *)(*(this + 4) + 8 * i);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 0x1C))(v5, &v6);
    *(_DWORD *)a2 += v6;
    result = *(this + 5);
  }
  return result;
}
