void __thiscall sub_8BD480(void *this, int a2)
{
  int v3; // ebx
  float *v4; // eax
  char *v5; // ebx
  void (__thiscall *v6)(void *, char *); // edx
  int v7; // [esp-4h] [ebp-78h]
  float v8[19]; // [esp+14h] [ebp-60h] BYREF
  unsigned int v9; // [esp+70h] [ebp-4h]

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x130, 0x2E);
    *(_WORD *)(v3 + 4) = 0x130;
    v7 = *(_DWORD *)a2;
    v9 = 0;
    v4 = sub_8A2050((float *)(a2 + 0x20), v8);
    v5 = sub_90F580((char *)v3, *(_DWORD *)(a2 + 4), v4, v7);
    v6 = *(void (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x4C);
    v9 = 0xFFFFFFFF;
    v6(this, v5);
    sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))v5);
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
