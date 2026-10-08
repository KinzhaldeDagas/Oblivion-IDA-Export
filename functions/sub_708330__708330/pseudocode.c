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

  v2 = (_DWORD *)a2; /*0x708333*/
  sub_700460((int)this, (int)this, (_DWORD *)a2); /*0x70833b*/
  v14 = v2[0x88]; /*0x708353*/
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v14 + 8); /*0x708354*/
  v16 = 2; /*0x708357*/
  v4(v14, this + 0x18, 2, &v16, 1); /*0x70835f*/
  sub_7094A0(this + 0x54, (signed int)v2); /*0x708368*/
  sub_711BF0((float *)this + 0xC, (int)v2); /*0x708371*/
  v15 = v2[0x88]; /*0x70838d*/
  v5 = *(void (__cdecl **)(int, char *, int, int *, int))(v15 + 8); /*0x70838e*/
  v16 = 4; /*0x708391*/
  v5(v15, this + 0x60, 4, &v16, 1); /*0x708395*/
  v6 = v2[0x88]; /*0x70839d*/
  a2 = *((_DWORD *)this + 0x29); /*0x7083aa*/
  v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v6 + 8); /*0x7083ae*/
  v16 = 4; /*0x7083b8*/
  v7(v6, &a2, 4, &v16, 1); /*0x7083bc*/
  if ( a2 > 0 )
  {
    v8 = FormHeapAlloc((unsigned __int64)(unsigned int)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
    v9 = *((_DWORD **)this + 0x27); /*0x7083df*/
    if ( v9 ) /*0x7083ea*/
    {
      v10 = (_DWORD *)v8; /*0x7083ec*/
      do /*0x7083fd*/
      {
        v11 = v9 + 2; /*0x7083f0*/
        v9 = (_DWORD *)*v9; /*0x7083f3*/
        *v10++ = *v11; /*0x7083f7*/
      }
      while ( v9 ); /*0x7083fd*/
    }
    for ( i = a2 - 1; i >= 0; --i ) /*0x708406*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(v8 + 4 * i)); /*0x70841c*/
    FormHeapFree(v8); /*0x708424*/
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x2A)); /*0x70843d*/
}
