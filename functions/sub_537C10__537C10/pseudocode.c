_DWORD *__stdcall sub_537C10(int a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  char v3; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *result; // eax

  if ( a1 )
    v1 = *(_DWORD **)(a1 + 0xC);
  else
    v1 = 0;
  if ( v1 )
  {
    v2 = (*(int (__thiscall **)(_DWORD *))(*v1 + 4))(v1);
    if ( v2 )
    {
      while ( (char *)v2 != dword_BA7D84 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        if ( !v2 )
          goto LABEL_8;
      }
      v3 = 1;
    }
    else
    {
LABEL_8:
      v3 = 0;
    }
    v1 = v3 != 0 ? v1 : 0;
  }
  if ( sub_535AC0(v1) == *(float *)&SrcStr || !v1 )
    return 0;
  v4 = v1[2];
  if ( v4 && (v5 = v4 + 0x14) != 0 )
    v6 = *(_DWORD *)(v5 + 0x1C);
  else
    LOBYTE(v6) = 0;
  switch ( v6 & 0x3F )
  {
    case 4:
    case 5:
    case 6:
    case 8:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
      result = v1;
      break;
    default:
      return 0;
  }
  return result;
}
