void __thiscall sub_589430(_DWORD *this)
{
  _DWORD *v1; // edi
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  int v4; // esi
  unsigned __int16 v5; // dx

  v1 = (_DWORD *)*(this + 0xD); /*0x589432*/
  while ( v1 ) /*0x589437*/
  {
    v2 = (_DWORD *)v1[2]; /*0x589440*/
    v3 = (_DWORD *)v2[6]; /*0x589446*/
    v1 = (_DWORD *)*v1; /*0x58944b*/
    if ( !v3 ) /*0x58944d*/
      goto LABEL_6; /*0x58944d*/
    while ( 1 ) /*0x589450*/
    {
      v4 = v3[2]; /*0x589450*/
      v5 = *(_WORD *)(v4 + 0x18); /*0x589456*/
      v3 = (_DWORD *)*v3; /*0x58945f*/
      if ( v5 == 0xFA4 ) /*0x589461*/
        break; /*0x589461*/
      if ( v5 > 0xFA4u || !v3 ) /*0x589467*/
        goto LABEL_6; /*0x589467*/
    }
    if ( fConstant_2 == *(float *)(v4 + 4) ) /*0x58948c*/
      v2[0xB] |= 0x100u; /*0x58948e*/
    else
LABEL_6:
      sub_589430(v2); /*0x589469*/
  }
}
