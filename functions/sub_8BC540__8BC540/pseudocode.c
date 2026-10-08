_BYTE *__usercall sub_8BC540@<eax>(
        int a1@<ebx>,
        int a2@<esi>,
        _BYTE *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        signed int a8,
        int a9,
        _DWORD *a10)
{
  int v10; // eax
  char *v11; // eax
  char *v12; // esi
  bool v13; // bl
  int v15; // [esp+1Ch] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-10h] BYREF
  int v17; // [esp+24h] [ebp-Ch]
  _DWORD v18[2]; // [esp+28h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h]

  if ( a6 ) /*0x8bc54c*/
  {
    v10 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x6C, 6, a2, a1); /*0x8bc568*/
    *(_WORD *)(v10 + 4) = 0x6C; /*0x8bc56d*/
    if ( (_BYTE)a7 ) /*0x8bc564*/
      v11 = sub_90D7D0((char *)v10); /*0x8bc573*/
    else
      v11 = sub_90D430((char *)v10); /*0x8bc587*/
    v12 = v11; /*0x8bc599*/
    v18[0] = &off_A98360; /*0x8bc59c*/
    v18[1] = 0; /*0x8bc5a4*/
    retaddr = 0; /*0x8bc5ac*/
    (*(void (__thiscall **)(char *, int, int, _DWORD *))(*(_DWORD *)v11 + 0xC))(v11, a6, a7, v18); /*0x8bc5c1*/
    sub_90BB90(&v16); /*0x8bc5d0*/
    a8 = 0x70616E73; /*0x8bc5db*/
    LOBYTE(v17) = 1; /*0x8bc5f3*/
    v15 = 0x70616E73; /*0x8bc5f8*/
    if ( a10 ) /*0x8bc5fc*/
      v16 = *sub_90BBA0(&a8, a10); /*0x8bc60a*/
    v13 = (*(int (__thiscall **)(char *, int, int *))(*(_DWORD *)v12 + 0x10))(v12, a6, &v15) == 0; /*0x8bc621*/
    if ( *((_WORD *)v12 + 2) ) /*0x8bc623*/
    {
      if ( !--*((_WORD *)v12 + 3) ) /*0x8bc62e*/
        (**(void (__thiscall ***)(char *, int))v12)(v12, 1); /*0x8bc63b*/
    }
    sub_8BC370(&v16); /*0x8bc641*/
    *(_BYTE *)0x80000000 = v13; /*0x8bc64b*/
    return (_BYTE *)0x80000000; /*0x8bc646*/
  }
  else
  {
    *a3 = 0; /*0x8bc657*/
    return a3; /*0x8bc653*/
  }
}
