int __thiscall sub_6D0E80(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD *, int, int *, int); // eax
  void (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  unsigned int v6; // ecx
  int v7; // eax
  void (__cdecl *v8)(int, unsigned int *, int, int *, int); // edx
  int i; // ebx
  int v10; // eax
  int (__cdecl *v11)(int, unsigned int *, int, int *, int); // edx
  int result; // eax
  unsigned int j; // ebx
  unsigned int v14; // eax
  int v15; // eax
  int (__cdecl *v16)(int, int *, int, int *, int); // edx
  int v17; // [esp-14h] [ebp-30h]
  int v18; // [esp-14h] [ebp-30h]
  int v19; // [esp-14h] [ebp-30h]
  unsigned int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  sub_754EB0(a2);
  v17 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v17 + 8);
  v21 = 2;
  v4(v17, this + 0xF, 2, &v21, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x14));
  LOBYTE(a2) = *((_BYTE *)this + 0x5A);
  v18 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v18 + 8);
  v21 = 1;
  v5(v18, &a2, 1, &v21, 1);
  v6 = (*(unsigned __int16 (__thiscall **)(_DWORD *))(*this + 0x74))(this);
  v7 = v2[0x88];
  v20 = v6;
  v8 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v7 + 8);
  v21 = 4;
  v8(v7, &v20, 4, &v21, 1);
  for ( i = 0; (unsigned __int16)i < v20; ++i )
  {
    v10 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x80))(this, i);
    (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v10);
  }
  v11 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v2[0x88] + 8);
  v19 = v2[0x88];
  v21 = 4;
  result = v11(v19, &v20, 4, &v21, 1);
  for ( j = 0; j < v20; ++j )
  {
    v14 = *((unsigned __int16 *)this + 0x25);
    *(float *)&v21 = 0.0;
    if ( j < v14 )
      v21 = *(int *)(*(this + 0x11) + 4 * j);
    v15 = v2[0x88];
    v22 = v21;
    v16 = *(int (__cdecl **)(int, int *, int, int *, int))(v15 + 8);
    v21 = 4;
    result = v16(v15, &v22, 4, &v21, 1);
  }
  return result;
}
