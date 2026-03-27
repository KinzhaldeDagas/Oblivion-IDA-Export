int __userpurge sub_942D70@<eax>(int a1@<ecx>, int a2@<ebx>, _DWORD *a3)
{
  _WORD *v4; // edi
  _WORD *v5; // eax
  char **v6; // eax
  char **v7; // edi
  int v9; // [esp+8h] [ebp-4h] BYREF

  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)a1 = &off_AA2444;
  v4 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x12);
  v4[2] = 0x14;
  sub_90BBA0(&v9, &dword_B2FDE4);
  v5 = sub_953530(v4, &v9, a3);
  *(_DWORD *)(a1 + 8) = v5;
  if ( v5[6] == (unsigned __int16)dword_B2FDE4 && v5[7] == HIWORD(dword_B2FDE4)
    || (v6 = (char **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 5),
        (v7 = v6) == 0) )
  {
    *(_DWORD *)(a1 + 0xC) = 0;
    return a1;
  }
  else
  {
    sub_8B0E10(v6, a2);
    *(_DWORD *)(a1 + 0xC) = v7;
    return a1;
  }
}
