signed int __thiscall sub_9595A0(_DWORD *this, int a2, int a3, __int32 a4)
{
  _DWORD *v4; // ecx
  signed int v5; // esi
  _DWORD *v7[2]; // [esp+4h] [ebp-19Ch] BYREF
  int v8; // [esp+Ch] [ebp-194h]
  char v9; // [esp+10h] [ebp-190h] BYREF

  v7[0] = &v9;
  v7[1] = 0;
  v8 = 0x80000064;
  sub_958BA0(this, v7, a2);
  v5 = sub_958C20(v4, (int)v7, a2, a3, &a4);
  if ( v8 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v7[0],
      4 * v8,
      0x14);
  return v5;
}
