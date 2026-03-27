UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, 0);
  dword_BAA604 = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_BAA604 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case 0xFFFFFFFD:
      dword_BAA604 = 1;
      result = GetACP();
      goto LABEL_3;
    case 0xFFFFFFFC:
      result = *(_DWORD *)(v2 + 4);
      dword_BAA604 = 1;
LABEL_3:
      if ( v4 )
        *(_DWORD *)(v3 + 0x70) &= ~2u;
      return result;
  }
  if ( v4 )
    *(_DWORD *)(v3 + 0x70) &= ~2u;
  return a1;
}
