int __thiscall sub_6E0630(int *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v5)(int, int *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_715F40(this, a2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v6 = *(_DWORD *)(v2 + 0x21C);
    a2 = 2;
    v5(v6, this + 0xF, 2, &a2, 1);
  }
  else
  {
    *((_WORD *)this + 0x1E) = (unsigned __int8)(*(_WORD *)(v2 + 0x25A) >> 5);
  }
  return sub_712A20((unsigned int *)v2);
}
