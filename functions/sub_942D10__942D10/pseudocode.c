BOOL __thiscall sub_942D10(char ***this, int a2, int a3, char *a4, int a5)
{
  char **v6; // ecx
  unsigned int v7; // edi
  char *v8; // eax

  v6 = *(this + 3);
  v7 = (unsigned int)a4;
  if ( v6 )
    v8 = sub_942CB0(v6, (unsigned int)a4, (unsigned __int8 *)*(this + 2) + 0xC);
  else
    v8 = a4;
  (*((void (__thiscall **)(_DWORD, int, unsigned int, int, char *, int))**(this + 2) + 2))(
    *(this + 2),
    a3,
    v7,
    a2,
    v8,
    a5);
  return *(_BYTE *)(*(int (__thiscall **)(int, char **))(*(_DWORD *)a2 + 8))(a2, &a4) == 0;
}
