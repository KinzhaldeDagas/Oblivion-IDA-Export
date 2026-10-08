void __thiscall sub_8F6660(char *this, int a2)
{
  int v3; // eax
  char *v4; // edi

  (**(void (__thiscall ***)(int, const char *, int, char *))a2)(a2, "BvTreeAgt3", 8, this); /*0x8f6674*/
  v3 = *((_DWORD *)this + 0xE); /*0x8f6676*/
  v4 = this + 0x30; /*0x8f6679*/
  if ( v3 >= 0 ) /*0x8f667e*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8f669e*/
      a2,
      "SectorPtrs",
      8,
      *(_DWORD *)v4,
      4 * *((_DWORD *)v4 + 1),
      4 * v3);
  sub_925E30((_DWORD **)v4, a2); /*0x8f66a3*/
}
