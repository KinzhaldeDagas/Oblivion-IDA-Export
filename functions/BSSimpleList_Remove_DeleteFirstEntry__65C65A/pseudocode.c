// positive sp value has been detected, the output may be wrong!
void __userpurge BSSimpleList_Remove_::DeleteFirstEntry(_DWORD *a1@<ecx>, _DWORD *a2@<esi>, int a3)
{
  unsigned int v3; // [esp-8h] [ebp-Ch]

  a1[1] = a2[1]; /*0x65c65d*/
  *a1 = *a2; /*0x65c663*/
  FormHeapFree(v3); /*0x65c665*/
}
