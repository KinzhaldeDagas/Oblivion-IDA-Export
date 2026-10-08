int __cdecl sub_480C50(_WORD *a1, char a2, char a3, char a4)
{
  _BYTE v5[8]; // [esp+0h] [ebp-1Ch] BYREF
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+18h] [ebp-4h]

  v6 = 0xF; /*0x480c5e*/
  v5[4] = 1; /*0x480c66*/
  v7 = 0; /*0x480c6a*/
  v8 = a2 != 0; /*0x480c74*/
  if ( a3 ) /*0x480c7c*/
    v8 |= 2u; /*0x480c7e*/
  if ( a4 ) /*0x480c87*/
    v8 |= 4u; /*0x480c89*/
  sub_88A7D0(a1, (int)v5, (void (__cdecl *)(int, int))sub_480BB0); /*0x480c9d*/
  return v7; /*0x480ca9*/
}
