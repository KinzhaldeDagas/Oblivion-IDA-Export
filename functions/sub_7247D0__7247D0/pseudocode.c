int __thiscall sub_7247D0(int *this, int a2)
{
  int v2; // ebx
  int *v4; // esi
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  int v6; // ebx
  int (__cdecl *v7)(int, int *, int, int *, int); // ecx
  int result; // eax
  int v9; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x7247d1*/
  sub_709EE0(this, (unsigned int *)a2); /*0x7247da*/
  v4 = this + 0x37; /*0x7247e9*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x7247ef*/
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x724808*/
    v9 = *(_DWORD *)(v2 + 0x21C); /*0x724815*/
    a2 = 2; /*0x724816*/
    v5(v9, this + 0x37, 2, &a2, 1); /*0x72481e*/
  }
  else
  {
    *(_WORD *)v4 = *(unsigned __int8 *)(v2 + 0x259); /*0x7247fd*/
  }
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x724823*/
  v7 = *(int (__cdecl **)(int, int *, int, int *, int))(v6 + 4); /*0x724829*/
  a2 = 4; /*0x72483d*/
  result = v7(v6, this + 0x38, 4, &a2, 1); /*0x724845*/
  *(_WORD *)v4 |= 2u; /*0x724847*/
  return result; /*0x72484e*/
}
