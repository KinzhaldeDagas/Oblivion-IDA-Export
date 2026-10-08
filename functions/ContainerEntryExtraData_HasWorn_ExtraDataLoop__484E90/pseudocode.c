char __userpurge ContainerEntryExtraData_HasWorn_::ExtraDataLoop@<al>(char a1@<dil>, _DWORD *a2@<esi>, int a3)
{
  while ( 1 ) /*0x484e90*/
  {
    if ( !*a2 ) /*0x484e94*/
      return ContainerEntryExtraData_HasWorn_::Return_0(a3); /*0x484ea6*/
    if ( ExtraDataList_HasWorn((_BYTE *)*a2, a1) ) /*0x484e97*/
      break; /*0x484e97*/
    a2 = (_DWORD *)a2[1]; /*0x484ea0*/
    if ( !a2 ) /*0x484ea5*/
      return ContainerEntryExtraData_HasWorn_::Return_0(a3); /*0x484ea5*/
  }
  return ContainerEntryExtraData_HasWorn_::Return_1(a3);
}
