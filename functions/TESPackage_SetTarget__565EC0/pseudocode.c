// 3DTheft decode: TESPackage_SetTarget allocates package->target when needed, copies a 0x0C TargetData record, and leaves later callers to set target type/ref/count fields.
void __thiscall TESPackage_SetTarget(_DWORD *this, unsigned __int8 *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( a2 ) /*0x565eea*/
  {
    if ( !*(this + 0xA) ) /*0x565eec*/
    {
      v3 = (_DWORD *)FormHeapAlloc(0xCu); /*0x565ef4*/
      if ( v3 ) /*0x565f0a*/
        v4 = TESPackage_TargetData_constr(v3); /*0x565f0e*/
      else
        v4 = 0; /*0x565f15*/
      *(this + 0xA) = v4; /*0x565f1f*/
    }
    TESPackage_TargetData_CopyFrom((unsigned __int8 *)*(this + 0xA), a2);// 3DTheft decode 2026-05-16: TESPackage_SetTarget copies from the caller's 0x0C TargetData into package-owned target data. Caller does not transfer ownership of the source buffer. /*0x565f26*/
  }
  else
  {
    TESPackage_SetTarget_::ClearTargetData((int)this, 0); /*0x565eea*/
  }
}
