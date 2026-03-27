int __cdecl sub_918BC0(int a1)
{
  signed int v1; // esi
  int v2; // ecx
  _DWORD *v4; // [esp+10h] [ebp-2Ch] BYREF
  int v5; // [esp+14h] [ebp-28h]
  int v6; // [esp+18h] [ebp-24h]
  _DWORD *v7[4]; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD *v8[4]; // [esp+2Ch] [ebp-10h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0x80000000;
  sub_948750(v7, (int)&v4);
  sub_9181B0(v7, 0x90);
  sub_918440(v7, dword_B3005C);
  sub_918440(v7, dword_B30058);
  v1 = sub_8B1860("PC");
  if ( v1 > 0xFFFF )
    LOBYTE(v1) = 0xFF;
  sub_918420(v7, v1);
  sub_918390(v7);
  sub_948770(v8, a1);
  sub_918440(v8, v5);
  sub_918390(v8);
  sub_918180(v8);
  sub_918180(v7);
  if ( v6 >= 0 )
  {
    v2 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v2 )
      v2 = dword_BA7D9C;
    sub_8A75D0(v2, v4, v6 & 0x3FFFFFFF, 0x14);
  }
  return 0;
}
