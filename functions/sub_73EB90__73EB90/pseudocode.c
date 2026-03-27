void __thiscall sub_73EB90(char *this, unsigned int a2)
{
  signed int v2; // ebx
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  unsigned int i; // edi
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp-10h] [ebp-20h]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_6EBA80((NiRenderer *)this, a2);
  sub_716EA0(this + 8, v2);
  sub_716EA0(this + 0x18, v2);
  v7 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v7 + 4);
  v10 = 4;
  v4(v7, &a2, 4, &v10, 1);
  sub_73E6A0(this, v2, a2);
  for ( i = 0; i < a2; ++i )
  {
    v9 = *((_DWORD *)this + 0xB) + 4 * i;
    v8 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 4);
    v10 = 4;
    v6(v8, v9, 4, &v10, 1);
  }
}
