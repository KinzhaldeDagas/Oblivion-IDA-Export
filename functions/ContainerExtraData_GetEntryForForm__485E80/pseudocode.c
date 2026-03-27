void __thiscall ContainerExtraData_GetEntryForForm(_DWORD **this, int a2, int a3, int a4)
{
  if ( *this )
    ContainerExtraData_GetEntryForForm_::FindEntryLoop(this, 1);
  else
    ContainerExtraData_GetEntryForForm_::Return_0(a2, a3, a4);
}
