// positive sp value has been detected, the output may be wrong!
int __usercall Actor_GetDefaultClass_::Return_CurrentClass@<eax>(int a1@<ebx>)
{
  return *(_DWORD *)(a1 + 0x650);
}
