void __thiscall sub_88B680(int *this, char a2)
{
  _WORD *v3; // eax
  const void **v4; // edi
  void (__thiscall *v5)(int *); // edx
  _DWORD *v6; // eax
  const void **v7; // edi
  int v8; // ecx
  _WORD *v9; // eax
  _WORD *v10; // eax
  int v11; // edx
  void (__thiscall *v12)(int *); // eax
  int v13; // ecx
  void (__thiscall ***v14)(_DWORD, int); // ecx
  _DWORD *v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  unsigned int v18; // [esp+24h] [ebp-4h]

  if ( a2 ) /*0x88b6ae*/
  {
    if ( !*(this + 5) ) /*0x88b6b4*/
    {
      v15 = 0; /*0x88b6bd*/
      v16 = 0; /*0x88b6c1*/
      v17 = 0x80000000; /*0x88b6c5*/
      v18 = 0; /*0x88b6cd*/
      sub_8CABF0(); /*0x88b6d1*/
      v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x74, 0x32); /*0x88b6e5*/
      v3[2] = 0x74; /*0x88b6e7*/
      LOBYTE(v18) = 1; /*0x88b6f3*/
      v4 = (const void **)sub_8CB220(v3); /*0x88b6fd*/
      v5 = *(void (__thiscall **)(int *))(*this + 0x58); /*0x88b701*/
      LOBYTE(v18) = 0; /*0x88b706*/
      v5(this); /*0x88b70a*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x88b713*/
      sub_8CB070(v4, v6); /*0x88b718*/
      if ( v4 ) /*0x88b71f*/
        v7 = v4 + 2; /*0x88b721*/
      else
        v7 = 0; /*0x88b726*/
      if ( v16 == (v17 & 0x3FFFFFFF) ) /*0x88b735*/
        sub_8A6EE0((const void **)&v15, 4); /*0x88b73e*/
      v15[v16] = v7; /*0x88b74e*/
      v8 = unk_BA7D98; /*0x88b751*/
      ++v16; /*0x88b757*/
      v9 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x10))(v8, 0x90, 0x32); /*0x88b768*/
      v9[2] = 0x90; /*0x88b76a*/
      LOBYTE(v18) = 2; /*0x88b77c*/
      v10 = sub_8CA540(v9, (int *)&v15, 0); /*0x88b781*/
      v11 = *this; /*0x88b786*/
      *(this + 5) = (int)v10; /*0x88b788*/
      v12 = *(void (__thiscall **)(int *))(v11 + 0x58); /*0x88b78b*/
      LOBYTE(v18) = 0; /*0x88b790*/
      v12(this); /*0x88b794*/
      sub_8BAA60(0x7D000); /*0x88b79b*/
      sub_8BA9F0(); /*0x88b7a3*/
      sub_8C9E20(*(this + 5), 0, (char *)0x61A9); /*0x88b7b0*/
      v18 = 0xFFFFFFFF; /*0x88b7bb*/
      if ( v17 >= 0 ) /*0x88b7c3*/
      {
        v13 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x88b7d5*/
        if ( !v13 ) /*0x88b7dd*/
          v13 = unk_BA7D9C; /*0x88b7df*/
        sub_8A75D0(v13, v15, 4 * v17, 0x14); /*0x88b7f6*/
      }
    }
  }
  else
  {
    if ( this ) /*0x88b812*/
      (*(void (__thiscall **)(int *))(*this + 0x58))(this); /*0x88b819*/
    v14 = (void (__thiscall ***)(_DWORD, int))*(this + 5); /*0x88b81b*/
    if ( v14 ) /*0x88b820*/
      (**v14)(v14, 1); /*0x88b828*/
    (*(void (__thiscall **)(int *))(*this + 0x58))(this); /*0x88b831*/
    *(this + 5) = 0; /*0x88b833*/
  }
}
