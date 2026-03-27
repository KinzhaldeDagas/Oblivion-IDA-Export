TESPackage *__thiscall sub_644CE0(LowProcess *this)
{
  TESPackage *result; // eax

  result = this->editorPackage;
  if ( result )
  {
    result = (TESPackage *)result->members.target;
    if ( result )
    {
      result = (TESPackage *)sub_569E60((TargetData *)result).form;
      if ( result )
      {
        result = (TESPackage *)sub_569E60(this->editorPackage->members.target).form;
        if ( (result->members.super.flags & 0x20) == 0 && result != (TESPackage *)this->follow )
          return ((TESPackage *(__thiscall *)(LowProcess *, TESPackage *))this->SetUnk02C)(this, result);
      }
    }
  }
  return result;
}
