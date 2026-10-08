TESWorldSpace *__thiscall sub_566940(TESPackage *this, Actor *a2)
{
  LocationData *location; // esi
  int v4; // edi
  TESObjectCELL *v5; // eax
  TESWorldSpace *result; // eax
  TESObjectREFR *v7; // eax
  LowProcess *process; // ecx

  location = this->members.location; /*0x566944*/
  v4 = 0; /*0x566948*/
  if ( !location || sub_569740((char *)this->members.location) == 2 ) /*0x56695c*/
  {
    if ( a2 ) /*0x566a17*/
      return (TESWorldSpace *)sub_4D79B0((TESObjectREFR *)a2); /*0x566a1e*/
    return (TESWorldSpace *)v4; /*0x566a20*/
  }
  else
  {
    switch ( sub_569740((char *)location) ) /*0x566972*/
    {
      case 0: /*0x566972*/
        if ( !sub_5697E0(location) ) /*0x5669a7*/
          return (TESWorldSpace *)v4; /*0x5669a7*/
        v7 = (TESObjectREFR *)sub_5697E0(location); /*0x5669ab*/
        goto LABEL_8; /*0x5669ab*/
      case 1: /*0x566972*/
        if ( !sub_569800(location) ) /*0x566982*/
          return (TESWorldSpace *)v4; /*0x566982*/
        v5 = (TESObjectCELL *)sub_569800(location); /*0x56698a*/
        return TESObjectCELL_GetWorldSpace(v5); /*0x56699b*/
      case 3: /*0x566972*/
        if ( !a2 ) /*0x5669c5*/
          return (TESWorldSpace *)v4; /*0x5669c5*/
        return (TESWorldSpace *)sub_5E1F40(a2); /*0x5669d1*/
      case 4: /*0x566972*/
      case 5: /*0x566972*/
        if ( !a2 ) /*0x5669da*/
          return (TESWorldSpace *)v4; /*0x5669da*/
        process = a2->members.super.process; /*0x5669dc*/
        if ( !process || process->GetCurrentPackage(process) != this ) /*0x5669ef*/
          return (TESWorldSpace *)v4; /*0x5669ef*/
        v7 = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a2->members.super.process->GetUnk030)(a2->members.super.process); /*0x5669fc*/
        if ( v7 ) /*0x566a00*/
LABEL_8:
          result = TESObjectREFR_GetWorldSpace(v7); /*0x5669b0*/
        else
          result = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2); /*0x566a04*/
        break; /*0x566a0e*/
      default:
        return (TESWorldSpace *)v4;
    }
  }
  return result; /*0x566998*/
}
