int __thiscall sub_6D3630(void *this, signed int a2)
{
  int (__cdecl *v2)(int, void *, int, signed int *, int); // eax
  int v4; // [esp-14h] [ebp-14h]

  v4 = *(_DWORD *)(a2 + 0x21C);
  v2 = *(int (__cdecl **)(int, void *, int, signed int *, int))(v4 + 4);
  a2 = 4;
  return v2(v4, this, 4, &a2, 1);
}
