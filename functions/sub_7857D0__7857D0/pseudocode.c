// Oblivion 1.2.0.416: vector<stVec>::insert(position,value) wrapper returning a checked iterator. IDA boundary repaired from 0x7857D0..0x785843 plus false 0x785850 tail to the real 0x7857D0..0x785880 function; false FUNC_NORET cleared.
OB_stVector_stVecIterator_010201A0 *__thiscall OB_stVector_stVec_InsertOne_010201A0(
        OB_stVector_stVec_010201A0 *this,
        OB_stVector_stVecIterator_010201A0 *result,
        OB_stVector_stVecIterator_010201A0 position,
        const OB_stVec_010201A0 *value)
{
  OB_stVec_010201A0 *begin; // edi
  OB_stVector_stVec_010201A0 *owner; // ebx
  int v7; // edi
  OB_stVec_010201A0 *v8; // ebx
  OB_stVec_010201A0 *v9; // edi

  begin = this->begin; /*0x7857db*/
  if ( begin && this->end - begin ) /*0x7857f8*/
  {
    if ( begin > this->end ) /*0x785806*/
      _invalid_parameter_noinfo(); /*0x785808*/
    owner = position.owner; /*0x78580d*/
    if ( !position.owner || position.owner != this ) /*0x785817*/
      _invalid_parameter_noinfo(); /*0x785819*/
    v7 = position.current - begin; /*0x785831*/
  }
  else
  {
    owner = position.owner; /*0x7857fc*/
    v7 = 0; /*0x785800*/
  }
  OB_stVector_stVec_InsertFill_010201A0( /*0x78583e*/
    this,
    (OB_stVector_stVecIterator_010201A0)__PAIR64__((unsigned int)position.current, (unsigned int)owner),
    1u,
    value);
  v8 = this->begin; /*0x785843*/
  if ( v8 > this->end ) /*0x785849*/
    _invalid_parameter_noinfo(); /*0x78584b*/
  v9 = &v8[v7]; /*0x785853*/
  if ( v9 > this->end || v9 < this->begin ) /*0x785862*/
    _invalid_parameter_noinfo(); /*0x785864*/
  result->current = v9; /*0x78586d*/
  result->owner = this; /*0x785871*/
  return result; /*0x785873*/
}
