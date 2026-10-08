__int16 __thiscall sub_722510(int *this, int a2)
{
  int v2; // edi
  __int16 v4; // ax
  __int16 result; // ax
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int *v7; // esi
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x722512*/
  sub_709EE0(this, (unsigned int *)a2); /*0x722519*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x722528*/
  {
    v6 = *(int (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x722583*/
    v7 = this + 0x37; /*0x72258f*/
    v8 = *(_DWORD *)(v2 + 0x21C); /*0x722596*/
    a2 = 2; /*0x722597*/
    result = v6(v8, v7, 2, &a2, 1); /*0x72259f*/
    *(_WORD *)v7 |= 8u; /*0x7225a1*/
  }
  else
  {
    v4 = *(_WORD *)(v2 + 0x258); /*0x72252a*/
    *((_WORD *)this + 0x6E) = v4; /*0x722531*/
    if ( *(_DWORD *)(v2 + 0xD8) < 0x4020003u ) /*0x722542*/
      *((_WORD *)this + 0x6E) = v4 & 0x1FFF | (2 * (v4 & 0xE000)); /*0x722556*/
    result = *((unsigned __int8 *)this + 0xDD); /*0x722565*/
    *((_WORD *)this + 0x6E) = result; /*0x722569*/
    *((_WORD *)this + 0x6E) |= 8u; /*0x722570*/
  }
  return result; /*0x722578*/
}
