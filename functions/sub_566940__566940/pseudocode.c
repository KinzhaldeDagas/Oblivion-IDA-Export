TESWorldSpace *__thiscall sub_566940(TESPackage *this, Actor *a2)
{
  LocationData *location; // esi
  int v4; // edi
  TESObjectCELL *v5; // eax
  TESWorldSpace *result; // eax
  TESObjectREFR *v7; // eax
  LowProcess *process; // ecx

  location = this->members.location;
  v4 = 0;
  if ( !location || sub_569740((char *)this->members.location) == 2 )
  {
    if ( a2 )
      return (TESWorldSpace *)sub_4D79B0((TESObjectREFR *)a2);
    return (TESWorldSpace *)v4;
  }
  else
  {
    switch ( sub_569740((char *)location) )
    {
      case 0:
        if ( !sub_5697E0(location) )
          return (TESWorldSpace *)v4;
        v7 = (TESObjectREFR *)sub_5697E0(location);
        goto LABEL_8;
      case 1:
        if ( !sub_569800(location) )
          return (TESWorldSpace *)v4;
        v5 = (TESObjectCELL *)sub_569800(location);
        return TESObjectCELL_GetWorldSpace(v5);
      case 3:
        if ( !a2 )
          return (TESWorldSpace *)v4;
        return (TESWorldSpace *)sub_5E1F40(a2);
      case 4:
      case 5:
        if ( !a2 )
          return (TESWorldSpace *)v4;
        process = a2->members.super.process;
        if ( !process || process->GetCurrentPackage(process) != this )
          return (TESWorldSpace *)v4;
        v7 = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a2->members.super.process->GetUnk030)(a2->members.super.process);
        if ( v7 )
LABEL_8:
          result = TESObjectREFR_GetWorldSpace(v7);
        else
          result = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2);
        break;
      default:
        return (TESWorldSpace *)v4;
    }
  }
  return result;
}
