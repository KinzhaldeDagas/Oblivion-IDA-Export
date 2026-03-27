int __thiscall sub_70B6A0(char *this, unsigned int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  unsigned int i; // ebx
  int v6; // eax
  int v7; // eax
  int (__cdecl *v8)(int, int *, int, int *, int); // edx
  int result; // eax
  int j; // edi
  int v11; // eax
  int v12; // [esp-14h] [ebp-28h]
  int v13; // [esp+Ch] [ebp-8h] BYREF
  int v14; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_708330(this, a2);
  a2 = *((unsigned __int16 *)this + 0x5B);
  v12 = v2[0x88];
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v12 + 8);
  v14 = 4;
  v4(v12, &a2, 4, &v14, 1);
  for ( i = 0; i < a2; ++i )
  {
    if ( *((unsigned __int16 *)this + 0x5B) > i )
      v6 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i);
    else
      v6 = 0;
    (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v6);
  }
  v7 = v2[0x88];
  v13 = *((_DWORD *)this + 0x32);
  v8 = *(int (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
  v14 = 4;
  result = v8(v7, &v13, 4, &v14, 1);
  if ( v13 > 0 )
  {
    for ( j = *((_DWORD *)this + 0x31); j; result = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v11) )
    {
      v11 = *(_DWORD *)(j + 8);
      j = *(_DWORD *)(j + 4);
    }
  }
  return result;
}
