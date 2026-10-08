// Verified Oblivion: row-major sum of coefficient squares over rows*columns. Each square and accumulator are stored as float; result returned through x87. Storage check only establishes nonempty vector, not index < storage length. Requires consistent matrix dimensions/storage. Used by Combine and sub_6EE270.
float __thiscall FaceGenMatrix_SumSquares(const FaceGenMatrix *this)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  float *begin; // eax
  unsigned int v5; // edx
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]
  float v10; // [esp+Ch] [ebp-4h]

  v8 = 0.0; /*0x5511d7*/
  for ( i = 0; i < this->rows; ++i ) /*0x5511df*/
  {
    for ( j = 0; j < this->columns; v8 = v10 + v8 ) /*0x5511e6*/
    {
      begin = this->begin; /*0x5511f0*/
      if ( !begin || !(this->end - begin) ) /*0x5511fc*/
        _invalid_parameter_noinfo(i, j, (int)this); /*0x551201*/
      v5 = j + i * this->columns; /*0x55120f*/
      ++j; /*0x551211*/
      v9 = this->begin[v5]; /*0x55121a*/
      v10 = v9 * v9; /*0x551224*/
    }
  }
  return v8; /*0x551242*/
}
