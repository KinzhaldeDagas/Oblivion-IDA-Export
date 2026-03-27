// positive sp value has been detected, the output may be wrong!
void __usercall ContainerExtraData_destr_::DeallocEntryList(unsigned int *a1@<edi>)
{
  FormHeapFree(*a1);
}
