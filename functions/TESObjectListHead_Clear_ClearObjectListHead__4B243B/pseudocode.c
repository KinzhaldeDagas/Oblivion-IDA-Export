// positive sp value has been detected, the output may be wrong!
void __usercall TESObjectListHead_Clear_::ClearObjectListHead(_DWORD *a1@<esi>)
{
  *a1 = 0; /*0x4b243b*/
  a1[1] = 0; /*0x4b2441*/
  a1[2] = 0; /*0x4b2448*/
}
