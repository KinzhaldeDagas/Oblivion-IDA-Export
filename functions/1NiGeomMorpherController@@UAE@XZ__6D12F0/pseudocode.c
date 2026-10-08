void __thiscall NiGeomMorpherController::~NiGeomMorpherController(NiGeomMorpherController *this)
{
  NiMorphData *morphData; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  NiMorphData *v4; // edi
  float *data; // [esp-4h] [ebp-24h]

  this->super.vtbl = (NiTimeControllerVtbl *)&NiGeomMorpherController::`vftable'; /*0x6d131a*/
  morphData = this->morphData; /*0x6d1320*/
  v3 = InterlockedDecrement; /*0x6d1325*/
  if ( morphData ) /*0x6d1333*/
  {
    if ( !v3((volatile LONG *)morphData + 1) ) /*0x6d1339*/
      (**(void (__thiscall ***)(NiMorphData *, int))morphData)(morphData, 1); /*0x6d134b*/
    this->morphData = 0; /*0x6d134d*/
  }
  sub_6D10F0((unsigned __int16 *)this, 0.0); /*0x6d1358*/
  v4 = this->morphData; /*0x6d135d*/
  if ( v4 ) /*0x6d1367*/
  {
    if ( !v3((volatile LONG *)v4 + 1) ) /*0x6d136d*/
      (**(void (__thiscall ***)(NiMorphData *, int))v4)(v4, 1); /*0x6d137f*/
  }
  data = this->morphWeights.data; /*0x6d1384*/
  this->morphWeights.vtbl = &NiTArray<float>::`vftable'; /*0x6d1385*/
  FormHeapFree((unsigned int)data); /*0x6d138c*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr((NiPSysResetOnLoopCtlr *)this); /*0x6d139e*/
}
