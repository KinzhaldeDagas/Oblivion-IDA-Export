// positive sp value has been detected, the output may be wrong!
int __usercall Actor_GetDefaultClass_::def_6629E1@<eax>(int a1@<ebx>)
{
  if ( !*(_DWORD *)(a1 + 0x650) )
    *(_DWORD *)(a1 + 0x650) = TESDataHandler_LookupTESClassByFormID((void *)iClassAcrobat);
  return Actor_GetDefaultClass_::Return_CurrentClass();
}
