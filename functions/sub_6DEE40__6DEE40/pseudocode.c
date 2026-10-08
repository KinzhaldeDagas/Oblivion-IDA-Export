int __thiscall sub_6DEE40(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6dee42*/
  j_NiSingleInterpController_SaveBinary(this, a2); /*0x6dee49*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6dee54*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6dee64*/
  a2 = 2; /*0x6dee65*/
  return v4(v6, this + 0x40, 2, &a2, 1); /*0x6dee72*/
}
