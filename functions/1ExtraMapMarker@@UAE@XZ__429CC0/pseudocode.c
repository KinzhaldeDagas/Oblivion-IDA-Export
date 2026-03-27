void __thiscall ExtraMapMarker::~ExtraMapMarker(ExtraMapMarker *this)
{
  TESForm::ModReferenceList *v2; // edi

  *(_DWORD *)this = &ExtraMapMarker::`vftable';
  v2 = *((TESForm::ModReferenceList **)this + 3);
  if ( v2 )
  {
    TESFullName_Initialize(v2);
    FormHeapFree((unsigned int)v2);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
