BSExtraDataVtbl *__thiscall sub_566A40(char **this, Actor *a2)
{
  char *v3; // esi
  int v4; // edi
  BSExtraDataVtbl *result; // eax
  void *v6; // eax
  LowProcess *process; // ecx

  v3 = *(this + 9); /*0x566a44*/
  v4 = 0; /*0x566a48*/
  if ( !v3 || sub_569740(*(this + 9)) == 2 ) /*0x566a5c*/
  {
    if ( a2 ) /*0x566b01*/
      return sub_4D79D0(a2); /*0x566b08*/
    return (BSExtraDataVtbl *)v4; /*0x566b0a*/
  }
  else
  {
    switch ( sub_569740(v3) ) /*0x566a72*/
    {
      case 0: /*0x566a72*/
        if ( !sub_5697E0(v3) ) /*0x566a91*/
          return (BSExtraDataVtbl *)v4; /*0x566a91*/
        v6 = (void *)sub_5697E0(v3); /*0x566a95*/
        goto LABEL_7; /*0x566a95*/
      case 1: /*0x566a72*/
        return (BSExtraDataVtbl *)sub_569800(v3); /*0x566a85*/
      case 3: /*0x566a72*/
        if ( !a2 ) /*0x566aaf*/
          return (BSExtraDataVtbl *)v4; /*0x566aaf*/
        return (BSExtraDataVtbl *)sub_5E1F60(a2); /*0x566abb*/
      case 4: /*0x566a72*/
      case 5: /*0x566a72*/
        if ( !a2 ) /*0x566ac4*/
          return (BSExtraDataVtbl *)v4; /*0x566ac4*/
        process = a2->members.super.process; /*0x566ac6*/
        if ( !process || (char **)process->GetCurrentPackage(process) != this ) /*0x566ad9*/
          return (BSExtraDataVtbl *)v4; /*0x566ad9*/
        v6 = (void *)((int (__thiscall *)(LowProcess *))a2->members.super.process->GetUnk030)(a2->members.super.process); /*0x566ae6*/
        if ( v6 ) /*0x566aea*/
LABEL_7:
          result = (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(v6); /*0x566a9a*/
        else
          result = (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(a2); /*0x566aee*/
        break; /*0x566af8*/
      default:
        return (BSExtraDataVtbl *)v4;
    }
  }
  return result; /*0x566a82*/
}
