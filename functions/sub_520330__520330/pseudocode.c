TESForm *__thiscall sub_520330(TESForm *this, void *a2)
{
  TESForm *result; // eax
  TESForm *v4; // esi

  result = (TESForm *)OblivionDynamicCast(
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESIdleForm `RTTI Type Descriptor',
                        0);
  v4 = result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, result);
    result = (TESForm *)sub_56A850((void **)this + 0xC, &v4[2]);
    *((_BYTE *)this + 0x38) = v4[2].member.flags;
  }
  return result;
}
