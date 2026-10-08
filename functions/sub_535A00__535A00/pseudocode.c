// SpecificItemCollector constructor for raycasts. Initializes collector and, when a TESObjectREFR is supplied, reads its collision filter via 0x65ABE0 and rewrites collision layer matrix row for layer a2 (or 0x1C if a2 < 0x18). LOS uses this, but movement climb probes should avoid unintended global mask churn unless needed.
float *__thiscall SpecificItemCollector_InitForRaycast(float *this, signed int a2, TESObjectREFR *a3)
{
  MobileObject *v4; // ecx
  bool v5; // zf
  signed int v6; // eax
  char v7; // cl

  *(this + 9) = 1.0; /*0x535a2c*/
  *(this + 9) = 1.0; /*0x535a2f*/
  *(this + 0xC) = 0.0; /*0x535a32*/
  *(this + 1) = 1.0; /*0x535a35*/
  v4 = (MobileObject *)a3; /*0x535a38*/
  v5 = a3 == 0; /*0x535a3c*/
  *(_DWORD *)this = &SpecificItemCollector::`vftable'; /*0x535a3e*/
  *(this + 0x10) = 0.0; /*0x535a48*/
  if ( !v5 ) /*0x535a4b*/
  {
    MobileObject_GetCollisionFilterInfo(v4, (TESObjectREFR *)&a3); /*0x535a52*/
    v6 = a2; /*0x535a57*/
    v7 = (char)a3; /*0x535a5e*/
    *((_DWORD *)this + 0x10) = a3; /*0x535a62*/
    if ( a2 < 0x18 ) /*0x535a65*/
      v6 = 0x1C; /*0x535a67*/
    *(_DWORD *)(4 * v6 + 0xBA7DB0) = (1 << (v7 & 0x3F)) | 0xA277F;// TES4 authoritative: SpecificItemCollector setup writes a layer-matrix row directly using the target object's low 6 filter bits plus constant mask 0xA277F; avoid this for generic climb rays unless collector filtering is deliberately needed. /*0x535a7c*/
  }
  return this; /*0x535a85*/
}
