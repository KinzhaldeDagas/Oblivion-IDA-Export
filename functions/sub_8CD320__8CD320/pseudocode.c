void __cdecl sub_8CD320(int *a1, int a2, int a3)
{
  char v3[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v4; // [esp+10h] [ebp-8h]
  int v5; // [esp+14h] [ebp-4h]

  if ( a1[0x22] )
  {
    v4 = a2;
    v3[0] = 0xC;
    v5 = a3;
    sub_898820(a1, (int)v3);
  }
  else
  {
    sub_8CC050((int)a1, *(_DWORD *)(a2 + 0x54), *(_DWORD *)(a3 + 0x54));
  }
}
