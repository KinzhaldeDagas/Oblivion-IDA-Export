// positive sp value has been detected, the output may be wrong!
int __usercall ActiveEffect_Base_Save_::SaveActiveEffect@<eax>(int a1@<esi>)
{
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x10))(a1);
}
