// positive sp value has been detected, the output may be wrong!
int __usercall Actor_GetDefaultClass_::def_6629E1@<eax>(int a1@<ebx>)
{
  if ( !*(_DWORD *)(a1 + 0x650) ) /*0x662a3e*/
    *(_DWORD *)(a1 + 0x650) = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x7C])); /*0x662a5b*/
  return Actor_GetDefaultClass_::Return_CurrentClass(a1);
}
