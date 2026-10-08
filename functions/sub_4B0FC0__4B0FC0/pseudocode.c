float *__thiscall sub_4B0FC0(TESForm *this, TESForm *a2)
{
  float *result; // eax
  float *v4; // edi

  result = (float *)OblivionDynamicCast( /*0x4b0fd8*/
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESObjectLIGH `RTTI Type Descriptor',
                      0);
  v4 = result; /*0x4b0fdd*/
  if ( result ) /*0x4b0fe4*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b0fe9*/
    *((float *)this + 0x1C) = v4[0x1C]; /*0x4b0ff1*/
    *((float *)this + 0x1D) = v4[0x1D]; /*0x4b0ff7*/
    *((float *)this + 0x1E) = v4[0x1E]; /*0x4b0ffd*/
    *((float *)this + 0x1F) = v4[0x1F]; /*0x4b1003*/
    *((float *)this + 0x20) = v4[0x20]; /*0x4b100c*/
    *((float *)this + 0x21) = v4[0x21]; /*0x4b1018*/
    *((float *)this + 0x22) = v4[0x22]; /*0x4b1024*/
    result = *((float **)v4 + 0x23); /*0x4b102a*/
    *((_DWORD *)this + 0x23) = result; /*0x4b1030*/
  }
  return result; /*0x4b1036*/
}
