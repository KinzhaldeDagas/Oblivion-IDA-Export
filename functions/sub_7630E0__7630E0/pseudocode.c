int __userpurge sub_7630E0@<eax>(int a1@<ecx>, int a2@<esi>, int a3)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 0x8AC) )
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x8AC) + 0x78))(*(_DWORD *)(a1 + 0x8AC), 0, 0);
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x38))(a3, a2);
  if ( v3 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x3C))(a3, 0);
}
