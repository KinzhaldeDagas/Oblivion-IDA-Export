unsigned int *__thiscall sub_5E43B0(_BYTE *this)
{
  TESActorBase *v2; // edi
  ExtraDataList *****ContainerChanges; // ebp
  int v4; // ebx

  v2 = 0; /*0x5e43b8*/
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x5e43bf*/
  if ( !ContainerChanges ) /*0x5e43c3*/
    return 0; /*0x5e43f9*/
  v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this); /*0x5e43d2*/
  if ( v4 ) /*0x5e43d6*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e43e2*/
      v2 = (TESActorBase *)v4; /*0x5e43e8*/
  }
  return sub_48B660(ContainerChanges, v2, 0.0); /*0x5e43f5*/
}
