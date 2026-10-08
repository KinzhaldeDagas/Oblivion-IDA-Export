int __thiscall sub_7414A0(NiRenderer *this, int a2)
{
  int v2; // edi
  int result; // eax
  int (__cdecl *v5)(int, UInt32 *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7414a2*/
  sub_700AC0(this, (unsigned int *)a2); /*0x7414a9*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x7414b8*/
  {
    v5 = *(int (__cdecl **)(int, UInt32 *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x7414d3*/
    v6 = *(_DWORD *)(v2 + 0x21C); /*0x7414e3*/
    a2 = 2; /*0x7414e4*/
    return v5(v6, &this->members.pad014[1], 2, &a2, 1); /*0x7414ec*/
  }
  else
  {
    result = *(_BYTE *)(v2 + 0x25C) & 1; /*0x7414c1*/
    LOWORD(this->members.pad014[1]) = result; /*0x7414c5*/
  }
  return result; /*0x7414c4*/
}
