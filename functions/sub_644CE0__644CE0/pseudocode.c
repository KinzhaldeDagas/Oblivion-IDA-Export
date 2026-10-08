TESPackage *__thiscall sub_644CE0(LowProcess *this)
{
  TESPackage *result; // eax

  result = this->editorPackage; /*0x644ce3*/
  if ( result ) /*0x644ce8*/
  {
    result = (TESPackage *)result->members.target; /*0x644cea*/
    if ( result ) /*0x644cef*/
    {
      result = (TESPackage *)sub_569E60((TargetData *)result).form; /*0x644cf3*/
      if ( result ) /*0x644cfa*/
      {
        result = (TESPackage *)sub_569E60(this->editorPackage->members.target).form; /*0x644d02*/
        if ( (result->members.super.flags & 0x20) == 0 && result != (TESPackage *)this->follow ) /*0x644d15*/
          return ((TESPackage *(__thiscall *)(LowProcess *, TESPackage *))this->SetUnk02C)(this, result); /*0x644d22*/
      }
    }
  }
  return result; /*0x644d24*/
}
