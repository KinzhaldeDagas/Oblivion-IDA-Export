int __thiscall sub_713390(unsigned int *this)
{
  int (__cdecl *v2)(int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int i; // edi
  int v5; // [esp-14h] [ebp-24h]
  unsigned int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v6 = *(this + 0x84);
  v5 = *(this + 0x88);
  v2 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 8);
  v7 = 4;
  result = v2(v5, &v6, 4, &v7, 1);
  for ( i = 0; i < v6; ++i )
    result = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 0x2C))(this, *(_DWORD *)(*(this + 0x82) + 4 * i));
  return result;
}
