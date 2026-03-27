__int16 __thiscall sub_6DEDD0(_WORD *this, signed int a2)
{
  signed int v2; // esi
  __int16 result; // ax
  int (__cdecl *v5)(int, _WORD *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_6ECB70(a2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v5 = *(int (__cdecl **)(int, _WORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v6 = *(_DWORD *)(v2 + 0x21C);
    a2 = 2;
    result = v5(v6, this + 0x20, 2, &a2, 1);
  }
  else
  {
    result = (unsigned __int8)(*(_WORD *)(v2 + 0x25A) >> 5);
    *(this + 0x20) = result;
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA010068u )
    return sub_712A20((unsigned int *)v2);
  return result;
}
