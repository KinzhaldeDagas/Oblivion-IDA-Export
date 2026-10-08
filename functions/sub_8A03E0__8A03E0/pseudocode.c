int __userpurge sub_8A03E0@<eax>(int a1@<ecx>, int a2, int a3)
{
  int v3; // eax
  int (__cdecl *v4)(int); // edx
  int v6; // [esp-2h] [ebp-4h] BYREF

  v6 = a1; /*0x8a03e0*/
  v3 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 0x74))(a1, (char *)&v6 + 3, v6); /*0x8a03eb*/
  if ( v3 ) /*0x8a03ef*/
    v4 = *(int (__cdecl **)(int))(*(_DWORD *)(v3 - 4) + 8); /*0x8a03f4*/
  else
    v4 = *(int (__cdecl **)(int))(*(_DWORD *)0 + 8); /*0x8a040d*/
  v6 = a3; /*0x8a03fe*/
  return v4(v6); /*0x8a0402*/
}
