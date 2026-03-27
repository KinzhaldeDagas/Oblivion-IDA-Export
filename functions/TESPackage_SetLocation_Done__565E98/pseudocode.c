// positive sp value has been detected, the output may be wrong!
void __userpurge TESPackage_SetLocation_::Done(int a1@<esi>, int a2)
{
  *(_DWORD *)(a1 + 0x24) = 0;
}
