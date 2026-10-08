void __thiscall ExtraMapMarker::~ExtraMapMarker(ExtraMapMarker *this)
{
  TESForm::ModReferenceList *v2; // edi

  *(_DWORD *)this = &ExtraMapMarker::`vftable'; /*0x429ce9*/
  v2 = *((TESForm::ModReferenceList **)this + 3); /*0x429cef*/
  if ( v2 ) /*0x429cfc*/
  {
    TESFullName_Initialize(v2); /*0x429d00*/
    FormHeapFree((unsigned int)v2); /*0x429d06*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x429d0e*/
}
