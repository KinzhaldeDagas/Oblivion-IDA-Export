int __userpurge sub_763090@<eax>(int a1@<ecx>, int a2@<esi>, int a3)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 0x8AC) )
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x8AC) + 0x88))(*(_DWORD *)(a1 + 0x8AC), 0, 0);
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x40))(a3, a2);
  if ( v3 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x44))(a3, 0);
}
