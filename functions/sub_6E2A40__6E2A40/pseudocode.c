int __thiscall sub_6E2A40(int *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, int *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e2a42*/
  sub_75E460(this, (_DWORD *)a2); /*0x6e2a49*/
  v4 = *(int (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e2a54*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e2a64*/
  a2 = 4; /*0x6e2a65*/
  return v4(v6, this + 0x12, 4, &a2, 1); /*0x6e2a72*/
}
