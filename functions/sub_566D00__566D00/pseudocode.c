int __thiscall sub_566D00(char **this, int a2)
{
  char *v3; // esi
  int v4; // edi
  int result; // eax
  int v6; // ecx
  int v7; // eax

  v3 = *(this + 9);
  v4 = 0;
  if ( !v3 || sub_569740(*(this + 9)) == 2 )
  {
LABEL_11:
    v7 = a2;
    if ( a2 )
      return v7;
    return v4;
  }
  else
  {
    switch ( sub_569740(v3) )
    {
      case 0:
        if ( !sub_5697E0(v3) )
          return v4;
        return sub_5697E0(v3);
      case 3:
        goto LABEL_11;
      case 4:
      case 5:
        if ( !a2 )
          return v4;
        v6 = *(_DWORD *)(a2 + 0x58);
        if ( !v6 || (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x184))(v6) != this )
          return v4;
        v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x58) + 0x3B8))(*(_DWORD *)(a2 + 0x58));
        if ( v7 )
          return v7;
        result = a2;
        break;
      default:
        return v4;
    }
  }
  return result;
}
