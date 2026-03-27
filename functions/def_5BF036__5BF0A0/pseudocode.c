// positive sp value has been detected, the output may be wrong!
int __usercall def_5BF036@<eax>(int a1@<esi>)
{
  *(_BYTE *)(sub_5E12B0(*(Actor **)(a1 + 0xD8)) + 0x1DB) = 1;
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 0xD8) + 0x304))(0.0);
}
