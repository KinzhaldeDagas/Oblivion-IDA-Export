unsigned int *__thiscall sub_5E43B0(_BYTE *this)
{
  int *v2; // edi
  ExtraDataList *****ContainerChanges; // ebp
  int v4; // ebx

  v2 = 0;
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
  if ( !ContainerChanges )
    return 0;
  v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) )
      v2 = (int *)v4;
  }
  return sub_48B660(ContainerChanges, v2, 0.0);
}
