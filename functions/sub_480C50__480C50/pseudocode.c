int __cdecl sub_480C50(_WORD *a1, char a2, char a3, char a4)
{
  _BYTE v5[8]; // [esp+0h] [ebp-1Ch] BYREF
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+18h] [ebp-4h]

  v6 = 0xF;
  v5[4] = 1;
  v7 = 0;
  v8 = a2 != 0;
  if ( a3 )
    v8 |= 2u;
  if ( a4 )
    v8 |= 4u;
  sub_88A7D0(a1, (int)v5, (void (__cdecl *)(int, int))sub_480BB0);
  return v7;
}
