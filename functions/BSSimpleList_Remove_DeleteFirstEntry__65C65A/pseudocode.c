// positive sp value has been detected, the output may be wrong!
void __userpurge BSSimpleList_Remove_::DeleteFirstEntry(_DWORD *a1@<ecx>, _DWORD *a2@<esi>, int a3)
{
  unsigned int v3; // [esp-8h] [ebp-Ch]

  a1[1] = a2[1];
  *a1 = *a2;
  FormHeapFree(v3);
}
