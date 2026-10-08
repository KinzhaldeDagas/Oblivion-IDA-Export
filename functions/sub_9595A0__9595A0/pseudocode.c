signed int __thiscall sub_9595A0(_DWORD *this, int a2, int a3, __int32 a4)
{
  _DWORD *v4; // ecx
  signed int v5; // esi
  _DWORD *v7[2]; // [esp+4h] [ebp-19Ch] BYREF
  int v8; // [esp+Ch] [ebp-194h]
  char v9; // [esp+10h] [ebp-190h] BYREF

  v7[0] = &v9; /*0x9595b8*/
  v7[1] = 0; /*0x9595bc*/
  v8 = 0x80000064; /*0x9595c4*/
  sub_958BA0(this, v7, a2); /*0x9595cc*/
  v5 = sub_958C20(v4, (int)v7, a2, a3, &a4); /*0x9595ec*/
  if ( v8 >= 0 ) /*0x9595f4*/
    sub_8A75D0( /*0x95961b*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v7[0],
      4 * v8,
      0x14);
  return v5; /*0x959622*/
}
