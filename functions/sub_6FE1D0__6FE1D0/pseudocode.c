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

  v2 = (_DWORD *)a2;
  nullsub_returnvVoid_1arg(a2);
  v4 = *((unsigned __int16 *)this + 0xA);
  v10 = 2 * v4;
  v9 = v2[0x88];
  v5 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v9 + 8);
  v11 = v4;
  a2 = 4;
  result = v5(v9, &v10, 4, &a2, 1);
  for ( i = 0; i < v11; ++i )
  {
    v8 = *(_DWORD *)(*(this + 3) + 4 * i);
    if ( v8 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(v8 + 0x1C));
      result = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v8);
    }
  }
  return result;
}
