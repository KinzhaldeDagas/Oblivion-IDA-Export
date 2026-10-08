int __fastcall sub_948F60(int *a1, int a2, const char *a3, int a4, _WORD *a5)
{
  int result; // eax
  signed int v7; // ebx
  int v8; // edi
  int v9; // esi
  __int16 v10; // ax
  int v11; // [esp+Ch] [ebp+8h]

  result = a1[3] & 0x3FFFFFFF; /*0x948f69*/
  if ( result > a1[2] + 0x46 )
  {
    v7 = 0; /*0x948f7f*/
    if ( a5 )
    {
      result = sub_8B1550(a1 + 4, (unsigned int)a5, 0); /*0x948f91*/
      if ( !result )
      {
        sub_8B0E80((char **)a1 + 4, (unsigned int)a5, 1); /*0x948fa3*/
        v8 = a5[2] & 0x7FFF; /*0x948fb5*/
        if ( (a1[7] & a4) == 0 ) /*0x948fbd*/
          v8 = 0; /*0x948fbf*/
        v11 = 0; /*0x948fc7*/
        if ( a3 ) /*0x948fcb*/
        {
          v7 = sub_8B1860(a3) + 1; /*0x948fd8*/
          v11 = v7 % 2; /*0x948fe7*/
        }
        v9 = sub_948DF0((int)(a1 + 1), v7 + v11); /*0x948ffe*/
        *(_BYTE *)v9 = 0x50; /*0x949009*/
        *(_BYTE *)(v9 + 1) = v11 + v7; /*0x94900c*/
        *(_WORD *)(v9 + 2) = v8; /*0x94900f*/
        if ( v8 ) /*0x949013*/
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 0x28))(unk_BA7D98, v8); /*0x949022*/
        else
          v10 = 0; /*0x949015*/
        *(_WORD *)(v9 + 4) = v10; /*0x949027*/
        if ( v7 > 0 ) /*0x94902b*/
        {
          sub_8B1890((void *)(v9 + 6), a3, v7); /*0x949037*/
          if ( v11 ) /*0x949045*/
            *(_BYTE *)(v9 + v7 + 6) = 0; /*0x949047*/
        }
        (*(void (__thiscall **)(_WORD *, int *))(*(_DWORD *)a5 + 4))(a5, a1 != (int *)8 ? a1 : 0);
        return (*(int (__thiscall **)(int *))(*a1 + 0x10))(a1); /*0x949064*/
      }
    }
  }
  return result; /*0x94906a*/
}
