int __thiscall sub_8A0C30(char *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, char *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_712AE0((unsigned int *)a2);
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x10))(this);
  v4 = *(int (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v6 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  return v4(v6, this + 8, 4, &a2, 1);
}
