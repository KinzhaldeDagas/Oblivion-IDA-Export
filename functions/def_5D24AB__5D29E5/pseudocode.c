// positive sp value has been detected, the output may be wrong!
void __userpurge def_5D24AB(int a1@<ebp>, unsigned int *a2@<esi>, int a3, int a4)
{
  int v4; // edx

  Tile_SetFloat(*(Tile **)(a1 + 0x3C), 0xFA1u, 1.0); /*0x5d29f3*/
  ContainerEntryExtraData_DestroyDataTable(a2, v4); /*0x5d29fa*/
  FormHeapFree((unsigned int)a2); /*0x5d2a00*/
}
