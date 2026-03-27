void __thiscall sub_88B680(int *this, char a2)
{
  _WORD *v3; // eax
  _WORD *v4; // edi
  void (__thiscall *v5)(int *); // edx
  _DWORD *v6; // eax
  _WORD *v7; // edi
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

  if ( a2 )
  {
    if ( !*(this + 5) )
    {
      v15 = 0;
      v16 = 0;
      v17 = 0x80000000;
      v18 = 0;
      sub_8CABF0();
      v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x74, 0x32);
      v3[2] = 0x74;
      LOBYTE(v18) = 1;
      v4 = sub_8CB220(v3);
      v5 = *(void (__thiscall **)(int *))(*this + 0x58);
      LOBYTE(v18) = 0;
      v5(this);
      v6 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
      sub_8CB070(v4, v6);
      if ( v4 )
        v7 = v4 + 4;
      else
        v7 = 0;
      if ( v16 == (v17 & 0x3FFFFFFF) )
        sub_8A6EE0((int)&v15, 4);
      v15[v16] = v7;
      v8 = dword_BA7D98;
      ++v16;
      v9 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x10))(v8, 0x90, 0x32);
      v9[2] = 0x90;
      LOBYTE(v18) = 2;
      v10 = sub_8CA540(v9, (int *)&v15, 0);
      v11 = *this;
      *(this + 5) = (int)v10;
      v12 = *(void (__thiscall **)(int *))(v11 + 0x58);
      LOBYTE(v18) = 0;
      v12(this);
      sub_8BAA60(0x7D000);
      sub_8BA9F0();
      sub_8C9E20(*(this + 5), 0, 0x61A9);
      v18 = 0xFFFFFFFF;
      if ( v17 >= 0 )
      {
        v13 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v13 )
          v13 = dword_BA7D9C;
        sub_8A75D0(v13, v15, 4 * v17, 0x14);
      }
    }
  }
  else
  {
    if ( this )
      (*(void (__thiscall **)(int *))(*this + 0x58))(this);
    v14 = (void (__thiscall ***)(_DWORD, int))*(this + 5);
    if ( v14 )
      (**v14)(v14, 1);
    (*(void (__thiscall **)(int *))(*this + 0x58))(this);
    *(this + 5) = 0;
  }
}
