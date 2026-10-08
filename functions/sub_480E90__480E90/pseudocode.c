int __cdecl sub_480E90(_WORD *a1, int a2, char a3, char a4, char a5)
{
  _BYTE v6[8]; // [esp+0h] [ebp-1Ch] BYREF
  int v7; // [esp+8h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-10h]
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v7 = 0xF; /*0x480ea2*/
  v6[4] = 1; /*0x480eaa*/
  v8 = 0; /*0x480eae*/
  v9 = 0; /*0x480eb2*/
  v10 = a2; /*0x480eb6*/
  v11 = a3 != 0; /*0x480ec0*/
  if ( a4 ) /*0x480ec8*/
    v11 |= 2u; /*0x480eca*/
  if ( a5 ) /*0x480ed3*/
    v11 |= 4u; /*0x480ed5*/
  sub_88A7D0(a1, (int)v6, (void (__cdecl *)(int, int))sub_480DE0); /*0x480ee9*/
  return v9; /*0x480ef5*/
}
