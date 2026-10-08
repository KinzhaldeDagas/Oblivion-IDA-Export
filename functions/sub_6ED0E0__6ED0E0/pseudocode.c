int __userpurge sub_6ED0E0@<eax>(int a1@<ecx>, int a2, int a3)
{
  bool v4; // zf
  int (__thiscall *v5)(int, int); // edx
  int v6; // ebx
  int v8; // ebx

  v4 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0xAC))(a1) == 0; /*0x6ed0f3*/
  v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0xA0); /*0x6ed0f7*/
  if ( v4 ) /*0x6ed100*/
  {
    v8 = v5(a1, a3); /*0x6ed122*/
    return 4 * (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x9C))(a1, a3) * v8; /*0x6ed13a*/
  }
  else
  {
    v6 = v5(a1, a3); /*0x6ed104*/
    return 2 * (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x9C))(a1, a3) * v6; /*0x6ed11a*/
  }
}
