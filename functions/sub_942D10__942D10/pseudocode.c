BOOL __thiscall sub_942D10(char ***this, int a2, int a3, char *a4, int a5)
{
  char **v6; // ecx
  char *v7; // edi
  char *v8; // eax

  v6 = *(this + 3); /*0x942d13*/
  v7 = a4; /*0x942d19*/
  if ( v6 ) /*0x942d1d*/
    v8 = sub_942CB0(v6, (unsigned int)a4, (unsigned __int8 *)*(this + 2) + 0xC); /*0x942d27*/
  else
    v8 = a4; /*0x942d2e*/
  (*((void (__thiscall **)(_DWORD, int, char *, int, char *, int))**(this + 2) + 2))(*(this + 2), a3, v7, a2, v8, a5); /*0x942d46*/
  return *(_BYTE *)(*(int (__thiscall **)(int, char **))(*(_DWORD *)a2 + 8))(a2, &a4) == 0; /*0x942d5e*/
}
