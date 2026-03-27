TESForm *__thiscall sub_4BC240(TESForm *this, void *a2)
{
  TESForm *result; // eax
  TESForm *v4; // esi
  __int16 refID_high; // cx

  result = (TESForm *)OblivionDynamicCast(
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESSubSpace `RTTI Type Descriptor',
                        0);
  v4 = result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, result);
    result = (TESForm *)LOWORD(v4[1].member.modlist.data);
    refID_high = HIWORD(v4[1].member.refID);
    *((_WORD *)this + 0x12) = v4[1].member.refID;
    *((_WORD *)this + 0x13) = refID_high;
    *((_WORD *)this + 0x14) = (_WORD)result;
  }
  return result;
}
