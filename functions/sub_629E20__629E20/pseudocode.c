int __userpurge sub_629E20@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int result; // eax
  int v7; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x34C))(a1);
  if ( !(_BYTE)result )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x184))(a1, a3);
    (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x2C0))(a1, a2);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x380))(a5)
      && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1) == 4 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x380))(a5);
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 0x58) + 0x2C8))(*(_DWORD *)(v7 + 0x58));
    }
    else
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2C8))(a1);
    }
  }
  return result;
}
