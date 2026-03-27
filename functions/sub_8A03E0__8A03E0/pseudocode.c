int __userpurge sub_8A03E0@<eax>(int a1@<ecx>, int a2, int a3)
{
  int v3; // eax
  int (__cdecl *v4)(int); // edx
  int v6; // [esp-2h] [ebp-4h] BYREF

  v6 = a1;
  v3 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 0x74))(a1, (char *)&v6 + 3, v6);
  if ( v3 )
    v4 = *(int (__cdecl **)(int))(*(_DWORD *)(v3 - 4) + 8);
  else
    v4 = *(int (__cdecl **)(int))(*(_DWORD *)0 + 8);
  v6 = a3;
  return v4(v6);
}
