// Verified: constructs TESRegion (FormType 0x2F), allocates owned 12-byte TESRegionDataList at +0x18 (ownsData=1), allocates 8-byte region-area list head at +0x1C, zeros worldspace +0x20 and cached weather +0x24, initializes float +0x28 to flt_A30634.
TESRegion *__thiscall TESRegion_ctor(TESRegion *this)
{
  _DWORD *v2; // eax
  TESRegionDataList *v3; // eax
  OblivionTESRegionAreaList *v4; // eax
  double v5; // st7

  TESForm_constr(&this->form); /*0x4a2c5b*/
  this->form.vtbl = (TESFormVtbl *)&TESRegion::`vftable'; /*0x4a2c68*/
  v2 = (_DWORD *)FormHeapAlloc(0xCu); /*0x4a2c6e*/
  if ( v2 ) /*0x4a2c81*/
    v3 = (TESRegionDataList *)sub_4A43E0(v2, 1); /*0x4a2c87*/
  else
    v3 = 0; /*0x4a2c8e*/
  this->dataList = v3; /*0x4a2c96*/
  v4 = (OblivionTESRegionAreaList *)FormHeapAlloc(8u); /*0x4a2c99*/
  if ( v4 ) /*0x4a2ca3*/
  {
    v4->firstArea = 0; /*0x4a2ca5*/
    v4->overflowNodes = 0; /*0x4a2ca7*/
  }
  else
  {
    v4 = 0; /*0x4a2cac*/
  }
  v5 = flt_A30634; /*0x4a2cae*/
  this->areas = v4; /*0x4a2cb4*/
  this->unknown28 = v5; /*0x4a2cb7*/
  this->form.member.type = kFormType_Region; /*0x4a2cba*/
  this->worldspace = 0; /*0x4a2cbe*/
  this->cachedWeather = 0; /*0x4a2cc1*/
  return this; /*0x4a2cc6*/
}
