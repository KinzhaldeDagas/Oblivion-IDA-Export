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

  if ( a6 )
  {
    v10 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
            dword_BA7D98,
            0x6C,
            6,
            a2,
            a1);
    *(_WORD *)(v10 + 4) = 0x6C;
    if ( (_BYTE)a7 )
      v11 = sub_90D7D0((char *)v10);
    else
      v11 = sub_90D430((char *)v10);
    v12 = v11;
    v18[0] = &off_A98360;
    v18[1] = 0;
    retaddr = 0;
    (*(void (__thiscall **)(char *, int, int, _DWORD *))(*(_DWORD *)v11 + 0xC))(v11, a6, a7, v18);
    sub_90BB90(&v16);
    a8 = 0x70616E73;
    LOBYTE(v17) = 1;
    v15 = 0x70616E73;
    if ( a10 )
      v16 = *sub_90BBA0(&a8, a10);
    v13 = (*(int (__thiscall **)(char *, int, int *))(*(_DWORD *)v12 + 0x10))(v12, a6, &v15) == 0;
    if ( *((_WORD *)v12 + 2) )
    {
      if ( !--*((_WORD *)v12 + 3) )
        (**(void (__thiscall ***)(char *, int))v12)(v12, 1);
    }
    sub_8BC370(&v16);
    *(_BYTE *)0x80000000 = v13;
    return (_BYTE *)0x80000000;
  }
  else
  {
    *a3 = 0;
    return a3;
  }
}
