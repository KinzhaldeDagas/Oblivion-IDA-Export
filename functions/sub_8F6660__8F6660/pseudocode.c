void __thiscall sub_8F6660(char *this, int a2)
{
  int v3; // eax
  char *v4; // edi

  (**(void (__thiscall ***)(int, const char *, int, char *))a2)(a2, "BvTreeAgt3", 8, this);
  v3 = *((_DWORD *)this + 0xE);
  v4 = this + 0x30;
  if ( v3 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "SectorPtrs",
      8,
      *(_DWORD *)v4,
      4 * *((_DWORD *)v4 + 1),
      4 * v3);
  sub_925E30((_DWORD **)v4, a2);
}
