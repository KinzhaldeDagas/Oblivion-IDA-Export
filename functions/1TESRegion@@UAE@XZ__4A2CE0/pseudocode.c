// Verified: destroys the owned region-data list (which destroys each TESRegionData object) and each region-area payload/node before TESForm base destruction.
void __thiscall TESRegion_dtor(TESRegion *this)
{
  TESRegionDataList *dataList; // esi
  OblivionTESRegionAreaList *areas; // eax
  unsigned int *i; // esi
  void **overflowNodes; // ecx

  this->form.vtbl = (TESFormVtbl *)&TESRegion::`vftable'; /*0x4a2d09*/
  dataList = this->dataList; /*0x4a2d0f*/
  if ( dataList ) /*0x4a2d1c*/
  {
    sub_4A44C0(dataList); /*0x4a2d20*/
    FormHeapFree((unsigned int)dataList); /*0x4a2d26*/
  }
  areas = this->areas; /*0x4a2d2e*/
  if ( areas ) /*0x4a2d33*/
  {
    for ( i = (unsigned int *)areas->firstArea; areas->firstArea; i = (unsigned int *)areas->firstArea ) /*0x4a2d35*/
    {
      overflowNodes = (void **)areas->overflowNodes; /*0x4a2d40*/
      if ( overflowNodes ) /*0x4a2d45*/
      {
        areas->overflowNodes = overflowNodes[1]; /*0x4a2d4a*/
        areas->firstArea = *overflowNodes; /*0x4a2d50*/
        FormHeapFree((unsigned int)overflowNodes); /*0x4a2d52*/
      }
      else
      {
        areas->firstArea = 0; /*0x4a2d5c*/
      }
      if ( i ) /*0x4a2d64*/
      {
        sub_4A76F0(i); /*0x4a2d68*/
        FormHeapFree((unsigned int)i); /*0x4a2d6e*/
      }
      areas = this->areas; /*0x4a2d76*/
    }
    FormHeapFree((unsigned int)this->areas); /*0x4a2d83*/
  }
  TESForm_destr(&this->form); /*0x4a2d95*/
}
