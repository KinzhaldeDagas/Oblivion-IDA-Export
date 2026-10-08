// Exact FaceGen matrix equality: dimensions must match and all coefficient bytes are compared.
bool __thiscall FaceGenMatrix_Equals(const FaceGenMatrix *this, const FaceGenMatrix *right)
{
  unsigned int rows; // eax
  unsigned int columns; // esi
  unsigned int v5; // esi
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  unsigned int v9; // esi
  unsigned __int8 *v10; // edi
  unsigned __int8 *v11; // eax
  unsigned int v12; // esi
  unsigned __int8 *v13; // edi
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // edi
  unsigned __int8 *v16; // eax
  int v17; // eax

  rows = this->rows; /*0x550333*/
  if ( right->rows != this->rows ) /*0x55033c*/
    return 0; /*0x55033c*/
  columns = this->columns; /*0x550342*/
  if ( right->columns != columns ) /*0x550348*/
    return 0; /*0x55041c*/
  if ( rows && columns ) /*0x550358*/
  {
    v5 = 4 * rows * columns; /*0x550369*/
    v6 = (_DWORD *)sub_54F7A0(&right->allocator08, 0); /*0x550375*/
    v7 = (_DWORD *)sub_54F7A0(&this->allocator08, 0); /*0x550377*/
    if ( v5 < 4 ) /*0x55037f*/
    {
LABEL_8:
      if ( !v5 ) /*0x550397*/
        goto LABEL_18; /*0x550397*/
    }
    else
    {
      while ( *v7 == *v6 ) /*0x550385*/
      {
        v5 -= 4; /*0x550387*/
        ++v6; /*0x55038a*/
        ++v7; /*0x55038d*/
        if ( v5 < 4 ) /*0x550393*/
          goto LABEL_8; /*0x550393*/
      }
    }
    v8 = *(unsigned __int8 *)v7 - *(unsigned __int8 *)v6; /*0x55039f*/
    if ( v8 ) /*0x5503a1*/
      goto LABEL_16; /*0x5503a1*/
    v9 = v5 - 1; /*0x5503a3*/
    v10 = (unsigned __int8 *)v6 + 1; /*0x5503a6*/
    v11 = (unsigned __int8 *)v7 + 1; /*0x5503a9*/
    if ( v9 ) /*0x5503ae*/
    {
      v8 = *v11 - *v10; /*0x5503b6*/
      if ( v8 /*0x5503e6*/
        || (v12 = v9 - 1, v13 = v10 + 1, v14 = v11 + 1, v12)
        && ((v8 = *v14 - *v13) != 0 || (v15 = v13 + 1, v16 = v14 + 1, v12 != 1) && (v8 = *v16 - *v15) != 0) )
      {
LABEL_16:
        v17 = 1; /*0x5503ea*/
        if ( v8 <= 0 ) /*0x5503ef*/
          return 0; /*0x550400*/
        return v17 == 0; /*0x5503ef*/
      }
    }
LABEL_18:
    v17 = 0; /*0x550403*/
    return v17 == 0; /*0x550411*/
  }
  return 1; /*0x5503fc*/
}
