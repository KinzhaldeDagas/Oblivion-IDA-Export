int __userpurge ContainerEntryExtraData_HasWorn_::ExtraDataLoop@<eax>(char a1@<dil>, _DWORD *a2@<esi>, int a3)
{
  while ( 1 )
  {
    if ( !*a2 )
      return ContainerEntryExtraData_HasWorn_::Return_0(a3);
    if ( ExtraDataList_HasWorn((_BYTE *)*a2, a1) )
      break;
    a2 = (_DWORD *)a2[1];
    if ( !a2 )
      return ContainerEntryExtraData_HasWorn_::Return_0(a3);
  }
  return ContainerEntryExtraData_HasWorn_::Return_1(a3);
}
