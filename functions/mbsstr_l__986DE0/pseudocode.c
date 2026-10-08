char *__usercall _mbsstr_l@<eax>(int a1@<edi>, int a2@<esi>, char *Str, char *SubStr, struct localeinfo_struct *a5)
{
  char *result; // eax
  char *v6; // edi
  char *v7; // eax
  int v8; // esi
  bool v9; // zf
  char *v10; // ecx
  _BYTE v11[4]; // [esp+4h] [ebp-18h] BYREF
  int v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h]
  char v14; // [esp+10h] [ebp-Ch]
  char *v15; // [esp+14h] [ebp-8h]
  unsigned __int8 v16; // [esp+1Bh] [ebp-1h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v11, a5); /*0x986ded*/
  if ( *(_DWORD *)(v12 + 8) ) /*0x986df7*/
  {
    if ( SubStr ) /*0x986e23*/
    {
      if ( *SubStr ) /*0x986e50*/
      {
        if ( Str ) /*0x986e6e*/
        {
          v6 = Str; /*0x986e9a*/
          v15 = &Str[-strlen(SubStr)]; /*0x986ea4*/
          v7 = &v15[strlen(Str)]; /*0x986ead*/
          if ( *Str ) /*0x986eb0*/
          {
            v8 = Str - SubStr; /*0x986eb6*/
            while ( v6 <= v7 ) /*0x986ebb*/
            {
              v9 = *v6 == 0; /*0x986ebf*/
              v10 = SubStr; /*0x986ec1*/
              v16 = *v6; /*0x986ec4*/
              if ( !v9 ) /*0x986ec7*/
              {
                while ( *v10 ) /*0x986ecd*/
                {
                  if ( v10[v8] == *v10 ) /*0x986ed2*/
                  {
                    ++v10; /*0x986ed4*/
                    if ( v10[v8] ) /*0x986ed5*/
                      continue; /*0x986ed5*/
                  }
                  goto LABEL_23; /*0x986ed8*/
                }
LABEL_32:
                if ( v14 ) /*0x986f12*/
                  *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x986f17*/
                return v6; /*0x986f1b*/
              }
LABEL_23:
              if ( !*v10 ) /*0x986edc*/
                goto LABEL_32; /*0x986edc*/
              ++v6; /*0x986eec*/
              ++v8; /*0x986eed*/
              if ( (*(_BYTE *)(v16 + v12 + 0x1D) & 4) != 0 ) /*0x986ef0*/
              {
                if ( !*v6 ) /*0x986ef4*/
                  break; /*0x986ef4*/
                ++v6; /*0x986ef6*/
                ++v8; /*0x986ef7*/
              }
              if ( !*v6 ) /*0x986ef8*/
                break; /*0x986efa*/
            }
          }
          if ( v14 ) /*0x986eff*/
            *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x986f04*/
          return 0; /*0x986f08*/
        }
        else
        {
          *_errno() = 0x16; /*0x986e7a*/
          _invalid_parameter(0, a1, 0); /*0x986e80*/
          if ( v14 ) /*0x986e8b*/
            *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x986e90*/
          return 0; /*0x986e94*/
        }
      }
      else
      {
        if ( v14 ) /*0x986e57*/
          *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x986e5c*/
        return Str; /*0x986e60*/
      }
    }
    else
    {
      *_errno() = 0x16; /*0x986e2f*/
      _invalid_parameter(0, a1, a2); /*0x986e35*/
      if ( v14 ) /*0x986e40*/
        *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x986e45*/
      return 0; /*0x986e49*/
    }
  }
  else
  {
    result = strstr(Str, SubStr); /*0x986e02*/
    if ( v14 ) /*0x986e0c*/
      *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x986e15*/
  }
  return result; /*0x986f0c*/
}
