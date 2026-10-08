void __thiscall sub_8BD480(void *this, int a2)
{
  int v3; // ebx
  float *v4; // eax
  char *v5; // ebx
  void (__thiscall *v6)(void *, char *); // edx
  int v7; // [esp-4h] [ebp-78h]
  float v8[19]; // [esp+14h] [ebp-60h] BYREF
  unsigned int v9; // [esp+70h] [ebp-4h]

  if ( a2 ) /*0x8bd4be*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x130, 0x2E); /*0x8bd4d4*/
    *(_WORD *)(v3 + 4) = 0x130; /*0x8bd4d6*/
    v7 = *(_DWORD *)a2; /*0x8bd4e2*/
    v9 = 0; /*0x8bd4eb*/
    v4 = sub_8A2050((float *)(a2 + 0x20), v8); /*0x8bd4f3*/
    v5 = sub_90F580((char *)v3, *(_DWORD *)(a2 + 4), v4, v7); /*0x8bd504*/
    v6 = *(void (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x4C); /*0x8bd508*/
    v9 = 0xFFFFFFFF; /*0x8bd50e*/
    v6(this, v5); /*0x8bd516*/
    sub_8BC730((int (__stdcall ***)(signed int))v5); /*0x8bd51a*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8bd527*/
  }
}
