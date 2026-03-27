void __cdecl sub_79E220(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  int v5; // esi
  int v7; // [esp-14h] [ebp-18h]
  int v8; // [esp+8h] [ebp+4h]

  v3 = (a3 - a1) / 0x30;
  if ( v3 <= 0x28 )
  {
    sub_79C0D0(a1, a2, a3);
  }
  else
  {
    v4 = 0x60 * ((v3 + 1) / 8);
    v5 = 0x30 * ((v3 + 1) / 8);
    v7 = v4 + a1;
    v8 = v5 + a1;
    sub_79C0D0(a1, v8, v7);
    sub_79C0D0(a2 - v5, a2, v5 + a2);
    sub_79C0D0(a3 - v4, a3 - v5, a3);
    sub_79C0D0(v8, a2, a3 - v5);
  }
}
