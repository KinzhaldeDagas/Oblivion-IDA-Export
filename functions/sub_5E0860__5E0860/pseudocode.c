char __thiscall sub_5E0860(TESObjectREFR *this)
{
  int ***ContainerExtraDataForRef; // edi

  if ( this->vtbl->GetBaseForm(this) ) /*0x5e086c*/
    ((int (__thiscall *)(TESObjectREFR *))this->vtbl->IsActor)(this); /*0x5e087e*/
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x5e0892*/
  if ( !ContainerExtraDataForRef ) /*0x5e0899*/
    return 0; /*0x5e08b4*/
  if ( this == (TESObjectREFR *)reference ) /*0x5e08a3*/
    sub_65DD20(reference); /*0x5e08a5*/
  return sub_48D910(ContainerExtraDataForRef); /*0x5e08ac*/
}
