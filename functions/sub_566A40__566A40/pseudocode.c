TESObjectCELL *__thiscall sub_566A40(char **this, Actor *a2)
{
  char *v3; // esi
  int v4; // edi
  TESObjectCELL *result; // eax
  TESObjectREFR *v6; // eax
  LowProcess *process; // ecx

  v3 = *(this + 9);
  v4 = 0;
  if ( !v3 || sub_569740(*(this + 9)) == 2 )
  {
    if ( a2 )
      return (TESObjectCELL *)sub_4D79D0(a2);
    return (TESObjectCELL *)v4;
  }
  else
  {
    switch ( sub_569740(v3) )
    {
      case 0:
        if ( !sub_5697E0(v3) )
          return (TESObjectCELL *)v4;
        v6 = (TESObjectREFR *)sub_5697E0(v3);
        goto LABEL_7;
      case 1:
        return (TESObjectCELL *)sub_569800(v3);
      case 3:
        if ( !a2 )
          return (TESObjectCELL *)v4;
        return (TESObjectCELL *)sub_5E1F60(a2);
      case 4:
      case 5:
        if ( !a2 )
          return (TESObjectCELL *)v4;
        process = a2->members.super.process;
        if ( !process || (char **)process->GetCurrentPackage(process) != this )
          return (TESObjectCELL *)v4;
        v6 = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a2->members.super.process->GetUnk030)(a2->members.super.process);
        if ( v6 )
LABEL_7:
          result = TESObjectREFR_GetParentCell(v6);
        else
          result = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
        break;
      default:
        return (TESObjectCELL *)v4;
    }
  }
  return result;
}
