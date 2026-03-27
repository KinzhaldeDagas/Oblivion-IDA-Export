void __thiscall sub_8A2160(_DWORD *this, int a2)
{
  int v3; // esi
  float *v4; // eax
  char *v5; // esi
  void (__thiscall *v6)(_DWORD *, char *); // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v10[19]; // [esp+14h] [ebp-60h] BYREF
  unsigned int v11; // [esp+70h] [ebp-4h]

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 0x24);
    *(_WORD *)(v3 + 4) = 0x60;
    v11 = 0;
    v4 = sub_8A2050((float *)(a2 + 0x10), v10);
    v5 = sub_8E8B50((char *)v3, *(_DWORD *)(a2 + 4), v4);
    v6 = *(void (__thiscall **)(_DWORD *, char *))(*this + 0x4C);
    v11 = 0xFFFFFFFF;
    v6(this, v5);
    if ( *((_WORD *)v5 + 2) )
    {
      if ( !--*((_WORD *)v5 + 3) )
        (**(void (__thiscall ***)(char *, int))v5)(v5, 1);
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x7C))(this, a2);
    v7 = *(this + 2);
    if ( v7 && (v8 = *(_DWORD *)(v7 + 0xC)) != 0 )
      v9 = *(_DWORD *)(v8 + 8);
    else
      v9 = 0;
    if ( v9 )
      *(this + 4) = *(_DWORD *)(v9 + 0x10);
  }
}
