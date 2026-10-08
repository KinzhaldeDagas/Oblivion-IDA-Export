int __cdecl sub_918BC0(int a1)
{
  signed int v1; // esi
  int v2; // ecx
  _DWORD *v4; // [esp+10h] [ebp-2Ch] BYREF
  int v5; // [esp+14h] [ebp-28h]
  int v6; // [esp+18h] [ebp-24h]
  _DWORD *v7[4]; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD *v8[4]; // [esp+2Ch] [ebp-10h] BYREF

  v4 = 0; /*0x918bcd*/
  v5 = 0; /*0x918bd5*/
  v6 = 0x80000000; /*0x918bdd*/
  sub_948750(v7, (int)&v4); /*0x918be5*/
  sub_9181B0(v7, 0x90); /*0x918bf3*/
  sub_918440(v7, dword_B3005C); /*0x918c03*/
  sub_918440(v7, dword_B30058); /*0x918c13*/
  v1 = sub_8B1860("PC"); /*0x918c22*/
  if ( v1 > 0xFFFF ) /*0x918c2d*/
    LOBYTE(v1) = 0xFF; /*0x918c2f*/
  sub_918420(v7, v1); /*0x918c39*/
  sub_918390(v7); /*0x918c48*/
  sub_948770(v8, a1); /*0x918c56*/
  sub_918440(v8, v5); /*0x918c64*/
  sub_918390(v8); /*0x918c77*/
  sub_918180(v8); /*0x918c80*/
  sub_918180(v7); /*0x918c89*/
  if ( v6 >= 0 ) /*0x918c95*/
  {
    v2 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x918ca7*/
    if ( !v2 ) /*0x918caf*/
      v2 = unk_BA7D9C; /*0x918cb1*/
    sub_8A75D0(v2, v4, v6 & 0x3FFFFFFF, 0x14); /*0x918cc3*/
  }
  return 0; /*0x918c94*/
}
