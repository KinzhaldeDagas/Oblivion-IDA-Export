__int16 __thiscall sub_6DEDD0(int *this, signed int a2)
{
  signed int v2; // esi
  __int16 result; // ax
  int (__cdecl *v5)(int, int *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6dedd1*/
  j_NiSingleInterpController_LoadBinary(this, (_DWORD *)a2); /*0x6dedd9*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x6dede8*/
  {
    v5 = *(int (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6dee05*/
    v6 = *(_DWORD *)(v2 + 0x21C); /*0x6dee15*/
    a2 = 2; /*0x6dee16*/
    result = v5(v6, this + 0x10, 2, &a2, 1); /*0x6dee1e*/
  }
  else
  {
    result = (unsigned __int8)(*(_WORD *)(v2 + 0x25A) >> 5); /*0x6dedf5*/
    *((_WORD *)this + 0x20) = result; /*0x6dedf9*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA010068u ) /*0x6dee2d*/
    return sub_712A20((unsigned int *)v2); /*0x6dee31*/
  return result; /*0x6dee36*/
}
