int __thiscall sub_6FE1D0(_DWORD *this, signed int a2)
{
  _DWORD *v2; // ebx
  unsigned int v4; // ebp
  int (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  int result; // eax
  unsigned int i; // edi
  int v8; // ebp
  int v9; // [esp-14h] [ebp-2Ch]
  int v10; // [esp+10h] [ebp-8h] BYREF
  unsigned int v11; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)a2; /*0x6fe1d4*/
  nullsub_returnvVoid_1arg(a2); /*0x6fe1de*/
  v4 = *((unsigned __int16 *)this + 0xA); /*0x6fe1e3*/
  v10 = 2 * v4; /*0x6fe1f2*/
  v9 = v2[0x88]; /*0x6fe203*/
  v5 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v9 + 8); /*0x6fe204*/
  v11 = v4; /*0x6fe207*/
  a2 = 4; /*0x6fe20b*/
  result = v5(v9, &v10, 4, &a2, 1); /*0x6fe213*/
  for ( i = 0; i < v11; ++i ) /*0x6fe21c*/
  {
    v8 = *(_DWORD *)(*(this + 3) + 4 * i); /*0x6fe223*/
    if ( v8 ) /*0x6fe228*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(v8 + 0x1C)); /*0x6fe235*/
      result = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v8); /*0x6fe23f*/
    }
  }
  return result; /*0x6fe24a*/
}
