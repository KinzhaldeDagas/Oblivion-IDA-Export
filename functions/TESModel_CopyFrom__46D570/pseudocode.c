float *__thiscall TESModel_CopyFrom(float *this, void *a2)
{
  float *result; // eax
  float *v4; // esi
  int v5; // ebx
  int v6; // eax

  result = (float *)OblivionDynamicCast(
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                      &TESModel `RTTI Type Descriptor',
                      0);
  v4 = result;
  if ( result )
  {
    v5 = *(_DWORD *)this;
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)result + 0x14))(result);
    result = (float *)(*(int (__thiscall **)(float *, int))(v5 + 0x18))(this, v6);
    *(this + 3) = v4[3];
  }
  return result;
}
