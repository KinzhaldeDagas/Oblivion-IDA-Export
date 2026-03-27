int __userpurge sub_6ED0E0@<eax>(int a1@<ecx>, int a2, int a3)
{
  bool v4; // zf
  int (__thiscall *v5)(int, int); // edx
  int v6; // ebx
  int v8; // ebx

  v4 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0xAC))(a1) == 0;
  v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0xA0);
  if ( v4 )
  {
    v8 = v5(a1, a3);
    return 4 * (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x9C))(a1, a3) * v8;
  }
  else
  {
    v6 = v5(a1, a3);
    return 2 * (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x9C))(a1, a3) * v6;
  }
}
