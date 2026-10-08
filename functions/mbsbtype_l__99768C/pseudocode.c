int __usercall _mbsbtype_l@<eax>(int a1@<edi>, char *a2, int a3, struct localeinfo_struct *a4)
{
  unsigned __int8 *v4; // esi
  int result; // eax
  int v6; // ecx
  struct localeinfo_struct v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-8h]
  char v9; // [esp+14h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, a4); /*0x99769a*/
  v4 = (unsigned __int8 *)a2; /*0x99769f*/
  if ( !a2 ) /*0x9976a6*/
  {
LABEL_2:
    *_errno() = 0x16; /*0x9976a8*/
    _invalid_parameter(0, a1, (int)v4); /*0x9976b8*/
LABEL_3:
    if ( v9 ) /*0x9976c3*/
      *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x9976c8*/
    return 0xFFFFFFFF; /*0x9976cf*/
  }
  if ( v7.mbcinfo->ismbcodepage ) /*0x9976d4*/
  {
    result = 0xFFFFFFFF; /*0x9976e9*/
    while ( a3 || *v4 ) /*0x9976f3*/
    {
      if ( !*v4 ) /*0x9976fa*/
        goto LABEL_2; /*0x9976fa*/
      result = _mbbtype_l(*v4, result, &v7); /*0x997702*/
      v6 = a3; /*0x997707*/
      ++v4; /*0x99770d*/
      --a3; /*0x99770e*/
      if ( !v6 ) /*0x997713*/
      {
        if ( v9 ) /*0x997718*/
          *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99771d*/
        return result; /*0x99771d*/
      }
    }
    goto LABEL_3; /*0x9976f3*/
  }
  if ( v9 ) /*0x9976dc*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x9976e1*/
  return 0; /*0x997721*/
}
