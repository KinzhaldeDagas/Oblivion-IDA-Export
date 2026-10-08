UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, 0); /*0x98f8d6*/
  dword_BA9E10[0x1FD] = 0; /*0x98f8de*/
  switch ( a1 ) /*0x98f8e4*/
  {
    case 0xFFFFFFFE: /*0x98f8e4*/
      dword_BA9E10[0x1FD] = 1; /*0x98f8e6*/
      result = GetOEMCP(); /*0x98f8f0*/
      goto LABEL_3; /*0x98f8f0*/
    case 0xFFFFFFFD: /*0x98f8e4*/
      dword_BA9E10[0x1FD] = 1; /*0x98f909*/
      result = GetACP(); /*0x98f913*/
      goto LABEL_3; /*0x98f919*/
    case 0xFFFFFFFC: /*0x98f8e4*/
      result = *(_DWORD *)(v2 + 4); /*0x98f923*/
      dword_BA9E10[0x1FD] = 1; /*0x98f926*/
LABEL_3:
      if ( v4 ) /*0x98f8f9*/
        *(_DWORD *)(v3 + 0x70) &= ~2u; /*0x98f8fe*/
      return result; /*0x98f902*/
  }
  if ( v4 ) /*0x98f935*/
    *(_DWORD *)(v3 + 0x70) &= ~2u; /*0x98f93a*/
  return a1; /*0x98f940*/
}
