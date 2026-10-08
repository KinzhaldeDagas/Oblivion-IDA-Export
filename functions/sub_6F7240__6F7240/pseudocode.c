_DWORD *__thiscall sub_6F7240(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  *this = 0; /*0x6f724f*/
  if ( !a3 ) /*0x6f7255*/
    goto LABEL_10; /*0x6f7255*/
  if ( !a2 ) /*0x6f7259*/
    goto LABEL_10; /*0x6f7259*/
  v4 = a3[6]; /*0x6f725b*/
  v5 = a3 + 1; /*0x6f7261*/
  v6 = v4 < 0x10 ? a3 + 1 : (_DWORD *)*v5;
  if ( (unsigned int)v6 > a2 ) /*0x6f726e*/
    goto LABEL_10; /*0x6f726e*/
  if ( v4 >= 0x10 ) /*0x6f7273*/
    v5 = (_DWORD *)*v5; /*0x6f7275*/
  if ( a2 > (unsigned int)v5 + a3[5] ) /*0x6f727e*/
LABEL_10:
    _invalid_parameter_noinfo(); /*0x6f7280*/
  *this = a3; /*0x6f7285*/
  *(this + 1) = a2; /*0x6f7287*/
  return this; /*0x6f728c*/
}
