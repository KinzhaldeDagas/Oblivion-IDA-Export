char __thiscall sub_5E0860(TESObjectREFR *this)
{
  int ***ContainerExtraDataForRef; // edi

  if ( this->vtbl->GetBaseForm(this) )
    ((int (__thiscall *)(TESObjectREFR *))this->vtbl->IsActor)(this);
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this);
  if ( !ContainerExtraDataForRef )
    return 0;
  if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    sub_65DD20(TESDataHandler_g_PlayerRef);
  return sub_48D910(ContainerExtraDataForRef);
}
