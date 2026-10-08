// Conventional matrix product: out = this * rhs. Asserts this.columns == rhs.rows.
FaceGenMatrix *__thiscall FaceGenMatrix_Multiply(
        const FaceGenMatrix *this,
        FaceGenMatrix *out,
        const FaceGenMatrix *rhs)
{
  unsigned int v5; // edi
  float *begin; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // ecx
  float *v13; // [esp+14h] [ebp-10h]
  float *v14; // [esp+1Ch] [ebp-8h]
  unsigned int outa; // [esp+28h] [ebp+4h]
  const FaceGenMatrix *rhsa; // [esp+2Ch] [ebp+8h]

  v5 = 0; /*0x5523d0*/
  if ( this->columns != rhs->rows ) /*0x5523d9*/
    FaceGen_ReportAssertionViolation("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp", 0x10D); /*0x5523e5*/
  FaceGenMatrix_InitializeDimensions(out, this->rows, rhs->columns); /*0x5523fa*/
  rhsa = 0; /*0x552401*/
  if ( this->rows ) /*0x5523ff*/
  {
    while ( 1 ) /*0x552415*/
    {
      for ( outa = 0; outa < rhs->columns; ++outa ) /*0x552412*/
      {
        begin = out->begin; /*0x552420*/
        if ( !begin || !(out->end - begin) ) /*0x55242c*/
          _invalid_parameter_noinfo((int)out, v5, (int)this); /*0x552431*/
        v5 = 0; /*0x55244a*/
        for ( out->begin[(_DWORD)rhsa * out->columns + outa] = 0.0; /*0x55244f*/
              v5 < this->columns;
              v14[outa] = v11[outa] * v13[v5 - 1] + v14[outa] )
        {
          v8 = out->begin; /*0x552458*/
          if ( !v8 || !(out->end - v8) ) /*0x552464*/
            _invalid_parameter_noinfo((int)out, v5, (int)this); /*0x552469*/
          v9 = this->begin; /*0x55247c*/
          v14 = &out->begin[(_DWORD)rhsa * out->columns]; /*0x552481*/
          if ( !v9 || !(this->end - v9) ) /*0x55248c*/
            _invalid_parameter_noinfo((int)out, v5, (int)this); /*0x552491*/
          v10 = rhs->begin; /*0x5524a4*/
          v13 = &this->begin[(_DWORD)rhsa * this->columns]; /*0x5524a9*/
          if ( !v10 || !(rhs->end - v10) ) /*0x5524b4*/
            _invalid_parameter_noinfo((int)out, v5, (int)this); /*0x5524b9*/
          v11 = &rhs->begin[v5 * rhs->columns]; /*0x5524cb*/
          ++v5; /*0x5524d2*/
        }
      }
      rhsa = (const FaceGenMatrix *)((char *)rhsa + 1); /*0x55250c*/
      if ( (unsigned int)rhsa >= this->rows ) /*0x552510*/
        break; /*0x552510*/
      v5 = 0; /*0x552410*/
    }
  }
  return out; /*0x552516*/
}
