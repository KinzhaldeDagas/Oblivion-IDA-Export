int __thiscall sub_566D00(char **this, int a2)
{
  char *v3; // esi
  int v4; // edi
  int result; // eax
  int v6; // ecx
  int v7; // eax

  v3 = *(this + 9); /*0x566d04*/
  v4 = 0; /*0x566d08*/
  if ( !v3 || sub_569740(*(this + 9)) == 2 ) /*0x566d18*/
  {
LABEL_11:
    v7 = a2; /*0x566d7f*/
    if ( a2 ) /*0x566d85*/
      return v7; /*0x566d87*/
    return v4; /*0x566d89*/
  }
  else
  {
    switch ( sub_569740(v3) ) /*0x566d26*/
    {
      case 0: /*0x566d26*/
        if ( !sub_5697E0(v3) ) /*0x566d36*/
          return v4; /*0x566d36*/
        return sub_5697E0(v3); /*0x566d44*/
      case 3: /*0x566d26*/
        goto LABEL_11;
      case 4: /*0x566d26*/
      case 5: /*0x566d26*/
        if ( !a2 ) /*0x566d4d*/
          return v4; /*0x566d4d*/
        v6 = *(_DWORD *)(a2 + 0x58); /*0x566d4f*/
        if ( !v6 || (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x184))(v6) != this ) /*0x566d62*/
          return v4; /*0x566d62*/
        v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x58) + 0x3B8))(*(_DWORD *)(a2 + 0x58)); /*0x566d6f*/
        if ( v7 ) /*0x566d73*/
          return v7; /*0x566d73*/
        result = a2; /*0x566d77*/
        break; /*0x566d7c*/
      default:
        return v4;
    }
  }
  return result; /*0x566d41*/
}
