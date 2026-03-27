int __stdcall sub_8C9DC0(_DWORD *a1)
{
  int v1; // ebx

  v1 = sub_712A90(a1);
  sub_8AEAB0((signed int)a1);
  return (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x24))(a1, v1);
}
