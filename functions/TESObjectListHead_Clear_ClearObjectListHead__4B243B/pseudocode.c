// positive sp value has been detected, the output may be wrong!
void __usercall TESObjectListHead_Clear_::ClearObjectListHead(_DWORD *a1@<esi>)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
}
