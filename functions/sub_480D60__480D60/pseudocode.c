unsigned int __cdecl sub_480D60(_WORD *a1, int a2, char a3, char a4, char a5)
{
  _BYTE v6[8]; // [esp+0h] [ebp-1Ch] BYREF
  int v7; // [esp+8h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-10h]
  int v9; // [esp+10h] [ebp-Ch]
  unsigned int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v7 = 0xF; /*0x480d72*/
  v6[4] = 1; /*0x480d7a*/
  v8 = 0; /*0x480d7e*/
  v9 = a2; /*0x480d82*/
  v10 = 0xFFFFFFFF; /*0x480d86*/
  v11 = a3 != 0; /*0x480d94*/
  if ( a4 ) /*0x480d9c*/
    v11 |= 2u; /*0x480d9e*/
  if ( a5 ) /*0x480da7*/
    v11 |= 4u; /*0x480da9*/
  sub_88A7D0(a1, (int)v6, (void (__cdecl *)(int, int))sub_480CB0); /*0x480dbd*/
  return v10; /*0x480dd0*/
}
