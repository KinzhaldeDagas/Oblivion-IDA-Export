unsigned int __cdecl sub_480D60(_WORD *a1, int a2, char a3, char a4, char a5)
{
  _BYTE v6[8]; // [esp+0h] [ebp-1Ch] BYREF
  int v7; // [esp+8h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-10h]
  int v9; // [esp+10h] [ebp-Ch]
  unsigned int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v7 = 0xF;
  v6[4] = 1;
  v8 = 0;
  v9 = a2;
  v10 = 0xFFFFFFFF;
  v11 = a3 != 0;
  if ( a4 )
    v11 |= 2u;
  if ( a5 )
    v11 |= 4u;
  sub_88A7D0(a1, (int)v6, (void (__cdecl *)(int, int))sub_480CB0);
  return v10;
}
