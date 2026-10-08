signed int __cdecl sub_9414C0(int a1, char *a2, signed int a3)
{
  char *v3; // ebp
  int v4; // edi
  int v5; // ebx
  signed int v6; // esi
  _DWORD *v8[4]; // [esp+14h] [ebp-50h] BYREF
  _DWORD v9[16]; // [esp+24h] [ebp-40h] BYREF

  v3 = a2; /*0x9414c5*/
  qmemcpy(v9, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", sizeof(v9)); /*0x9414da*/
  sub_9183A0(v8, a1, 0); /*0x94161a*/
  v4 = a3; /*0x94161f*/
  v5 = 0x13; /*0x941625*/
  if ( a3 > 0 ) /*0x94162a*/
  {
    while ( 1 ) /*0x941633*/
    {
      LOBYTE(a3) = 0; /*0x941633*/
      *(_WORD *)((char *)&a3 + 1) = 0; /*0x941638*/
      v6 = 3; /*0x94163f*/
      if ( v4 < 3 ) /*0x941644*/
        v6 = v4; /*0x941646*/
      sub_8B1890(&a3, v3, v6); /*0x94164f*/
      v3 += v6; /*0x9416a0*/
      v4 -= v6; /*0x9416a2*/
      if ( v6 < 3 ) /*0x9416af*/
        break; /*0x9416af*/
      sub_918390(v8); /*0x9416bc*/
      if ( !--v5 ) /*0x9416c2*/
      {
        sub_918390(v8); /*0x9416cf*/
        v5 = 0x13; /*0x9416d4*/
      }
      if ( !*(_BYTE *)(*(int (__thiscall **)(int, char **))(*(_DWORD *)a1 + 8))(a1, &a2) ) /*0x9416ea*/
      {
        sub_918180(v8); /*0x94170b*/
        return 1; /*0x94171c*/
      }
      if ( v4 <= 0 ) /*0x9416ee*/
        goto LABEL_13; /*0x9416ee*/
    }
    if ( (unsigned int)(v6 - 1) <= 1 ) /*0x94171e*/
      sub_918390(v8); /*0x941746*/
  }
LABEL_13:
  sub_918180(v8); /*0x94174b*/
  return 0; /*0x9416ff*/
}
