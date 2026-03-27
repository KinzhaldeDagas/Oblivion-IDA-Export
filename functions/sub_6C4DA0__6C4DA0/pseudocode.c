int __thiscall sub_6C4DA0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, unsigned int *, int, int *, int); // edx
  unsigned int i; // ebx
  int v9; // [esp-14h] [ebp-28h]
  unsigned int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_716050(this, (signed int)a2);
  LOBYTE(a2) = *((_BYTE *)this + 0x6C);
  v9 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v9 + 8);
  v11 = 1;
  v4(v9, &a2, 1, &v11, 1);
  v5 = v2[0x88];
  v10 = *((unsigned __int16 *)this + 0x23);
  v6 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 8);
  v11 = 4;
  v6(v5, &v10, 4, &v11, 1);
  for ( i = 0; i < v10; ++i )
  {
    if ( *(_DWORD *)(*(this + 0x10) + 4 * i) )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*(this + 0x10) + 4 * i));
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x1F));
}
