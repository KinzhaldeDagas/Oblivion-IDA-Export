// Matrix transpose: out has source.columns x source.rows and receives out[col,row] = source[row,col].
FaceGenMatrix *__thiscall FaceGenMatrix_Transpose(const FaceGenMatrix *this, FaceGenMatrix *out)
{
  unsigned int v3; // ebp
  unsigned int i; // edi
  float *begin; // eax
  float *v6; // eax
  float *v7; // eax
  float *v9; // [esp+Ch] [ebp-8h]

  v3 = 0; /*0x552743*/
  FaceGenMatrix_InitializeDimensions(out, this->columns, this->rows); /*0x55274b*/
  if ( this->rows ) /*0x552750*/
  {
    do /*0x5527c0*/
    {
      for ( i = 0; i < this->columns; v7[v3] = v9[i - 1] ) /*0x552757*/
      {
        begin = this->begin; /*0x552760*/
        if ( !begin || !(this->end - begin) ) /*0x55276c*/
          _invalid_parameter_noinfo((int)out, i, (int)this); /*0x552771*/
        v6 = out->begin; /*0x552782*/
        v9 = &this->begin[v3 * this->columns]; /*0x552787*/
        if ( !v6 || !(out->end - v6) ) /*0x552792*/
          _invalid_parameter_noinfo((int)out, i, (int)this); /*0x552797*/
        v7 = &out->begin[i * out->columns]; /*0x5527a9*/
        ++i; /*0x5527ac*/
      }
      ++v3; /*0x5527bb*/
    }
    while ( v3 < this->rows ); /*0x5527c0*/
  }
  return out; /*0x5527c3*/
}
