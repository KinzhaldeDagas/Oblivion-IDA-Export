unsigned int __thiscall sub_6F2C20(char **this, unsigned int a2, float a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  OB_CLeafLodEngine_SLodEntry_010201A0 *v8; // ebp
  char *v9; // ebp
  unsigned int v10; // edi
  char *v11; // edi

  v5 = (unsigned int)*(this + 1); /*0x6f2c25*/
  if ( v5 ) /*0x6f2c2b*/
    result = (int)&(*(this + 2))[-v5] >> 3; /*0x6f2c36*/
  else
    result = 0; /*0x6f2c2d*/
  if ( result >= a2 ) /*0x6f2c3f*/
  {
    if ( v5 ) /*0x6f2c77*/
    {
      v9 = *(this + 2); /*0x6f2c79*/
      result = (int)&v9[-v5] >> 3; /*0x6f2c80*/
      if ( a2 < result ) /*0x6f2c85*/
      {
        if ( v5 > (unsigned int)v9 ) /*0x6f2c89*/
          _invalid_parameter_noinfo(); /*0x6f2c8b*/
        v10 = (unsigned int)*(this + 1); /*0x6f2c90*/
        if ( v10 > (unsigned int)*(this + 2) ) /*0x6f2c96*/
          _invalid_parameter_noinfo(); /*0x6f2c98*/
        a4 = v10; /*0x6f2c9d*/
        v11 = (char *)(v10 + 8 * a2); /*0x6f2ca1*/
        if ( v11 > *(this + 2) || v11 < *(this + 1) ) /*0x6f2cac*/
          _invalid_parameter_noinfo(); /*0x6f2cae*/
        return (unsigned int)sub_6F1530(this, (int *)&a3, (int)this, v11, (int)this, v9); /*0x6f2cbe*/
      }
    }
  }
  else
  {
    if ( v5 ) /*0x6f2c43*/
      v7 = (int)&(*(this + 2))[-v5] >> 3; /*0x6f2c4e*/
    else
      v7 = 0; /*0x6f2c45*/
    v8 = (OB_CLeafLodEngine_SLodEntry_010201A0 *)*(this + 2); /*0x6f2c51*/
    if ( v5 > (unsigned int)v8 ) /*0x6f2c56*/
      _invalid_parameter_noinfo(); /*0x6f2c58*/
    return sub_6F2060((float **)this, (int)this, v8, a2 - v7, (const OB_CBillboardLeaf_010201A0 **)&a3); /*0x6f2c69*/
  }
  return result; /*0x6f2c6e*/
}
