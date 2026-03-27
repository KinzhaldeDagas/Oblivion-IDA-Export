int __thiscall sub_708330(char *this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, char *, int, int *, int); // eax
  void (__cdecl *v5)(int, char *, int, int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, signed int *, int, int *, int); // edx
  unsigned int v8; // ebp
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // edx
  int i; // ebx
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp-14h] [ebp-24h]
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_700460((int)this, (int)this, (_DWORD *)a2);
  v14 = v2[0x88];
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v14 + 8);
  v16 = 2;
  v4(v14, this + 0x18, 2, &v16, 1);
  sub_7094A0(this + 0x54, (signed int)v2);
  sub_711BF0((float *)this + 0xC, (int)v2);
  v15 = v2[0x88];
  v5 = *(void (__cdecl **)(int, char *, int, int *, int))(v15 + 8);
  v16 = 4;
  v5(v15, this + 0x60, 4, &v16, 1);
  v6 = v2[0x88];
  a2 = *((_DWORD *)this + 0x29);
  v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v6 + 8);
  v16 = 4;
  v7(v6, &a2, 4, &v16, 1);
  if ( a2 > 0 )
  {
    v8 = FormHeapAlloc((unsigned __int64)(unsigned int)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
    v9 = *((_DWORD **)this + 0x27);
    if ( v9 )
    {
      v10 = (_DWORD *)v8;
      do
      {
        v11 = v9 + 2;
        v9 = (_DWORD *)*v9;
        *v10++ = *v11;
      }
      while ( v9 );
    }
    for ( i = a2 - 1; i >= 0; --i )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(v8 + 4 * i));
    FormHeapFree(v8);
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x2A));
}
