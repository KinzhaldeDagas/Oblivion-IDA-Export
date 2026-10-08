float *__thiscall TESModel_CopyFrom(float *this, void *a2)
{
  float *result; // eax
  float *v4; // esi
  int v5; // ebx
  int v6; // eax

  result = (float *)OblivionDynamicCast( /*0x46d587*/
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                      &TESModel `RTTI Type Descriptor',
                      0);
  v4 = result; /*0x46d58c*/
  if ( result ) /*0x46d593*/
  {
    v5 = *(_DWORD *)this; /*0x46d59b*/
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)result + 0x14))(result); /*0x46d59f*/
    result = (float *)(*(int (__thiscall **)(float *, int))(v5 + 0x18))(this, v6); /*0x46d5a7*/
    *(this + 3) = v4[3]; /*0x46d5ac*/
  }
  return result; /*0x46d5b0*/
}
