int __thiscall sub_7266D0(_DWORD *this, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  void (__cdecl *v6)(int, _DWORD *, int, unsigned int *, int); // edx
  _DWORD *v8; // ebx
  int (__thiscall *v9)(_DWORD *, _DWORD); // edx
  void (__cdecl *v10)(int, unsigned int *, int, unsigned int *, int); // eax
  void (__cdecl *v11)(int, int *, int, unsigned int *, int); // eax
  unsigned int v12; // ebx
  void (__cdecl *v13)(int, unsigned int *, int, int *, int); // edx
  void (__cdecl *v14)(int, int *, unsigned int, int *, int); // eax
  int v15; // edx
  unsigned int i; // ecx
  int v18; // [esp-28h] [ebp-148h]
  int v19; // [esp-28h] [ebp-148h]
  int v20; // [esp-14h] [ebp-134h]
  int v21; // [esp-14h] [ebp-134h]
  int v22; // [esp-14h] [ebp-134h]
  unsigned int v23; // [esp+10h] [ebp-110h] BYREF
  int v24; // [esp+14h] [ebp-10Ch] BYREF
  unsigned int v25; // [esp+18h] [ebp-108h] BYREF
  int v26; // [esp+1Ch] [ebp-104h]
  int v27[32]; // [esp+20h] [ebp-100h] BYREF
  int v28[32]; // [esp+A0h] [ebp-80h] BYREF

  v6 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(*(_DWORD *)(a2 + 0x21C) + 4);
  v8 = this + 1;
  v20 = *(_DWORD *)(a2 + 0x21C);
  v23 = 4;
  v6(v20, this + 1, 4, &v23, 1);
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))*this;
  *((_BYTE *)this + 0xD) = a6 < 0x40u;
  *(this + 2) = v9(this, *v8);
  *((_BYTE *)this + 0xC) = 1;
  v21 = *(_DWORD *)(a2 + 0x21C);
  v10 = *(void (__cdecl **)(int, unsigned int *, int, unsigned int *, int))(v21 + 4);
  v23 = 4;
  v10(v21, &v25, 4, &v23, 1);
  v18 = *(_DWORD *)(a2 + 0x21C);
  v11 = *(void (__cdecl **)(int, int *, int, unsigned int *, int))(v18 + 4);
  v23 = 4;
  v11(v18, v28, 4 * v25, &v23, 1);
  v12 = 0;
  if ( v25 )
  {
    v26 = a6;
    do
    {
      v13 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4);
      v22 = *(_DWORD *)(a2 + 0x21C);
      v24 = 4;
      v13(v22, &v23, 4, &v24, 1);
      v19 = *(_DWORD *)(a2 + 0x21C);
      v14 = *(void (__cdecl **)(int, int *, unsigned int, int *, int))(v19 + 4);
      v24 = 4;
      v14(v19, v27, 4 * v23, &v24, 1);
      v15 = 0;
      for ( i = 0; i < v23; ++i )
        v15 += v27[i];
      (*(void (__cdecl **)(_DWORD, int, int, int *, unsigned int))(*(_DWORD *)(a2 + 0x21C) + 4))(
        *(_DWORD *)(a2 + 0x21C),
        *(this + 2) + v28[v12++],
        v15 * v26,
        v27,
        v23);
    }
    while ( v12 < v25 );
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 4))(this, 0, 0);
}
