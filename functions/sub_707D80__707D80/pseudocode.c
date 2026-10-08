unsigned int __thiscall sub_707D80(_DWORD *this, _BYTE *a2, char a3, bool *a4)
{
  _DWORD *v5; // esi
  char v6; // al
  char v7; // dl
  bool v8; // al
  unsigned int result; // eax
  unsigned int v10; // ecx
  char v11; // cl

  v5 = (_DWORD *)*(this + 3); /*0x707d84*/
  if ( v5 ) /*0x707d89*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 0x5C))(v5) ) /*0x707d9b*/
    {
      v5 = (_DWORD *)v5[0xD]; /*0x707d9d*/
      if ( !v5 ) /*0x707da2*/
        goto LABEL_4; /*0x707da2*/
    }
    v6 = 1; /*0x707e09*/
  }
  else
  {
LABEL_4:
    v6 = 0; /*0x707da4*/
  }
  v7 = a3; /*0x707da6*/
  v8 = v6 == 0; /*0x707db0*/
  *a4 = v8; /*0x707db5*/
  if ( !a3 ) /*0x707db7*/
    v7 = !v8; /*0x707dbb*/
  result = *(this + 0x27); /*0x707dbe*/
  if ( result ) /*0x707dc6*/
  {
    while ( 1 ) /*0x707dcb*/
    {
      v10 = *(_DWORD *)(result + 8); /*0x707dcb*/
      result = *(_DWORD *)result; /*0x707dcf*/
      if ( v10 ) /*0x707dd1*/
      {
        if ( *(_DWORD *)(v10 + 0xC) ) /*0x707dd3*/
          break; /*0x707dd3*/
      }
      if ( !result ) /*0x707ddb*/
        goto LABEL_11; /*0x707ddb*/
    }
    v11 = 1; /*0x707e0d*/
  }
  else
  {
LABEL_11:
    v11 = 0; /*0x707ddd*/
    if ( !v7 && !*(this + 3) ) /*0x707de3*/
    {
      *a2 = 0; /*0x707ded*/
      *((_WORD *)this + 0xC) &= ~2u; /*0x707def*/
LABEL_14:
      *((_WORD *)this + 0xC) &= ~4u; /*0x707df5*/
      goto LABEL_15; /*0x707df5*/
    }
  }
  *a2 = 1; /*0x707e13*/
  *((_WORD *)this + 0xC) |= 2u; /*0x707e16*/
  result = *((unsigned __int16 *)this + 0xC); /*0x707e1d*/
  if ( !v7 ) /*0x707e21*/
    goto LABEL_14; /*0x707e21*/
  result |= 4u; /*0x707e23*/
  *((_WORD *)this + 0xC) = result; /*0x707e26*/
LABEL_15:
  if ( v11 ) /*0x707dfd*/
  {
    *((_WORD *)this + 0xC) |= 0x18u; /*0x707dff*/
  }
  else
  {
    *((_WORD *)this + 0xC) &= ~8u; /*0x707e2c*/
    *((_WORD *)this + 0xC) |= 0x10u; /*0x707e32*/
  }
  return result; /*0x707e04*/
}
