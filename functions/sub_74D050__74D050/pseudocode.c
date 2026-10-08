int __thiscall sub_74D050(const char **this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, const char **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x74d052*/
  sub_753060(this, a2); /*0x74d059*/
  v4 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x74d064*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x74d074*/
  a2 = 4; /*0x74d075*/
  return v4(v6, this + 0x15, 4, &a2, 1); /*0x74d082*/
}
