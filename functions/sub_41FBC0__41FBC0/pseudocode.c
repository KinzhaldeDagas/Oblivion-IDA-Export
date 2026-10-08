// Replaces or creates ExtraTresPassPackage. An existing package object is destructed before the supplied TrespassPackage is installed.
BSExtraDataVtbl *__thiscall ExtraDataList_SetTrespassPackageExtra(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *vtbl; // ecx
  ExtraTresPassPackage *v7; // eax
  BSExtraData *v8; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage); /*0x41fbe7*/
  v4 = ExtraData; /*0x41fbec*/
  if ( ExtraData ) /*0x41fbf0*/
  {
    vtbl = ExtraData[1].vtbl; /*0x41fbf2*/
    if ( vtbl ) /*0x41fbf7*/
      (*((void (__thiscall **)(BSExtraDataVtbl *, int))vtbl->Destructor + 4))(vtbl, 1); /*0x41fc00*/
    v4[1].vtbl = a2; /*0x41fc06*/
    return a2; /*0x41fc02*/
  }
  else
  {
    v7 = (ExtraTresPassPackage *)FormHeapAlloc(0x10u); /*0x41fc1f*/
    if ( v7 ) /*0x41fc35*/
      v8 = (BSExtraData *)ExtraTresPassPackage::ExtraTresPassPackage(v7, (int)a2); /*0x41fc3e*/
    else
      v8 = 0; /*0x41fc45*/
    return (BSExtraDataVtbl *)BaseExtraList_AddExtra(this, v8); /*0x41fc52*/
  }
}
