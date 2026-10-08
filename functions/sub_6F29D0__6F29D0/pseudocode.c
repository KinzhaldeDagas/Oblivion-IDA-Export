unsigned int __thiscall sub_6F29D0(_DWORD *this, unsigned int a2, OB_CBranchChildRef_010201A0 a3)
{
  unsigned int v4; // ecx
  unsigned int result; // eax
  int v6; // edi
  OB_CBranchChildRef_010201A0 *v7; // ebp
  char *v8; // edi
  float v9; // ebp
  char *v10; // ebx
  bool v11; // cc

  v4 = *(this + 1); /*0x6f29d5*/
  if ( v4 ) /*0x6f29db*/
    result = (int)(*(this + 2) - v4) / 0xC; /*0x6f29f4*/
  else
    result = 0; /*0x6f29dd*/
  if ( result >= a2 ) /*0x6f29fc*/
  {
    if ( v4 ) /*0x6f2a41*/
    {
      v8 = (char *)*(this + 2); /*0x6f2a43*/
      result = (int)&v8[-v4] / 0xC; /*0x6f2a58*/
      if ( a2 < result ) /*0x6f2a5c*/
      {
        if ( v4 > (unsigned int)v8 ) /*0x6f2a60*/
          _invalid_parameter_noinfo(); /*0x6f2a62*/
        v9 = *((float *)this + 1); /*0x6f2a67*/
        if ( LODWORD(v9) > *(this + 2) ) /*0x6f2a6d*/
          _invalid_parameter_noinfo(); /*0x6f2a6f*/
        v10 = (char *)(LODWORD(v9) + 0xC * a2); /*0x6f2a77*/
        v11 = (unsigned int)v10 <= *(this + 2); /*0x6f2a7b*/
        a3.percentBetweenParentVertices = v9; /*0x6f2a7e*/
        if ( !v11 || (unsigned int)v10 < *(this + 1) ) /*0x6f2a87*/
          _invalid_parameter_noinfo(); /*0x6f2a89*/
        return (unsigned int)sub_6F1470(this, &a3, (int)this, v10, (int)this, v8); /*0x6f2a99*/
      }
    }
  }
  else
  {
    if ( v4 ) /*0x6f2a00*/
      v6 = (int)(*(this + 2) - v4) / 0xC; /*0x6f2a19*/
    else
      v6 = 0; /*0x6f2a02*/
    v7 = (OB_CBranchChildRef_010201A0 *)*(this + 2); /*0x6f2a1b*/
    if ( v4 > (unsigned int)v7 ) /*0x6f2a20*/
      _invalid_parameter_noinfo(); /*0x6f2a22*/
    return sub_6F1940(this, (int)this, v7, a2 - v6, &a3); /*0x6f2a33*/
  }
  return result; /*0x6f2a38*/
}
