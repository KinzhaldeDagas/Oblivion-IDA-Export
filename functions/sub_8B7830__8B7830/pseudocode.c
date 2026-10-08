int __thiscall sub_8B7830(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int result; // eax
  int v10; // ecx
  int v11; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD *v12; // [esp+18h] [ebp-18h] BYREF
  int v13; // [esp+1Ch] [ebp-14h]
  int v14; // [esp+20h] [ebp-10h]
  unsigned int v15; // [esp+2Ch] [ebp-4h]

  v3 = (*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v11); /*0x8b7865*/
  v4 = v3; /*0x8b7869*/
  v12 = 0; /*0x8b786b*/
  v13 = 0; /*0x8b786f*/
  v14 = 0x80000000; /*0x8b7873*/
  v15 = 0; /*0x8b787d*/
  if ( v3 ) /*0x8b7881*/
  {
    v12 = *(_DWORD **)(v3 + 4); /*0x8b7886*/
    v5 = *(_DWORD *)(v3 + 8); /*0x8b788a*/
    *(_DWORD *)(v3 + 4) = 0; /*0x8b788d*/
    v6 = v13; /*0x8b7890*/
    v13 = v5; /*0x8b7894*/
    v7 = *(_DWORD *)(v4 + 0xC); /*0x8b7898*/
    *(_DWORD *)(v4 + 8) = v6; /*0x8b789b*/
    v8 = v14; /*0x8b789e*/
    v14 = v7; /*0x8b78a2*/
    *(_DWORD *)(v4 + 0xC) = v8; /*0x8b78a6*/
  }
  sub_8A2610(this, a2); /*0x8b78b0*/
  if ( v4 ) /*0x8b78b7*/
  {
    sub_8E81B0(a2, &v12); /*0x8b78bf*/
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v11); /*0x8b78d3*/
  }
  result = v14; /*0x8b78d5*/
  v15 = 0xFFFFFFFF; /*0x8b78db*/
  if ( v14 >= 0 ) /*0x8b78e3*/
  {
    v10 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8b78f5*/
    if ( !v10 ) /*0x8b78fd*/
      v10 = unk_BA7D9C; /*0x8b78ff*/
    return sub_8A75D0(v10, v12, 0x10 * v14, 0x14); /*0x8b7915*/
  }
  return result; /*0x8b791a*/
}
