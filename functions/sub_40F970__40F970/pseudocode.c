int __usercall sub_40F970@<eax>(int a1@<esi>)
{
  (*(void (__stdcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 0xE4))(a1, 0x1B, 0);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x10C))(a1, 0, 4, 2);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x10C))(a1, 0, 2, 2);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x10C))(a1, 0, 5, 2);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x10C))(a1, 0, 1, 4);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x114))(a1, 0, 6, 2);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x114))(a1, 0, 5, 2);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x114))(a1, 0, 7, 2);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x114))(a1, 0, 1, 3);
  return (*(int (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 0x114))(a1, 0, 2, 3);
}
