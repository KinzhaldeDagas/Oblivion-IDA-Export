int __thiscall sub_7414A0(int *this, int a2)
{
  int v2; // edi
  int result; // eax
  int (__cdecl *v5)(int, int *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_700AC0(this, (unsigned int *)a2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v5 = *(int (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v6 = *(_DWORD *)(v2 + 0x21C);
    a2 = 2;
    return v5(v6, this + 6, 2, &a2, 1);
  }
  else
  {
    result = *(_BYTE *)(v2 + 0x25C) & 1;
    *((_WORD *)this + 0xC) = result;
  }
  return result;
}
